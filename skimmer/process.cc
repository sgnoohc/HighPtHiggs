#include "hwwtree.h"
#include "rooutil/rooutil.h"

// ./process INPUTFILEPATH OUTPUTFILEPATH [NEVENTS]
int main(int argc, char** argv)
{

    // Parse input arguments
    TString inputFileList = "";
    TString outputFileName = "";
    int nEventsToProcess = -1;
    std::tie(inputFileList, outputFileName, nEventsToProcess) = RooUtil::CommandUtil::parseArgs(argc, argv);

    // Open up the input files into a single TChain
    TChain* ch = RooUtil::FileUtil::createTChain("t", inputFileList);

    // Creating output file
    TFile* ofile = new TFile(outputFileName, "recreate");
    TTree* t = new TTree("t", "t");
    RooUtil::TTreeX tx(t);

    // Selection regions
    tx.createBranch<float>("CutGenHT");
    tx.createBranch<float>("CutNLep");
    tx.createBranch<float>("CutNAK8");
    tx.createBranch<float>("CutISRMegaJet");
    tx.createBranch<float>("CutISRBalance");
    tx.createBranch<float>("CutMu");
    tx.createBranch<float>("CutMuPlus");
    tx.createBranch<float>("CutMuMinus");
    tx.createBranch<float>("CutEl");
    tx.createBranch<float>("CutElPlus");
    tx.createBranch<float>("CutElMinus");
    tx.createBranch<float>("CutClass1");
    tx.createBranch<float>("CutClass2");
    tx.createBranch<float>("CutClass3");
    tx.createBranch<float>("CutClass4");
    tx.createBranch<float>("CutClassA");
    tx.createBranch<float>("CutClassB");
    tx.createBranch<float>("CutRecoClassA");
    tx.createBranch<float>("CutRecoClassB");

    // Event weights
    tx.createBranch<float>("wgt");

    // Variables to study
    tx.createBranch<int>("wstar_channel_id");
    tx.createBranch<float>("lepmetpt");
    tx.createBranch<float>("ak8minusleppt");
    tx.createBranch<float>("wlepptratio");
    tx.createBranch<float>("whadptratio");
    tx.createBranch<float>("wlepwhadptratiosum");
    tx.createBranch<float>("wlepwhadptratiodiff");
    tx.createBranch<float>("wlepwhadptratioratio");
    tx.createBranch<float>("lep_customrelIso005EA");
    tx.createBranch<float>("lep_customrelIso010EA");
    tx.createBranch<float>("lep_customrelIso015EA");
    tx.createBranch<float>("lep_customrelIso020EA");
    tx.createBranch<float>("lep_customrelIso025EA");
    tx.createBranch<float>("lep_customrelIso030EA");
    tx.createBranch<float>("lep_customrelIso035EA");
    tx.createBranch<float>("lep_customrelIso040EA");
    tx.createBranch<float>("lep_customrelIso045EA");
    tx.createBranch<float>("lep_customrelIso050EA");
    tx.createBranch<float>("lep_customrelIso055EA");
    tx.createBranch<float>("lep_customrelIso060EA");
    tx.createBranch<float>("lep_customrelIso065EA");
    tx.createBranch<float>("lep_customrelIso070EA");
    tx.createBranch<float>("lep_customrelIso075EA");
    tx.createBranch<float>("lep_customrelIso080EA");
    tx.createBranch<int>("nb");
    tx.createBranch<int>("nbmed");
    tx.createBranch<int>("nbtight");
    tx.createBranch<int>("nb30");
    tx.createBranch<int>("nb30med");
    tx.createBranch<int>("nb30tight");
    tx.createBranch<int>("nb40");
    tx.createBranch<int>("nb40med");
    tx.createBranch<int>("nb40tight");
    tx.createBranch<int>("nb50");
    tx.createBranch<int>("nb50med");
    tx.createBranch<int>("nb50tight");
    tx.createBranch<int>("nbOR");
    tx.createBranch<int>("nbORmed");
    tx.createBranch<int>("nbORtight");
    tx.createBranch<int>("nbOR30");
    tx.createBranch<int>("nbOR30med");
    tx.createBranch<int>("nbOR30tight");
    tx.createBranch<int>("nbOR40");
    tx.createBranch<int>("nbOR40med");
    tx.createBranch<int>("nbOR40tight");
    tx.createBranch<int>("nbOR50");
    tx.createBranch<int>("nbOR50med");
    tx.createBranch<int>("nbOR50tight");
    tx.createBranch<int>("nrecolep");
    tx.createBranch<int>("nak8jets");
    tx.createBranch<int>("nj");
    tx.createBranch<int>("nj50");
    tx.createBranch<float>("recowhad_puppi_mass");
    tx.createBranch<float>("recowhad_mass");
    tx.createBranch<float>("recowhad_puppi_nJettinessTau1");
    tx.createBranch<float>("recowhad_nJettinessTau1");
    tx.createBranch<float>("recowhad_puppi_nJettinessTau2");
    tx.createBranch<float>("recowhad_nJettinessTau2");
    tx.createBranch<float>("recowhad_puppi_nJettinessTauRatio");
    tx.createBranch<float>("recowhad_nJettinessTauRatio");
    tx.createBranch<float>("recohiggs_mass");
    tx.createBranch<float>("recohiggs2_mass");
    tx.createBranch<float>("recohiggs_min");
    tx.createBranch<float>("recohiggs_max");
    tx.createBranch<float>("recowhad_mlep_puppi_mass");
    tx.createBranch<float>("recowhad_mlep_mass");
    tx.createBranch<float>("recowhad_plep_puppi_mass");
    tx.createBranch<float>("recowhad_plep_mass");
    tx.createBranch<float>("pf_annuli_energy_0");
    tx.createBranch<float>("pf_annuli_energy_1");
    tx.createBranch<float>("pf_annuli_energy_2");
    tx.createBranch<float>("pf_annuli_energy_3");
    tx.createBranch<float>("pf_annuli_energy_4");
    tx.createBranch<float>("pf_annuli_energy_5");
    tx.createBranch<float>("pf_annuli_energy_6");
    tx.createBranch<float>("pf_annuli_energy_7");
    tx.createBranch<float>("lep_miniIsoEA");
    tx.createBranch<float>("lep_relIso04DB");
    tx.createBranch<float>("lep_relIso03EA");
    tx.createBranch<float>("recolepton_recowhad_dr");
    tx.createBranch<float>("recolepton_recowhad_mlep_dr");
    tx.createBranch<float>("recolepton_pt");
    tx.createBranch<float>("met_pt");
    tx.createBranch<float>("recowhad_pt");
    tx.createBranch<float>("recowhad_puppi_pt");
    tx.createBranch<float>("recolepton_met_dphi");
    tx.createBranch<float>("recoisrmegajet_pt");
    tx.createBranch<float>("recoisrbalance");
    tx.createBranch<TString>("CMS4path");
    tx.createBranch<int>("CMS4index");
    tx.createBranch<int>("run");
    tx.createBranch<int>("lumi");
    tx.createBranch<unsigned long long>("evt");
    tx.createBranch<float>("bdt_recoclassA");
    tx.createBranch<float>("bdt_recoclassB");
    tx.createBranch<float>("vhadmass");

    tx.createBranch<float>("lqq_max_dr");
    tx.createBranch<float>("lq0_dr");
    tx.createBranch<float>("lq1_dr");
    tx.createBranch<float>("qq_dr");
    tx.createBranch<float>("decay_dr");
    tx.createBranch<float>("l_qq_dr");
    tx.createBranch<float>("lqq_mass");
    tx.createBranch<float>("lvqq_mt");
    tx.createBranch<int>("higgsdecay");
    tx.createBranch<int>("nlep");
    tx.createBranch<int>("nquark");
    tx.createBranch<int>("wa_id");
    tx.createBranch<float>("isr_pt");
    tx.createBranch<float>("isr_eta");
    tx.createBranch<float>("isr_phi");
    tx.createBranch<float>("higgs_pt");
    tx.createBranch<float>("higgs_eta");
    tx.createBranch<float>("higgs_phi");
    tx.createBranch<float>("decay0_pt");
    tx.createBranch<float>("decay0_eta");
    tx.createBranch<float>("decay0_phi");
    tx.createBranch<float>("decay0_mass");
    tx.createBranch<int>("decay0_id");
    tx.createBranch<int>("decay0_isstar");
    tx.createBranch<float>("decay1_pt");
    tx.createBranch<float>("decay1_eta");
    tx.createBranch<float>("decay1_phi");
    tx.createBranch<float>("decay1_mass");
    tx.createBranch<int>("decay1_id");
    tx.createBranch<int>("decay1_isstar");
    tx.createBranch<float>("lepton_pt");
    tx.createBranch<float>("lepton_eta");
    tx.createBranch<float>("lepton_phi");
    tx.createBranch<float>("lepton_mass");
    tx.createBranch<int>("lepton_id");
    tx.createBranch<int>("lepton_isstar");
    tx.createBranch<float>("neutrino_pt");
    tx.createBranch<float>("neutrino_eta");
    tx.createBranch<float>("neutrino_phi");
    tx.createBranch<float>("neutrino_mass");
    tx.createBranch<int>("neutrino_id");
    tx.createBranch<int>("neutrino_isstar");
    tx.createBranch<float>("quark0_pt");
    tx.createBranch<float>("quark0_eta");
    tx.createBranch<float>("quark0_phi");
    tx.createBranch<float>("quark0_mass");
    tx.createBranch<int>("quark0_id");
    tx.createBranch<int>("quark0_isstar");
    tx.createBranch<float>("quark1_pt");
    tx.createBranch<float>("quark1_eta");
    tx.createBranch<float>("quark1_phi");
    tx.createBranch<float>("quark1_mass");
    tx.createBranch<int>("quark1_id");
    tx.createBranch<int>("quark1_isstar");

    tx.createBranch<int>("njInDR1");
    tx.createBranch<float>("jet0InDR1_pt");
    tx.createBranch<float>("jet1InDR1_pt");
    tx.createBranch<float>("jet0InDR1_dr");
    tx.createBranch<float>("jet1InDR1_dr");

    tx.createBranch<int>("njInDR15");
    tx.createBranch<float>("jet0InDR15_pt");
    tx.createBranch<float>("jet1InDR15_pt");
    tx.createBranch<float>("jet0InDR15_dr");
    tx.createBranch<float>("jet1InDR15_dr");

    tx.clear();

    // Booking histograms
    std::vector<TString> presel = {
        "CutGenHT",
        "CutNLep",
        "CutNAK8",
        "CutISRMegaJet",
        "CutISRBalance",
        };

    std::map<TString, std::vector<TString>> cutlists;

    cutlists["cutlistMuMinusRecoClassA"] = presel;
    cutlists["cutlistMuMinusRecoClassA"].push_back("CutMuMinus");
    cutlists["cutlistMuMinusRecoClassA"].push_back("CutRecoClassA");

    cutlists["cutlistMuMinusRecoClassB"] = presel;
    cutlists["cutlistMuMinusRecoClassB"].push_back("CutMuMinus");
    cutlists["cutlistMuMinusRecoClassB"].push_back("CutRecoClassB");

    cutlists["cutlistMuPlusRecoClassA"] = presel;
    cutlists["cutlistMuPlusRecoClassA"].push_back("CutMuPlus");
    cutlists["cutlistMuPlusRecoClassA"].push_back("CutRecoClassA");

    cutlists["cutlistMuPlusRecoClassB"] = presel;
    cutlists["cutlistMuPlusRecoClassB"].push_back("CutMuPlus");
    cutlists["cutlistMuPlusRecoClassB"].push_back("CutRecoClassB");

    cutlists["cutlistElMinusRecoClassA"] = presel;
    cutlists["cutlistElMinusRecoClassA"].push_back("CutElMinus");
    cutlists["cutlistElMinusRecoClassA"].push_back("CutRecoClassA");

    cutlists["cutlistElMinusRecoClassB"] = presel;
    cutlists["cutlistElMinusRecoClassB"].push_back("CutElMinus");
    cutlists["cutlistElMinusRecoClassB"].push_back("CutRecoClassB");

    cutlists["cutlistElPlusRecoClassA"] = presel;
    cutlists["cutlistElPlusRecoClassA"].push_back("CutElPlus");
    cutlists["cutlistElPlusRecoClassA"].push_back("CutRecoClassA");

    cutlists["cutlistElPlusRecoClassB"] = presel;
    cutlists["cutlistElPlusRecoClassB"].push_back("CutElPlus");
    cutlists["cutlistElPlusRecoClassB"].push_back("CutRecoClassB");

    std::map<TString, TH1F*> cutflows;
    std::map<TString, TH1F*> rawcutflows;
    std::tie(cutflows, rawcutflows) = RooUtil::CutflowUtil::createCutflowHistograms(cutlists);

    // Looping input file
    RooUtil::Looper<hwwtree> looper(ch, &hww, nEventsToProcess);

    // TMVA defn
    TMVA::Reader* reader_recoclassa = RooUtil::TMVAUtil::createReader("BDT", "TMVA_BDT_CutMuMinusRecoClassA.weights.xml", tx);
    TMVA::Reader* reader_recoclassb = RooUtil::TMVAUtil::createReader("BDT", "TMVA_BDT_CutMuMinusRecoClassB.weights.xml", tx);

    // Start the loop
    while (looper.nextEvent())
    {

        if (hww.nrecolep() < 1)
            continue;

        if (hww.nak8jets() < 1)
            continue;

        tx.setBranch<float>("wgt", hww.evt_scale1fb() * 150.);
        tx.setBranch<int>("wstar_channel_id", hww.wstar_channel_id());
        tx.setBranch<float>("lepmetpt", TMath::Sqrt(TMath::Power(hww.recolepton_pt()+hww.met_pt()*TMath::Cos(hww.recolepton_met_dphi()), 2) + TMath::Power(hww.met_pt()*TMath::Sin(hww.recolepton_met_dphi()), 2)));
        tx.setBranch<float>("ak8minusleppt", (hww.recowhad_p4() - hww.recolepton_p4()).pt());
        tx.setBranch<float>("lep_customrelIso005EA", hww.lep_customrelIso005EA()[0]);
        tx.setBranch<float>("lep_customrelIso010EA", hww.lep_customrelIso01EA()[0]);
        tx.setBranch<float>("lep_customrelIso015EA", hww.lep_customrelIso015EA()[0]);
        tx.setBranch<float>("lep_customrelIso020EA", hww.lep_customrelIso02EA()[0]);
        tx.setBranch<float>("lep_customrelIso025EA", hww.lep_customrelIso025EA()[0]);
        tx.setBranch<float>("lep_customrelIso030EA", hww.lep_customrelIso03EA()[0]);
        tx.setBranch<float>("lep_customrelIso035EA", hww.lep_customrelIso035EA()[0]);
        tx.setBranch<float>("lep_customrelIso040EA", hww.lep_customrelIso04EA()[0]);
        tx.setBranch<float>("lep_customrelIso045EA", hww.lep_customrelIso045EA()[0]);
        tx.setBranch<float>("lep_customrelIso050EA", hww.lep_customrelIso05EA()[0]);
        tx.setBranch<float>("lep_customrelIso055EA", hww.lep_customrelIso055EA()[0]);
        tx.setBranch<float>("lep_customrelIso060EA", hww.lep_customrelIso06EA()[0]);
        tx.setBranch<float>("lep_customrelIso065EA", hww.lep_customrelIso065EA()[0]);
        tx.setBranch<float>("lep_customrelIso070EA", hww.lep_customrelIso07EA()[0]);
        tx.setBranch<float>("lep_customrelIso075EA", hww.lep_customrelIso075EA()[0]);
        tx.setBranch<float>("lep_customrelIso080EA", hww.lep_customrelIso08EA()[0]);
        tx.setBranch<int>("nb", hww.nb());
        tx.setBranch<int>("nbmed", hww.nbmed());
        tx.setBranch<int>("nbtight", hww.nbtight());
        tx.setBranch<int>("nb30", hww.nb30());
        tx.setBranch<int>("nb30med", hww.nb30med());
        tx.setBranch<int>("nb30tight", hww.nb30tight());
        tx.setBranch<int>("nb40", hww.nb40());
        tx.setBranch<int>("nb40med", hww.nb40med());
        tx.setBranch<int>("nb40tight", hww.nb40tight());
        tx.setBranch<int>("nb50", hww.nb50());
        tx.setBranch<int>("nb50med", hww.nb50med());
        tx.setBranch<int>("nb50tight", hww.nb50tight());
        tx.setBranch<int>("nbOR", hww.nbOR());
        tx.setBranch<int>("nbORmed", hww.nbORmed());
        tx.setBranch<int>("nbORtight", hww.nbORtight());
        tx.setBranch<int>("nbOR30", hww.nbOR30());
        tx.setBranch<int>("nbOR30med", hww.nbOR30med());
        tx.setBranch<int>("nbOR30tight", hww.nbOR30tight());
        tx.setBranch<int>("nbOR40", hww.nbOR40());
        tx.setBranch<int>("nbOR40med", hww.nbOR40med());
        tx.setBranch<int>("nbOR40tight", hww.nbOR40tight());
        tx.setBranch<int>("nbOR50", hww.nbOR50());
        tx.setBranch<int>("nbOR50med", hww.nbOR50med());
        tx.setBranch<int>("nbOR50tight", hww.nbOR50tight());
        tx.setBranch<int>("nrecolep", hww.nrecolep());
        tx.setBranch<int>("nak8jets", hww.nak8jets());
        tx.setBranch<int>("nj", hww.nj());
        tx.setBranch<int>("nj50", hww.nj50());
        tx.setBranch<float>("recowhad_puppi_mass", hww.recowhad_puppi_mass());
        tx.setBranch<float>("recowhad_mass", hww.recowhad_mass());
        tx.setBranch<float>("recowhad_puppi_nJettinessTau1", hww.recowhad_puppi_nJettinessTau1());
        tx.setBranch<float>("recowhad_nJettinessTau1", hww.recowhad_nJettinessTau1());
        tx.setBranch<float>("recowhad_puppi_nJettinessTau2", hww.recowhad_puppi_nJettinessTau2());
        tx.setBranch<float>("recowhad_nJettinessTau2", hww.recowhad_nJettinessTau2());
        tx.setBranch<float>("recowhad_puppi_nJettinessTauRatio", hww.recowhad_puppi_nJettinessTau2() / hww.recowhad_puppi_nJettinessTau1());
        tx.setBranch<float>("recowhad_nJettinessTauRatio", hww.recowhad_nJettinessTau2() / hww.recowhad_nJettinessTau1());
        tx.setBranch<float>("recohiggs_mass", hww.recohiggs_mass());
        tx.setBranch<float>("recohiggs2_mass", hww.recohiggs2_mass());
        tx.setBranch<float>("recohiggs_min", TMath::Min(hww.recohiggs_mass(), hww.recohiggs2_mass()));
        tx.setBranch<float>("recohiggs_max", TMath::Max(hww.recohiggs_mass(), hww.recohiggs2_mass()));
        tx.setBranch<float>("pf_annuli_energy_0", hww.pf_annuli_energy()[0] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_1", hww.pf_annuli_energy()[1] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_2", hww.pf_annuli_energy()[2] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_3", hww.pf_annuli_energy()[3] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_4", hww.pf_annuli_energy()[4] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_5", hww.pf_annuli_energy()[5] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_6", hww.pf_annuli_energy()[6] / hww.recolepton_pt());
        tx.setBranch<float>("pf_annuli_energy_7", hww.pf_annuli_energy()[7] / hww.recolepton_pt());
        tx.setBranch<float>("lep_miniIsoEA", hww.lep_miniIsoEA()[0]);
        tx.setBranch<float>("lep_relIso04DB", hww.lep_relIso04DB()[0]);
        tx.setBranch<float>("lep_relIso03EA", hww.lep_relIso03EA()[0]);
        tx.setBranch<float>("recolepton_recowhad_dr", hww.recolepton_recowhad_dr());
        tx.setBranch<float>("recolepton_recowhad_mlep_dr", RooUtil::Calc::DeltaR(hww.recowhad_p4(), hww.recolepton_p4()) < 0.8 ? RooUtil::Calc::DeltaR(hww.recowhad_p4() - hww.recolepton_p4(), hww.recolepton_p4()) : RooUtil::Calc::DeltaR(hww.recowhad_p4(), hww.recolepton_p4()));
        tx.setBranch<float>("recolepton_pt", hww.recolepton_pt());
        tx.setBranch<float>("met_pt", hww.met_pt());
        tx.setBranch<float>("recowhad_pt", hww.recowhad_pt());
        tx.setBranch<float>("recowhad_puppi_pt", hww.recowhad_puppi_pt());
        tx.setBranch<float>("recolepton_met_dphi", hww.recolepton_met_dphi());
        tx.setBranch<float>("recoisrmegajet_pt", hww.recoisrmegajet_pt());
        tx.setBranch<float>("recoisrbalance", TMath::Abs(hww.recoisrmegajet_pt() / (hww.recowhad_puppi_pt() + hww.met_pt()) - 1));
        tx.setBranch<TString>("CMS4path", hww.CMS4path());
        tx.setBranch<int>("CMS4index", hww.CMS4index());
        tx.setBranch<int>("run", hww.run());
        tx.setBranch<int>("lumi", hww.lumi());
        tx.setBranch<unsigned long long>("evt", hww.evt());

        tx.setBranch<float>("wlepptratio", tx.getBranch<float>("lepmetpt") / hww.recoisrmegajet_pt());
        tx.setBranch<float>("whadptratio", tx.getBranch<float>("ak8minusleppt") / hww.recoisrmegajet_pt());
        tx.setBranch<float>("wlepwhadptratioratio", tx.getBranch<float>("wlepptratio") / tx.getBranch<float>("whadptratio"));
        tx.setBranch<float>("wlepwhadptratiosum", tx.getBranch<float>("wlepptratio") + tx.getBranch<float>("whadptratio"));
        tx.setBranch<float>("wlepwhadptratiodiff", tx.getBranch<float>("wlepptratio") - tx.getBranch<float>("whadptratio"));

        LV recowhad_p4 = hww.recowhad_p4();
        TLorentzVector recowhad_p4_tlv;
        TLorentzVector recowhad_p4_aodmass_tlv;
        TLorentzVector recowhad_p4_puppimass_tlv;
        recowhad_p4_tlv.SetPtEtaPhiM(recowhad_p4.pt(), recowhad_p4.eta(), recowhad_p4.phi(), recowhad_p4.mass());
        recowhad_p4_aodmass_tlv.SetPtEtaPhiM(recowhad_p4.pt(), recowhad_p4.eta(), recowhad_p4.phi(), hww.recowhad_mass());
        recowhad_p4_puppimass_tlv.SetPtEtaPhiM(recowhad_p4.pt(), recowhad_p4.eta(), recowhad_p4.phi(), hww.recowhad_puppi_mass());
        TLorentzVector recolepton_p4;
        recolepton_p4 = RooUtil::Calc::getTLV(hww.recolepton_p4());
        tx.setBranch<float>("recowhad_mlep_mass", RooUtil::Calc::DeltaR(RooUtil::Calc::getLV(recowhad_p4_aodmass_tlv), RooUtil::Calc::getLV(recolepton_p4)) < 0.8 ? (recowhad_p4_aodmass_tlv - recolepton_p4).M() : recowhad_p4_aodmass_tlv.M());
        tx.setBranch<float>("recowhad_mlep_puppi_mass", RooUtil::Calc::DeltaR(RooUtil::Calc::getLV(recowhad_p4_puppimass_tlv), RooUtil::Calc::getLV(recolepton_p4)) < 0.8 ? (recowhad_p4_puppimass_tlv - recolepton_p4).M() : recowhad_p4_puppimass_tlv.M());
        tx.setBranch<float>("recowhad_plep_mass", (recowhad_p4_aodmass_tlv + recolepton_p4).M());
        tx.setBranch<float>("recowhad_plep_puppi_mass", (recowhad_p4_puppimass_tlv + recolepton_p4).M());

        bool isW = looper.getCurrentFileName().Contains("WJetsToLNu");
        bool isTT = looper.getCurrentFileName().Contains("TT_");
        bool isHWW = looper.getCurrentFileName().Contains("HToWW");
        bool issig = isHWW;
        bool isbkg = isW || isTT;

        tx.setBranch<float>("CutGenHT"            , (looper.getCurrentFileName().Contains("WJetsToLNu_TuneCUETP8M1_13TeV") ? hww.gen_ht() < 400 : 1) * (hww.evt_scale1fb() * 150.));
        tx.setBranch<float>("CutNLep"             , (hww.nrecolep() >= 1                                                                           ) * (1)                        );
        tx.setBranch<float>("CutNAK8"             , (hww.nak8jets() >= 1                                                                           ) * (1)                        );
        tx.setBranch<float>("CutISRMegaJet"       , (hww.recoisrmegajet_pt() > 400                                                                 ) * (1)                        );
        tx.setBranch<float>("CutISRBalance"       , (TMath::Abs(hww.recoisrmegajet_pt() / (hww.recowhad_puppi_pt() + hww.met_pt()) - 1) < 0.3      ) * (1)                        );
        tx.setBranch<float>("CutMu"               , (abs(hww.recolepton_id()) == 13                                                                ) * (1)                        );
        tx.setBranch<float>("CutEl"               , (abs(hww.recolepton_id()) == 11                                                                ) * (1)                        );
        tx.setBranch<float>("CutMuPlus"           , (hww.recolepton_id() ==-13                                                                     ) * (1)                        );
        tx.setBranch<float>("CutElPlus"           , (hww.recolepton_id() ==-11                                                                     ) * (1)                        );
        tx.setBranch<float>("CutMuMinus"          , (hww.recolepton_id() == 13                                                                     ) * (1)                        );
        tx.setBranch<float>("CutElMinus"          , (hww.recolepton_id() == 11                                                                     ) * (1)                        );
        tx.setBranch<float>("CutClass1"           , (issig ? hww.wstar_channel_id() ==  0 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutClass2"           , (issig ? hww.wstar_channel_id() ==  1 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutClass3"           , (issig ? hww.wstar_channel_id() ==  2 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutClass4"           , (issig ? hww.wstar_channel_id() ==  3 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutClassA"           , (issig ? hww.wstar_channel_id() <   2 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutClassB"           , (issig ? hww.wstar_channel_id() >=  2 : 1                                                      ) * (1)                        );
        tx.setBranch<float>("CutRecoClassA"       , (tx.getBranch<float>("wlepptratio") > 0.475                                                    ) * (1)                        );
        tx.setBranch<float>("CutRecoClassB"       , (tx.getBranch<float>("wlepptratio") <=0.475                                                    ) * (1)                        );

        std::vector<float> inputVals_recoclassA = RooUtil::TMVAUtil::getInputValues(reader_recoclassa, tx);
        tx.setBranch<float>("bdt_recoclassA", reader_recoclassa->EvaluateMVA(inputVals_recoclassA, "BDT"));

        std::vector<float> inputVals_recoclassB = RooUtil::TMVAUtil::getInputValues(reader_recoclassb, tx);
        tx.setBranch<float>("bdt_recoclassB", reader_recoclassb->EvaluateMVA(inputVals_recoclassB, "BDT"));

        tx.setBranch<float>("lqq_max_dr", issig ? hww.lqq_max_dr() : -999);
        tx.setBranch<float>("lq0_dr", issig ? hww.lq0_dr() : -999);
        tx.setBranch<float>("lq1_dr", issig ? hww.lq1_dr() : -999);
        tx.setBranch<float>("qq_dr", issig ? hww.qq_dr() : -999);
        tx.setBranch<float>("decay_dr", issig ? hww.decay_dr() : -999);
        tx.setBranch<float>("l_qq_dr", issig ? hww.l_qq_dr() : -999);
        tx.setBranch<float>("lqq_mass", issig ? hww.lqq_mass() : -999);
        tx.setBranch<float>("lvqq_mt", issig ? hww.lvqq_mt() : -999);

        tx.setBranch<int>("higgsdecay", issig ? hww.higgsdecay() : -999);
        tx.setBranch<int>("nlep", issig ? hww.nlep() : -999);
        tx.setBranch<int>("nquark", issig ? hww.nquark() : -999);
        tx.setBranch<int>("wa_id", issig ? hww.wa_id() : -999);
        tx.setBranch<float>("isr_pt", issig ? hww.isr_pt() : -999);
        tx.setBranch<float>("isr_eta", issig ? hww.isr_eta() : -999);
        tx.setBranch<float>("isr_phi", issig ? hww.isr_phi() : -999);
        tx.setBranch<float>("higgs_pt", issig ? hww.higgs_p4().pt() : -999);
        tx.setBranch<float>("higgs_eta", issig ? hww.higgs_p4().eta() : -999);
        tx.setBranch<float>("higgs_phi", issig ? hww.higgs_p4().phi() : -999);
        tx.setBranch<float>("decay0_pt", issig ? hww.decay_p4()[0].pt() : -999);
        tx.setBranch<float>("decay0_eta", issig ? hww.decay_p4()[0].eta() : -999);
        tx.setBranch<float>("decay0_phi", issig ? hww.decay_p4()[0].phi() : -999);
        tx.setBranch<float>("decay0_mass", issig ? hww.decay_p4()[0].mass() : -999);
        tx.setBranch<int>("decay0_id", issig ? hww.decay_id()[0] : -999);
        tx.setBranch<int>("decay0_isstar", issig ? hww.decay_isstar()[0] : -999);
        tx.setBranch<float>("decay1_pt", issig ? hww.decay_p4()[1].pt() : -999);
        tx.setBranch<float>("decay1_eta", issig ? hww.decay_p4()[1].eta() : -999);
        tx.setBranch<float>("decay1_phi", issig ? hww.decay_p4()[1].phi() : -999);
        tx.setBranch<float>("decay1_mass", issig ? hww.decay_p4()[1].mass() : -999);
        tx.setBranch<int>("decay1_id", issig ? hww.decay_id()[1] : -999);
        tx.setBranch<int>("decay1_isstar", issig ? hww.decay_isstar()[1] : -999);
        tx.setBranch<float>("lepton_pt", issig ? hww.lepton_p4()[0].pt() : -999);
        tx.setBranch<float>("lepton_eta", issig ? hww.lepton_p4()[0].eta() : -999);
        tx.setBranch<float>("lepton_phi", issig ? hww.lepton_p4()[0].phi() : -999);
        tx.setBranch<float>("lepton_mass", issig ? hww.lepton_p4()[0].mass() : -999);
        tx.setBranch<int>("lepton_id", issig ? hww.lepton_id()[0] : -999);
        tx.setBranch<int>("lepton_isstar", issig ? hww.lepton_isstar()[0] : -999);
        tx.setBranch<float>("neutrino_pt", issig ? hww.neutrino_p4()[0].pt() : -999);
        tx.setBranch<float>("neutrino_eta", issig ? hww.neutrino_p4()[0].eta() : -999);
        tx.setBranch<float>("neutrino_phi", issig ? hww.neutrino_p4()[0].phi() : -999);
        tx.setBranch<float>("neutrino_mass", issig ? hww.neutrino_p4()[0].mass() : -999);
        tx.setBranch<int>("neutrino_id", issig ? hww.neutrino_id()[0] : -999);
        tx.setBranch<int>("neutrino_isstar", issig ? hww.neutrino_isstar()[0] : -999);
        tx.setBranch<float>("quark0_pt", issig ? hww.quark_p4()[0].pt() : -999);
        tx.setBranch<float>("quark0_eta", issig ? hww.quark_p4()[0].eta() : -999);
        tx.setBranch<float>("quark0_phi", issig ? hww.quark_p4()[0].phi() : -999);
        tx.setBranch<float>("quark0_mass", issig ? hww.quark_p4()[0].mass() : -999);
        tx.setBranch<int>("quark0_id", issig ? hww.quark_id()[0] : -999);
        tx.setBranch<int>("quark0_isstar", issig ? hww.quark_isstar()[0] : -999);
        tx.setBranch<float>("quark1_pt", issig ? hww.quark_p4()[1].pt() : -999);
        tx.setBranch<float>("quark1_eta", issig ? hww.quark_p4()[1].eta() : -999);
        tx.setBranch<float>("quark1_phi", issig ? hww.quark_p4()[1].phi() : -999);
        tx.setBranch<float>("quark1_mass", issig ? hww.quark_p4()[1].mass() : -999);
        tx.setBranch<int>("quark1_id", issig ? hww.quark_id()[1] : -999);
        tx.setBranch<int>("quark1_isstar", issig ? hww.quark_isstar()[1] : -999);

        int nj = 0;
        LV jet0InDR1;
        LV jet1InDR1;
        LV jet0InDR15;
        LV jet1InDR15;
        float jet0InDR1_dr = -999;
        float jet1InDR1_dr = -999;
        float jet0InDR15_dr = -999;
        float jet1InDR15_dr = -999;
        std::vector<LV> jets_p4 = hww.jets_p4();
        for (unsigned int i = 0; i < jets_p4.size(); ++i)
        {
            float dr = RooUtil::Calc::DeltaR(hww.recolepton_p4(), jets_p4[i]);
            if (dr < 1)
            {
                nj += 1;
                if (jet0InDR1.pt() == 0)
                {
                    jet0InDR1 = jets_p4[i];
                    jet0InDR1_dr = dr;
                }
                else
                {
                    jet1InDR1 = jets_p4[i];
                    jet1InDR1_dr = dr;
                }
            }
            if (dr < 1.5)
            {
                nj += 1;
                if (jet0InDR15.pt() == 0)
                {
                    jet0InDR15 = jets_p4[i];
                    jet0InDR15_dr = dr;
                }
                else
                {
                    jet1InDR15 = jets_p4[i];
                    jet1InDR15_dr = dr;
                }
            }
        }
        tx.setBranch<int>("njInDR1", nj);
        tx.setBranch<float>("jet0InDR1_pt", jet0InDR1.pt() == 0 ? -999 : jet0InDR1.pt());
        tx.setBranch<float>("jet1InDR1_pt", jet1InDR1.pt() == 0 ? -999 : jet1InDR1.pt());
        tx.setBranch<float>("jet0InDR1_dr", jet0InDR1_dr);
        tx.setBranch<float>("jet1InDR1_dr", jet1InDR1_dr);
        tx.setBranch<int>("njInDR15", nj);
        tx.setBranch<float>("jet0InDR15_pt", jet0InDR15.pt() == 0 ? -999 : jet0InDR15.pt());
        tx.setBranch<float>("jet1InDR15_pt", jet1InDR15.pt() == 0 ? -999 : jet1InDR15.pt());
        tx.setBranch<float>("jet0InDR15_dr", jet0InDR15_dr);
        tx.setBranch<float>("jet1InDR15_dr", jet1InDR15_dr);

        RooUtil::CutflowUtil::fillCutflowHistograms(cutlists, tx, cutflows, rawcutflows);

        tx.fill();
        tx.clear();

    }

    ofile->cd();
    RooUtil::CutflowUtil::saveCutflowHistograms(cutflows, rawcutflows);

    // Writing output file
    tx.save(ofile);
}
