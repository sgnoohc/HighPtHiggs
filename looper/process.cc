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

    cutflow.addCut("CutWeight");
    cutflow.addCutToLastActiveCut("CutBVeto");
    cutflow.addCutToLastActiveCut("CutNLep");
    cutflow.addCutToLastActiveCut("CutNAK8");
    cutflow.getCut("CutNAK8");
    cutflow.addCutToLastActiveCut("CutISR400");
    cutflow.getCut("CutNAK8");
    cutflow.addCutToLastActiveCut("CutISR400to450");
    cutflow.getCut("CutNAK8");
    cutflow.addCutToLastActiveCut("CutISR450");

    // Some nested loops to create various cut regions with shorter lines of code
    std::vector<TString> ISRbins = {"400", "400to450", "450"};
    std::vector<TString> LeptonChannels = {"El", "Mu"};
    std::vector<TString> Charges = {"Plus", "Minus"};
    for (auto& ISRbin : ISRbins)
    {
        for (auto& lepton : LeptonChannels)
        {
            cutflow.getCut("CutISR"+ISRbin);
            cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton);
            for (auto& charge : Charges)
            {
                cutflow.getCut("CutISR"+ISRbin+lepton);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge);
                cutflow.getCut("CutISR"+ISRbin+lepton+charge);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge+"RecoClassA");
                cutflow.getCut("CutISR"+ISRbin+lepton+charge);
                cutflow.addCutToLastActiveCut("CutISR"+ISRbin+lepton+charge+"RecoClassB");
            }
        }
    }

    for (auto& ISRbin : ISRbins)
    {
        // CutMuMinusRecoClassA
        cutflow.getCut("CutISR"+ISRbin+"MuMinusRecoClassA");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut1");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut2");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawMan");

        // CutMuPlusRecoClassA
        cutflow.getCut("CutISR"+ISRbin+"MuPlusRecoClassA");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut1");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut2");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut3");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawMan");

        // CutMuMinusRecoClassB
        cutflow.getCut("CutISR"+ISRbin+"MuMinusRecoClassB");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut1");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut2");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut3");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut4");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut5");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut6");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawMan");

        // CutMuPlusRecoClassB
        cutflow.getCut("CutISR"+ISRbin+"MuPlusRecoClassB");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut1");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut2");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut3");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut4");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut5");
        cutflow.addCutToLastActiveCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawMan");
    }

    // Book cutflows
    cutflow.bookCutflows();

    // Histogram utility object that is used to define the histograms
    RooUtil::Histograms histograms;
    histograms.addHistogram("yield", 8, 0, 8);

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
        cutflow.setCut("CutWeight"      , hww.CutGenHT() > 0                                                , hww.wgt());
        cutflow.setCut("CutBVeto"       , hww.nbmed() == 0                                                  , 1);
        cutflow.setCut("CutNLep"        , hww.CutNLep() > 0                                                 , 1);
        cutflow.setCut("CutNAK8"        , hww.nak8jets() > 0                                                , 1);
        cutflow.setCut("CutISR400"      , hww.recoisrmegajet_pt() > 400.                                    , 1);
        cutflow.setCut("CutISR400to450" , hww.recoisrmegajet_pt() > 400. && hww.recoisrmegajet_pt() <= 450. , 1);
        cutflow.setCut("CutISR450"      , hww.recoisrmegajet_pt() > 450.                                    , 1);

        // Nested for loop to save lines of code
        for (auto& ISRbin : ISRbins)
        {
            for (auto& lepton : LeptonChannels)
            {
                bool flavor = lepton.EqualTo("El") ? hww.CutEl() : hww.CutMu();
                cutflow.setCut("CutISR"+ISRbin+lepton, flavor, 1);
                for (auto& charge : Charges)
                {
                    bool sign = charge.EqualTo("Plus") ?
                        lepton.EqualTo("El") ? hww.CutElPlus() : hww.CutMuPlus()
                        :
                        lepton.EqualTo("El") ? hww.CutElMinus() : hww.CutMuMinus()
                        ;
                    cutflow.setCut("CutISR"+ISRbin+lepton+charge, sign, 1);
                    cutflow.setCut("CutISR"+ISRbin+lepton+charge+"RecoClassA", sign && (hww.wlepwhadptratiodiff()>0.), 1);
                    cutflow.setCut("CutISR"+ISRbin+lepton+charge+"RecoClassB", sign && (hww.wlepwhadptratiodiff()<0.), 1);
                }
            }
        }

        for (auto& ISRbin : ISRbins)
        {
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut1" , (hww.lep_relIso03EA()>0.2)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawManCut2" , (hww.lep_miniIsoEA()<0.02)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassAStrawMan"     , (hww.recowhad_puppi_mass()>60)*(hww.recowhad_puppi_mass()<105)                 , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut1"  , (hww.lep_relIso03EA()>0.2)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut2"  , (hww.lep_miniIsoEA()<0.02)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawManCut3"  , (hww.recohiggs_max()<200.)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassAStrawMan"      , (hww.recowhad_puppi_mass()>60)*(hww.recowhad_puppi_mass()<105)                 , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut1" , (hww.recolepton_recowhad_dr()<0.75)                                            , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut2" , (hww.recowhad_puppi_mass()<130)                                                , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut3" , (hww.lep_customrelIso005EA()<1.12)                                             , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut4" , (hww.recowhad_plep_puppi_mass()<154.)                                          , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut5" , (hww.recohiggs_min()<200.)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawManCut6" , ((hww.recoisrmegajet_pt() / (hww.recowhad_puppi_pt() + hww.met_pt()) - 1)<0.2) , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuMinusRecoClassBStrawMan"     , ((hww.recowhad_mlep_puppi_mass()>70)*(hww.recowhad_mlep_puppi_mass()<100))     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut1"  , (hww.recolepton_recowhad_dr()<0.75)                                            , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut2"  , (hww.recowhad_puppi_mass()<125)                                                , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut3"  , (hww.lep_customrelIso010EA()<1.28)                                             , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut4"  , (hww.recowhad_plep_puppi_mass()<141.)                                          , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawManCut5"  , (hww.recohiggs_min()<200.)                                                     , 1);
            cutflow.setCut("CutISR"+ISRbin+"MuPlusRecoClassBStrawMan"      , ((hww.recowhad_mlep_puppi_mass()>75)*(hww.recowhad_mlep_puppi_mass()<105))     , 1);
        }

        int yield = -1;
        if (hww.CutElMinus()&& (hww.wlepwhadptratiodiff() > 0.)) yield = 0;
        if (hww.CutElPlus() && (hww.wlepwhadptratiodiff() > 0.)) yield = 1;
        if (hww.CutElMinus()&& (hww.wlepwhadptratiodiff() < 0.)) yield = 2;
        if (hww.CutElPlus() && (hww.wlepwhadptratiodiff() < 0.)) yield = 3;
        if (hww.CutMuMinus()&& (hww.wlepwhadptratiodiff() > 0.)) yield = 4;
        if (hww.CutMuPlus() && (hww.wlepwhadptratiodiff() > 0.)) yield = 5;
        if (hww.CutMuMinus()&& (hww.wlepwhadptratiodiff() < 0.)) yield = 6;
        if (hww.CutMuPlus() && (hww.wlepwhadptratiodiff() < 0.)) yield = 7;

        cutflow.setVariable("yield", yield);

        cutflow.fill();
    }

    // Writing output file
    cutflow.saveOutput();

    delete ofile;

}
