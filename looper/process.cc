#include "hwwtree.h"
#include "rooutil/rooutil.h"

// ./process INPUTFILEPATH OUTPUTFILEPATH [NEVENTS]
int main(int argc, char** argv)
{
    // Argument checking
    if (argc < 3)
    {
        std::cout << "Usage:" << std::endl;
        std::cout << "  $ ./process INPUTFILES OUTPUTFILE [NEVENTS]" << std::endl;
        std::cout << std::endl;
        std::cout << "  INPUTFILES      comma separated file list" << std::endl;
        std::cout << "  OUTPUTFILE      output file name" << std::endl;
        std::cout << "  [NEVENTS=-1]    # of events to run over" << std::endl;
        std::cout << std::endl;
        return 1;
    }

    // Creating output file where we will put the outputs of the processing
    TFile* ofile = new TFile(argv[2], "recreate");

    // Create a TChain of the input files
    // The input files can be comma separated (e.g. "file1.root,file2.root") or with wildcard (n.b. be sure to escape)
    TChain* ch = RooUtil::FileUtil::createTChain("t", argv[1]);

    // Number of events to loop over
    int nEvents = argc > 3 ? atoi(argv[3]) : -1;

    // Create a Looper object to loop over input files
    RooUtil::Looper<hwwtree> looper(ch, &hww, nEvents);

    // Cutflow utility object that creates a tree structure of cuts
    RooUtil::Cutflow cutflow(ofile);

    cutflow.addCut("CutWeight"               , [&]() { return hww.CutGenHT() > 0; } , [&]() { return hww.wgt(); } );
    cutflow.addCutToLastActiveCut("CutBVeto" , [&]() { return hww.nbmed()   == 0; } , UNITY                       );
    cutflow.addCutToLastActiveCut("CutNLep"  , [&]() { return hww.CutNLep()  > 0; } , UNITY                       );
    cutflow.addCutToLastActiveCut("CutNAK8"  , [&]() { return hww.nak8jets() > 0; } , UNITY                       );

    // Some nested loops to create various cut regions with shorter lines of code
    std::vector<TString> ISRbins = {"300", "300to400", "400", "400to450", "450"};
    std::vector<TString> LeptonChannels = {"El", "Mu"};
    std::vector<TString> Charges = {"Plus", "Minus"};

    for (auto& ISRbin : ISRbins)
    {
        float fISRbin = ISRbin.Atof();
        cutflow.getCut("CutNAK8");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin, [=]() { return hww.recoisrmegajet_pt() > fISRbin; }, UNITY);
        for (auto& lepton : LeptonChannels)
        {
            cutflow.getCut("CutISR"+ISRbin);
            cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton, [=]() { return lepton.EqualTo("El") ? hww.CutEl() : hww.CutMu(); }, UNITY);
            for (auto& charge : Charges)
            {
                cutflow.getCut("CutISR"+ISRbin+lepton);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge, [=]() { return charge.EqualTo("Plus") ? lepton.EqualTo("El") ? hww.CutElPlus() : hww.CutMuPlus() : lepton.EqualTo("El") ? hww.CutElMinus() : hww.CutMuMinus() ;}, UNITY );
                cutflow.getCut("CutISR"+ISRbin+lepton+charge);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge+"RecoClassA", [=]() { return (hww.wlepwhadptratiodiff()>0.); }, UNITY);
                cutflow.getCut("CutISR"+ISRbin+lepton+charge);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge+"RecoClassB", [=]() { return (hww.wlepwhadptratiodiff()<0.); }, UNITY);
            }
        }
    }

    for (auto& ISRbin : ISRbins)
    {
        // CutMuMinusRecoClassA
        cutflow.getCut("CutISR"+ISRbin+"MuMinusRecoClassA");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut1", [=]() { return (hww.lep_relIso03EA()>0.2)                                     ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut2", [=]() { return (hww.lep_miniIsoEA()<0.02)                                     ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawMan"    , [=]() { return (hww.recowhad_puppi_mass()>60)*(hww.recowhad_puppi_mass()<105) ; }, UNITY);

        // CutMuPlusRecoClassA
        cutflow.getCut("CutISR"+ISRbin+"MuPlusRecoClassA");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut1", [=]() { return (hww.lep_relIso03EA()>0.2)                                      ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut2", [=]() { return (hww.lep_miniIsoEA()<0.02)                                      ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut3", [=]() { return (hww.recohiggs_max()<200.)                                      ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawMan"    , [=]() { return (hww.recowhad_puppi_mass()>60)*(hww.recowhad_puppi_mass()<105)  ; }, UNITY);

        // CutMuMinusRecoClassB
        cutflow.getCut("CutISR"+ISRbin+"MuMinusRecoClassB");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut1", [=]() { return (hww.recolepton_recowhad_dr()<0.75)                                             ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut2", [=]() { return (hww.recowhad_puppi_mass()<130)                                                 ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut3", [=]() { return (hww.lep_customrelIso005EA()<1.12)                                              ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut4", [=]() { return (hww.recowhad_plep_puppi_mass()<154.)                                           ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut5", [=]() { return (hww.recohiggs_min()<200.)                                                      ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut6", [=]() { return ((hww.recoisrmegajet_pt() / (hww.recowhad_puppi_pt() + hww.met_pt()) - 1)<0.2)  ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawMan"    , [=]() { return ((hww.recowhad_mlep_puppi_mass()>70)*(hww.recowhad_mlep_puppi_mass()<100))      ; }, UNITY);

        // CutMuPlusRecoClassB
        cutflow.getCut("CutISR"+ISRbin+"MuPlusRecoClassB");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut1", [=]() { return (hww.recolepton_recowhad_dr()<0.75)                                         ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut2", [=]() { return (hww.recowhad_puppi_mass()<125)                                             ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut3", [=]() { return (hww.lep_customrelIso010EA()<1.28)                                          ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut4", [=]() { return (hww.recowhad_plep_puppi_mass()<141.)                                       ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut5", [=]() { return (hww.recohiggs_min()<200.)                                                  ; }, UNITY);
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawMan"    , [=]() { return ((hww.recowhad_mlep_puppi_mass()>75)*(hww.recowhad_mlep_puppi_mass()<105))  ; }, UNITY);
    }

    // Book cutflows
    cutflow.bookCutflows();

    // Histogram utility object that is used to define the histograms
    RooUtil::Histograms histograms;
    histograms.addHistogram("lep_relIso03EA"           , 180 , 0    , 4   , [=](){ return hww.lep_relIso03EA()                                                   ;} );
    histograms.addHistogram("lep_miniIsoEA"            , 180 , 0    , 4   , [=](){ return hww.lep_miniIsoEA()                                                    ;} );
    histograms.addHistogram("recowhad_puppi_mass"      , 180 , 0    , 300 , [=](){ return hww.recowhad_puppi_mass()                                              ;} );
    histograms.addHistogram("recohiggs_min"            , 180 , 0    , 500 , [=](){ return hww.recohiggs_min()                                                    ;} );
    histograms.addHistogram("recohiggs_max"            , 180 , 0    , 500 , [=](){ return hww.recohiggs_max()                                                    ;} );
    histograms.addHistogram("recolepton_recowhad_dr"   , 180 , 0    , 4   , [=](){ return hww.recolepton_recowhad_dr()                                           ;} );
    histograms.addHistogram("recoisrbalance"           , 180 , -1.5 , 1.5 , [=](){ return hww.recoisrmegajet_pt() / (hww.recowhad_puppi_pt() + hww.met_pt()) - 1 ;} );
    histograms.addHistogram("recowhad_mlep_puppi_mass" , 180 , 0    , 300 , [=](){ return hww.recowhad_mlep_puppi_mass()                                         ;} );
    histograms.addHistogram("recowhad_plep_puppi_mass" , 180 , 0    , 300 , [=](){ return hww.recowhad_plep_puppi_mass()                                         ;} );
    histograms.addHistogram("lep_customrelIso005EA"    , 180 , 0    , 10  , [=](){ return hww.lep_customrelIso005EA()                                            ;} );
    histograms.addHistogram("lep_customrelIso010EA"    , 180 , 0    , 10  , [=](){ return hww.lep_customrelIso010EA()                                            ;} );
    histograms.addHistogram("yield"                    , 8   , 0    , 8   , [=](){
                                                                                    int yield = -1;
                                                                                    if (hww.CutElMinus()&& (hww.wlepwhadptratiodiff() > 0.)) yield = 0;
                                                                                    if (hww.CutElPlus() && (hww.wlepwhadptratiodiff() > 0.)) yield = 1;
                                                                                    if (hww.CutElMinus()&& (hww.wlepwhadptratiodiff() < 0.)) yield = 2;
                                                                                    if (hww.CutElPlus() && (hww.wlepwhadptratiodiff() < 0.)) yield = 3;
                                                                                    if (hww.CutMuMinus()&& (hww.wlepwhadptratiodiff() > 0.)) yield = 4;
                                                                                    if (hww.CutMuPlus() && (hww.wlepwhadptratiodiff() > 0.)) yield = 5;
                                                                                    if (hww.CutMuMinus()&& (hww.wlepwhadptratiodiff() < 0.)) yield = 6;
                                                                                    if (hww.CutMuPlus() && (hww.wlepwhadptratiodiff() < 0.)) yield = 7;
                                                                                    return yield;
                                                                                });

    // Book Histograms
    for (auto& ISRbin : ISRbins)
    {
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"ElPlusRecoClassA");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"ElPlusRecoClassB");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"ElMinusRecoClassA");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"ElMinusRecoClassB");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"MuPlusRecoClassA");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"MuPlusRecoClassB");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"MuMinusRecoClassA");
        cutflow.bookHistogramsForCutAndBelow(histograms, "CutISR"+ISRbin+"MuMinusRecoClassB");
    }

    // Print cut structure
    cutflow.printCuts();

    // Looping input file
    while (looper.nextEvent())
    {
        cutflow.fill();
    }

    // Writing output file
    cutflow.saveOutput();

    delete ofile;

}
