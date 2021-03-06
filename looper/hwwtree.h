// -*- C++ -*-
// This is a header file generated with the command:
// makeCMS3ClassFiles("/hadoop/cms/store/user/phchang/metis/baby/HWW2016_skimmed_v17_v1.15.1/GluGluHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628_pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1_MINIAODSIM_HWW2016_skimmed_v17_v1.15.1/output_1.root", "t", "hwwtree", "tas", "hww")

#ifndef hwwtree_H
#define hwwtree_H

#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
#include <unistd.h> 
typedef ROOT::Math::LorentzVector< ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class hwwtree {
 private: 
 protected: 
  unsigned int index;
  float    CutGenHT_;
  TBranch *CutGenHT_branch;
  bool     CutGenHT_isLoaded;
  float    CutNLep_;
  TBranch *CutNLep_branch;
  bool     CutNLep_isLoaded;
  float    CutNAK8_;
  TBranch *CutNAK8_branch;
  bool     CutNAK8_isLoaded;
  float    CutISRMegaJet_;
  TBranch *CutISRMegaJet_branch;
  bool     CutISRMegaJet_isLoaded;
  float    CutISRBalance_;
  TBranch *CutISRBalance_branch;
  bool     CutISRBalance_isLoaded;
  float    CutMu_;
  TBranch *CutMu_branch;
  bool     CutMu_isLoaded;
  float    CutMuPlus_;
  TBranch *CutMuPlus_branch;
  bool     CutMuPlus_isLoaded;
  float    CutMuMinus_;
  TBranch *CutMuMinus_branch;
  bool     CutMuMinus_isLoaded;
  float    CutEl_;
  TBranch *CutEl_branch;
  bool     CutEl_isLoaded;
  float    CutElPlus_;
  TBranch *CutElPlus_branch;
  bool     CutElPlus_isLoaded;
  float    CutElMinus_;
  TBranch *CutElMinus_branch;
  bool     CutElMinus_isLoaded;
  float    CutClass1_;
  TBranch *CutClass1_branch;
  bool     CutClass1_isLoaded;
  float    CutClass2_;
  TBranch *CutClass2_branch;
  bool     CutClass2_isLoaded;
  float    CutClass3_;
  TBranch *CutClass3_branch;
  bool     CutClass3_isLoaded;
  float    CutClass4_;
  TBranch *CutClass4_branch;
  bool     CutClass4_isLoaded;
  float    CutClassA_;
  TBranch *CutClassA_branch;
  bool     CutClassA_isLoaded;
  float    CutClassB_;
  TBranch *CutClassB_branch;
  bool     CutClassB_isLoaded;
  float    CutRecoClassA_;
  TBranch *CutRecoClassA_branch;
  bool     CutRecoClassA_isLoaded;
  float    CutRecoClassB_;
  TBranch *CutRecoClassB_branch;
  bool     CutRecoClassB_isLoaded;
  float    wgt_;
  TBranch *wgt_branch;
  bool     wgt_isLoaded;
  int      wstar_channel_id_;
  TBranch *wstar_channel_id_branch;
  bool     wstar_channel_id_isLoaded;
  float    lepmetpt_;
  TBranch *lepmetpt_branch;
  bool     lepmetpt_isLoaded;
  float    ak8minusleppt_;
  TBranch *ak8minusleppt_branch;
  bool     ak8minusleppt_isLoaded;
  float    wlepptratio_;
  TBranch *wlepptratio_branch;
  bool     wlepptratio_isLoaded;
  float    whadptratio_;
  TBranch *whadptratio_branch;
  bool     whadptratio_isLoaded;
  float    wlepwhadptratiosum_;
  TBranch *wlepwhadptratiosum_branch;
  bool     wlepwhadptratiosum_isLoaded;
  float    wlepwhadptratiodiff_;
  TBranch *wlepwhadptratiodiff_branch;
  bool     wlepwhadptratiodiff_isLoaded;
  float    wlepwhadptratioratio_;
  TBranch *wlepwhadptratioratio_branch;
  bool     wlepwhadptratioratio_isLoaded;
  float    lep_customrelIso005EA_;
  TBranch *lep_customrelIso005EA_branch;
  bool     lep_customrelIso005EA_isLoaded;
  float    lep_customrelIso010EA_;
  TBranch *lep_customrelIso010EA_branch;
  bool     lep_customrelIso010EA_isLoaded;
  float    lep_customrelIso015EA_;
  TBranch *lep_customrelIso015EA_branch;
  bool     lep_customrelIso015EA_isLoaded;
  float    lep_customrelIso020EA_;
  TBranch *lep_customrelIso020EA_branch;
  bool     lep_customrelIso020EA_isLoaded;
  float    lep_customrelIso025EA_;
  TBranch *lep_customrelIso025EA_branch;
  bool     lep_customrelIso025EA_isLoaded;
  float    lep_customrelIso030EA_;
  TBranch *lep_customrelIso030EA_branch;
  bool     lep_customrelIso030EA_isLoaded;
  float    lep_customrelIso035EA_;
  TBranch *lep_customrelIso035EA_branch;
  bool     lep_customrelIso035EA_isLoaded;
  float    lep_customrelIso040EA_;
  TBranch *lep_customrelIso040EA_branch;
  bool     lep_customrelIso040EA_isLoaded;
  float    lep_customrelIso045EA_;
  TBranch *lep_customrelIso045EA_branch;
  bool     lep_customrelIso045EA_isLoaded;
  float    lep_customrelIso050EA_;
  TBranch *lep_customrelIso050EA_branch;
  bool     lep_customrelIso050EA_isLoaded;
  float    lep_customrelIso055EA_;
  TBranch *lep_customrelIso055EA_branch;
  bool     lep_customrelIso055EA_isLoaded;
  float    lep_customrelIso060EA_;
  TBranch *lep_customrelIso060EA_branch;
  bool     lep_customrelIso060EA_isLoaded;
  float    lep_customrelIso065EA_;
  TBranch *lep_customrelIso065EA_branch;
  bool     lep_customrelIso065EA_isLoaded;
  float    lep_customrelIso070EA_;
  TBranch *lep_customrelIso070EA_branch;
  bool     lep_customrelIso070EA_isLoaded;
  float    lep_customrelIso075EA_;
  TBranch *lep_customrelIso075EA_branch;
  bool     lep_customrelIso075EA_isLoaded;
  float    lep_customrelIso080EA_;
  TBranch *lep_customrelIso080EA_branch;
  bool     lep_customrelIso080EA_isLoaded;
  int      nb_;
  TBranch *nb_branch;
  bool     nb_isLoaded;
  int      nbmed_;
  TBranch *nbmed_branch;
  bool     nbmed_isLoaded;
  int      nbtight_;
  TBranch *nbtight_branch;
  bool     nbtight_isLoaded;
  int      nb30_;
  TBranch *nb30_branch;
  bool     nb30_isLoaded;
  int      nb30med_;
  TBranch *nb30med_branch;
  bool     nb30med_isLoaded;
  int      nb30tight_;
  TBranch *nb30tight_branch;
  bool     nb30tight_isLoaded;
  int      nb40_;
  TBranch *nb40_branch;
  bool     nb40_isLoaded;
  int      nb40med_;
  TBranch *nb40med_branch;
  bool     nb40med_isLoaded;
  int      nb40tight_;
  TBranch *nb40tight_branch;
  bool     nb40tight_isLoaded;
  int      nb50_;
  TBranch *nb50_branch;
  bool     nb50_isLoaded;
  int      nb50med_;
  TBranch *nb50med_branch;
  bool     nb50med_isLoaded;
  int      nb50tight_;
  TBranch *nb50tight_branch;
  bool     nb50tight_isLoaded;
  int      nbOR_;
  TBranch *nbOR_branch;
  bool     nbOR_isLoaded;
  int      nbORmed_;
  TBranch *nbORmed_branch;
  bool     nbORmed_isLoaded;
  int      nbORtight_;
  TBranch *nbORtight_branch;
  bool     nbORtight_isLoaded;
  int      nbOR30_;
  TBranch *nbOR30_branch;
  bool     nbOR30_isLoaded;
  int      nbOR30med_;
  TBranch *nbOR30med_branch;
  bool     nbOR30med_isLoaded;
  int      nbOR30tight_;
  TBranch *nbOR30tight_branch;
  bool     nbOR30tight_isLoaded;
  int      nbOR40_;
  TBranch *nbOR40_branch;
  bool     nbOR40_isLoaded;
  int      nbOR40med_;
  TBranch *nbOR40med_branch;
  bool     nbOR40med_isLoaded;
  int      nbOR40tight_;
  TBranch *nbOR40tight_branch;
  bool     nbOR40tight_isLoaded;
  int      nbOR50_;
  TBranch *nbOR50_branch;
  bool     nbOR50_isLoaded;
  int      nbOR50med_;
  TBranch *nbOR50med_branch;
  bool     nbOR50med_isLoaded;
  int      nbOR50tight_;
  TBranch *nbOR50tight_branch;
  bool     nbOR50tight_isLoaded;
  int      nrecolep_;
  TBranch *nrecolep_branch;
  bool     nrecolep_isLoaded;
  int      nak8jets_;
  TBranch *nak8jets_branch;
  bool     nak8jets_isLoaded;
  int      nj_;
  TBranch *nj_branch;
  bool     nj_isLoaded;
  int      nj50_;
  TBranch *nj50_branch;
  bool     nj50_isLoaded;
  float    recowhad_puppi_mass_;
  TBranch *recowhad_puppi_mass_branch;
  bool     recowhad_puppi_mass_isLoaded;
  float    recowhad_mass_;
  TBranch *recowhad_mass_branch;
  bool     recowhad_mass_isLoaded;
  float    recowhad_puppi_nJettinessTau1_;
  TBranch *recowhad_puppi_nJettinessTau1_branch;
  bool     recowhad_puppi_nJettinessTau1_isLoaded;
  float    recowhad_nJettinessTau1_;
  TBranch *recowhad_nJettinessTau1_branch;
  bool     recowhad_nJettinessTau1_isLoaded;
  float    recowhad_puppi_nJettinessTau2_;
  TBranch *recowhad_puppi_nJettinessTau2_branch;
  bool     recowhad_puppi_nJettinessTau2_isLoaded;
  float    recowhad_nJettinessTau2_;
  TBranch *recowhad_nJettinessTau2_branch;
  bool     recowhad_nJettinessTau2_isLoaded;
  float    recowhad_puppi_nJettinessTauRatio_;
  TBranch *recowhad_puppi_nJettinessTauRatio_branch;
  bool     recowhad_puppi_nJettinessTauRatio_isLoaded;
  float    recowhad_nJettinessTauRatio_;
  TBranch *recowhad_nJettinessTauRatio_branch;
  bool     recowhad_nJettinessTauRatio_isLoaded;
  float    recohiggs_mass_;
  TBranch *recohiggs_mass_branch;
  bool     recohiggs_mass_isLoaded;
  float    recohiggs2_mass_;
  TBranch *recohiggs2_mass_branch;
  bool     recohiggs2_mass_isLoaded;
  float    recohiggs_min_;
  TBranch *recohiggs_min_branch;
  bool     recohiggs_min_isLoaded;
  float    recohiggs_max_;
  TBranch *recohiggs_max_branch;
  bool     recohiggs_max_isLoaded;
  float    recowhad_mlep_puppi_mass_;
  TBranch *recowhad_mlep_puppi_mass_branch;
  bool     recowhad_mlep_puppi_mass_isLoaded;
  float    recowhad_mlep_mass_;
  TBranch *recowhad_mlep_mass_branch;
  bool     recowhad_mlep_mass_isLoaded;
  float    recowhad_plep_puppi_mass_;
  TBranch *recowhad_plep_puppi_mass_branch;
  bool     recowhad_plep_puppi_mass_isLoaded;
  float    recowhad_plep_mass_;
  TBranch *recowhad_plep_mass_branch;
  bool     recowhad_plep_mass_isLoaded;
  float    pf_annuli_energy_0_;
  TBranch *pf_annuli_energy_0_branch;
  bool     pf_annuli_energy_0_isLoaded;
  float    pf_annuli_energy_1_;
  TBranch *pf_annuli_energy_1_branch;
  bool     pf_annuli_energy_1_isLoaded;
  float    pf_annuli_energy_2_;
  TBranch *pf_annuli_energy_2_branch;
  bool     pf_annuli_energy_2_isLoaded;
  float    pf_annuli_energy_3_;
  TBranch *pf_annuli_energy_3_branch;
  bool     pf_annuli_energy_3_isLoaded;
  float    pf_annuli_energy_4_;
  TBranch *pf_annuli_energy_4_branch;
  bool     pf_annuli_energy_4_isLoaded;
  float    pf_annuli_energy_5_;
  TBranch *pf_annuli_energy_5_branch;
  bool     pf_annuli_energy_5_isLoaded;
  float    pf_annuli_energy_6_;
  TBranch *pf_annuli_energy_6_branch;
  bool     pf_annuli_energy_6_isLoaded;
  float    pf_annuli_energy_7_;
  TBranch *pf_annuli_energy_7_branch;
  bool     pf_annuli_energy_7_isLoaded;
  float    lep_miniIsoEA_;
  TBranch *lep_miniIsoEA_branch;
  bool     lep_miniIsoEA_isLoaded;
  float    lep_relIso04DB_;
  TBranch *lep_relIso04DB_branch;
  bool     lep_relIso04DB_isLoaded;
  float    lep_relIso03EA_;
  TBranch *lep_relIso03EA_branch;
  bool     lep_relIso03EA_isLoaded;
  float    recolepton_recowhad_dr_;
  TBranch *recolepton_recowhad_dr_branch;
  bool     recolepton_recowhad_dr_isLoaded;
  float    recolepton_recowhad_mlep_dr_;
  TBranch *recolepton_recowhad_mlep_dr_branch;
  bool     recolepton_recowhad_mlep_dr_isLoaded;
  float    recolepton_pt_;
  TBranch *recolepton_pt_branch;
  bool     recolepton_pt_isLoaded;
  float    met_pt_;
  TBranch *met_pt_branch;
  bool     met_pt_isLoaded;
  float    recowhad_pt_;
  TBranch *recowhad_pt_branch;
  bool     recowhad_pt_isLoaded;
  float    recowhad_puppi_pt_;
  TBranch *recowhad_puppi_pt_branch;
  bool     recowhad_puppi_pt_isLoaded;
  float    recolepton_met_dphi_;
  TBranch *recolepton_met_dphi_branch;
  bool     recolepton_met_dphi_isLoaded;
  float    recoisrmegajet_pt_;
  TBranch *recoisrmegajet_pt_branch;
  bool     recoisrmegajet_pt_isLoaded;
  float    recoisrbalance_;
  TBranch *recoisrbalance_branch;
  bool     recoisrbalance_isLoaded;
  TString *CMS4path_;
  TBranch *CMS4path_branch;
  bool     CMS4path_isLoaded;
  int      CMS4index_;
  TBranch *CMS4index_branch;
  bool     CMS4index_isLoaded;
  int      run_;
  TBranch *run_branch;
  bool     run_isLoaded;
  int      lumi_;
  TBranch *lumi_branch;
  bool     lumi_isLoaded;
  unsigned long long evt_;
  TBranch *evt_branch;
  bool     evt_isLoaded;
  float    bdt_recoclassA_;
  TBranch *bdt_recoclassA_branch;
  bool     bdt_recoclassA_isLoaded;
  float    bdt_recoclassB_;
  TBranch *bdt_recoclassB_branch;
  bool     bdt_recoclassB_isLoaded;
  float    lqq_max_dr_;
  TBranch *lqq_max_dr_branch;
  bool     lqq_max_dr_isLoaded;
  float    lq0_dr_;
  TBranch *lq0_dr_branch;
  bool     lq0_dr_isLoaded;
  float    lq1_dr_;
  TBranch *lq1_dr_branch;
  bool     lq1_dr_isLoaded;
  float    qq_dr_;
  TBranch *qq_dr_branch;
  bool     qq_dr_isLoaded;
  float    decay_dr_;
  TBranch *decay_dr_branch;
  bool     decay_dr_isLoaded;
  float    l_qq_dr_;
  TBranch *l_qq_dr_branch;
  bool     l_qq_dr_isLoaded;
  float    lqq_mass_;
  TBranch *lqq_mass_branch;
  bool     lqq_mass_isLoaded;
  float    lvqq_mt_;
  TBranch *lvqq_mt_branch;
  bool     lvqq_mt_isLoaded;
  int      higgsdecay_;
  TBranch *higgsdecay_branch;
  bool     higgsdecay_isLoaded;
  int      nlep_;
  TBranch *nlep_branch;
  bool     nlep_isLoaded;
  int      nquark_;
  TBranch *nquark_branch;
  bool     nquark_isLoaded;
  int      wa_id_;
  TBranch *wa_id_branch;
  bool     wa_id_isLoaded;
  float    isr_pt_;
  TBranch *isr_pt_branch;
  bool     isr_pt_isLoaded;
  float    isr_eta_;
  TBranch *isr_eta_branch;
  bool     isr_eta_isLoaded;
  float    isr_phi_;
  TBranch *isr_phi_branch;
  bool     isr_phi_isLoaded;
  float    higgs_pt_;
  TBranch *higgs_pt_branch;
  bool     higgs_pt_isLoaded;
  float    higgs_eta_;
  TBranch *higgs_eta_branch;
  bool     higgs_eta_isLoaded;
  float    higgs_phi_;
  TBranch *higgs_phi_branch;
  bool     higgs_phi_isLoaded;
  float    decay0_pt_;
  TBranch *decay0_pt_branch;
  bool     decay0_pt_isLoaded;
  float    decay0_eta_;
  TBranch *decay0_eta_branch;
  bool     decay0_eta_isLoaded;
  float    decay0_phi_;
  TBranch *decay0_phi_branch;
  bool     decay0_phi_isLoaded;
  float    decay0_mass_;
  TBranch *decay0_mass_branch;
  bool     decay0_mass_isLoaded;
  int      decay0_id_;
  TBranch *decay0_id_branch;
  bool     decay0_id_isLoaded;
  int      decay0_isstar_;
  TBranch *decay0_isstar_branch;
  bool     decay0_isstar_isLoaded;
  float    decay1_pt_;
  TBranch *decay1_pt_branch;
  bool     decay1_pt_isLoaded;
  float    decay1_eta_;
  TBranch *decay1_eta_branch;
  bool     decay1_eta_isLoaded;
  float    decay1_phi_;
  TBranch *decay1_phi_branch;
  bool     decay1_phi_isLoaded;
  float    decay1_mass_;
  TBranch *decay1_mass_branch;
  bool     decay1_mass_isLoaded;
  int      decay1_id_;
  TBranch *decay1_id_branch;
  bool     decay1_id_isLoaded;
  int      decay1_isstar_;
  TBranch *decay1_isstar_branch;
  bool     decay1_isstar_isLoaded;
  float    lepton_pt_;
  TBranch *lepton_pt_branch;
  bool     lepton_pt_isLoaded;
  float    lepton_eta_;
  TBranch *lepton_eta_branch;
  bool     lepton_eta_isLoaded;
  float    lepton_phi_;
  TBranch *lepton_phi_branch;
  bool     lepton_phi_isLoaded;
  float    lepton_mass_;
  TBranch *lepton_mass_branch;
  bool     lepton_mass_isLoaded;
  int      lepton_id_;
  TBranch *lepton_id_branch;
  bool     lepton_id_isLoaded;
  int      lepton_isstar_;
  TBranch *lepton_isstar_branch;
  bool     lepton_isstar_isLoaded;
  float    neutrino_pt_;
  TBranch *neutrino_pt_branch;
  bool     neutrino_pt_isLoaded;
  float    neutrino_eta_;
  TBranch *neutrino_eta_branch;
  bool     neutrino_eta_isLoaded;
  float    neutrino_phi_;
  TBranch *neutrino_phi_branch;
  bool     neutrino_phi_isLoaded;
  float    neutrino_mass_;
  TBranch *neutrino_mass_branch;
  bool     neutrino_mass_isLoaded;
  int      neutrino_id_;
  TBranch *neutrino_id_branch;
  bool     neutrino_id_isLoaded;
  int      neutrino_isstar_;
  TBranch *neutrino_isstar_branch;
  bool     neutrino_isstar_isLoaded;
  float    quark0_pt_;
  TBranch *quark0_pt_branch;
  bool     quark0_pt_isLoaded;
  float    quark0_eta_;
  TBranch *quark0_eta_branch;
  bool     quark0_eta_isLoaded;
  float    quark0_phi_;
  TBranch *quark0_phi_branch;
  bool     quark0_phi_isLoaded;
  float    quark0_mass_;
  TBranch *quark0_mass_branch;
  bool     quark0_mass_isLoaded;
  int      quark0_id_;
  TBranch *quark0_id_branch;
  bool     quark0_id_isLoaded;
  int      quark0_isstar_;
  TBranch *quark0_isstar_branch;
  bool     quark0_isstar_isLoaded;
  float    quark1_pt_;
  TBranch *quark1_pt_branch;
  bool     quark1_pt_isLoaded;
  float    quark1_eta_;
  TBranch *quark1_eta_branch;
  bool     quark1_eta_isLoaded;
  float    quark1_phi_;
  TBranch *quark1_phi_branch;
  bool     quark1_phi_isLoaded;
  float    quark1_mass_;
  TBranch *quark1_mass_branch;
  bool     quark1_mass_isLoaded;
  int      quark1_id_;
  TBranch *quark1_id_branch;
  bool     quark1_id_isLoaded;
  int      quark1_isstar_;
  TBranch *quark1_isstar_branch;
  bool     quark1_isstar_isLoaded;
  int      njInDR1_;
  TBranch *njInDR1_branch;
  bool     njInDR1_isLoaded;
  float    jet0InDR1_pt_;
  TBranch *jet0InDR1_pt_branch;
  bool     jet0InDR1_pt_isLoaded;
  float    jet1InDR1_pt_;
  TBranch *jet1InDR1_pt_branch;
  bool     jet1InDR1_pt_isLoaded;
  float    jet0InDR1_dr_;
  TBranch *jet0InDR1_dr_branch;
  bool     jet0InDR1_dr_isLoaded;
  float    jet1InDR1_dr_;
  TBranch *jet1InDR1_dr_branch;
  bool     jet1InDR1_dr_isLoaded;
  int      njInDR15_;
  TBranch *njInDR15_branch;
  bool     njInDR15_isLoaded;
  float    jet0InDR15_pt_;
  TBranch *jet0InDR15_pt_branch;
  bool     jet0InDR15_pt_isLoaded;
  float    jet1InDR15_pt_;
  TBranch *jet1InDR15_pt_branch;
  bool     jet1InDR15_pt_isLoaded;
  float    jet0InDR15_dr_;
  TBranch *jet0InDR15_dr_branch;
  bool     jet0InDR15_dr_isLoaded;
  float    jet1InDR15_dr_;
  TBranch *jet1InDR15_dr_branch;
  bool     jet1InDR15_dr_isLoaded;
public: 
void Init(TTree *tree);
void GetEntry(unsigned int idx); 
void LoadAllBranches(); 
  const float &CutGenHT();
  const float &CutNLep();
  const float &CutNAK8();
  const float &CutISRMegaJet();
  const float &CutISRBalance();
  const float &CutMu();
  const float &CutMuPlus();
  const float &CutMuMinus();
  const float &CutEl();
  const float &CutElPlus();
  const float &CutElMinus();
  const float &CutClass1();
  const float &CutClass2();
  const float &CutClass3();
  const float &CutClass4();
  const float &CutClassA();
  const float &CutClassB();
  const float &CutRecoClassA();
  const float &CutRecoClassB();
  const float &wgt();
  const int &wstar_channel_id();
  const float &lepmetpt();
  const float &ak8minusleppt();
  const float &wlepptratio();
  const float &whadptratio();
  const float &wlepwhadptratiosum();
  const float &wlepwhadptratiodiff();
  const float &wlepwhadptratioratio();
  const float &lep_customrelIso005EA();
  const float &lep_customrelIso010EA();
  const float &lep_customrelIso015EA();
  const float &lep_customrelIso020EA();
  const float &lep_customrelIso025EA();
  const float &lep_customrelIso030EA();
  const float &lep_customrelIso035EA();
  const float &lep_customrelIso040EA();
  const float &lep_customrelIso045EA();
  const float &lep_customrelIso050EA();
  const float &lep_customrelIso055EA();
  const float &lep_customrelIso060EA();
  const float &lep_customrelIso065EA();
  const float &lep_customrelIso070EA();
  const float &lep_customrelIso075EA();
  const float &lep_customrelIso080EA();
  const int &nb();
  const int &nbmed();
  const int &nbtight();
  const int &nb30();
  const int &nb30med();
  const int &nb30tight();
  const int &nb40();
  const int &nb40med();
  const int &nb40tight();
  const int &nb50();
  const int &nb50med();
  const int &nb50tight();
  const int &nbOR();
  const int &nbORmed();
  const int &nbORtight();
  const int &nbOR30();
  const int &nbOR30med();
  const int &nbOR30tight();
  const int &nbOR40();
  const int &nbOR40med();
  const int &nbOR40tight();
  const int &nbOR50();
  const int &nbOR50med();
  const int &nbOR50tight();
  const int &nrecolep();
  const int &nak8jets();
  const int &nj();
  const int &nj50();
  const float &recowhad_puppi_mass();
  const float &recowhad_mass();
  const float &recowhad_puppi_nJettinessTau1();
  const float &recowhad_nJettinessTau1();
  const float &recowhad_puppi_nJettinessTau2();
  const float &recowhad_nJettinessTau2();
  const float &recowhad_puppi_nJettinessTauRatio();
  const float &recowhad_nJettinessTauRatio();
  const float &recohiggs_mass();
  const float &recohiggs2_mass();
  const float &recohiggs_min();
  const float &recohiggs_max();
  const float &recowhad_mlep_puppi_mass();
  const float &recowhad_mlep_mass();
  const float &recowhad_plep_puppi_mass();
  const float &recowhad_plep_mass();
  const float &pf_annuli_energy_0();
  const float &pf_annuli_energy_1();
  const float &pf_annuli_energy_2();
  const float &pf_annuli_energy_3();
  const float &pf_annuli_energy_4();
  const float &pf_annuli_energy_5();
  const float &pf_annuli_energy_6();
  const float &pf_annuli_energy_7();
  const float &lep_miniIsoEA();
  const float &lep_relIso04DB();
  const float &lep_relIso03EA();
  const float &recolepton_recowhad_dr();
  const float &recolepton_recowhad_mlep_dr();
  const float &recolepton_pt();
  const float &met_pt();
  const float &recowhad_pt();
  const float &recowhad_puppi_pt();
  const float &recolepton_met_dphi();
  const float &recoisrmegajet_pt();
  const float &recoisrbalance();
  const TString &CMS4path();
  const int &CMS4index();
  const int &run();
  const int &lumi();
  const unsigned long long &evt();
  const float &bdt_recoclassA();
  const float &bdt_recoclassB();
  const float &lqq_max_dr();
  const float &lq0_dr();
  const float &lq1_dr();
  const float &qq_dr();
  const float &decay_dr();
  const float &l_qq_dr();
  const float &lqq_mass();
  const float &lvqq_mt();
  const int &higgsdecay();
  const int &nlep();
  const int &nquark();
  const int &wa_id();
  const float &isr_pt();
  const float &isr_eta();
  const float &isr_phi();
  const float &higgs_pt();
  const float &higgs_eta();
  const float &higgs_phi();
  const float &decay0_pt();
  const float &decay0_eta();
  const float &decay0_phi();
  const float &decay0_mass();
  const int &decay0_id();
  const int &decay0_isstar();
  const float &decay1_pt();
  const float &decay1_eta();
  const float &decay1_phi();
  const float &decay1_mass();
  const int &decay1_id();
  const int &decay1_isstar();
  const float &lepton_pt();
  const float &lepton_eta();
  const float &lepton_phi();
  const float &lepton_mass();
  const int &lepton_id();
  const int &lepton_isstar();
  const float &neutrino_pt();
  const float &neutrino_eta();
  const float &neutrino_phi();
  const float &neutrino_mass();
  const int &neutrino_id();
  const int &neutrino_isstar();
  const float &quark0_pt();
  const float &quark0_eta();
  const float &quark0_phi();
  const float &quark0_mass();
  const int &quark0_id();
  const int &quark0_isstar();
  const float &quark1_pt();
  const float &quark1_eta();
  const float &quark1_phi();
  const float &quark1_mass();
  const int &quark1_id();
  const int &quark1_isstar();
  const int &njInDR1();
  const float &jet0InDR1_pt();
  const float &jet1InDR1_pt();
  const float &jet0InDR1_dr();
  const float &jet1InDR1_dr();
  const int &njInDR15();
  const float &jet0InDR15_pt();
  const float &jet1InDR15_pt();
  const float &jet0InDR15_dr();
  const float &jet1InDR15_dr();

  static void progress(int nEventsTotal, int nEventsChain);
};

#ifndef __CINT__
extern hwwtree hww;
#endif

namespace tas {
  const float &CutGenHT();
  const float &CutNLep();
  const float &CutNAK8();
  const float &CutISRMegaJet();
  const float &CutISRBalance();
  const float &CutMu();
  const float &CutMuPlus();
  const float &CutMuMinus();
  const float &CutEl();
  const float &CutElPlus();
  const float &CutElMinus();
  const float &CutClass1();
  const float &CutClass2();
  const float &CutClass3();
  const float &CutClass4();
  const float &CutClassA();
  const float &CutClassB();
  const float &CutRecoClassA();
  const float &CutRecoClassB();
  const float &wgt();
  const int &wstar_channel_id();
  const float &lepmetpt();
  const float &ak8minusleppt();
  const float &wlepptratio();
  const float &whadptratio();
  const float &wlepwhadptratiosum();
  const float &wlepwhadptratiodiff();
  const float &wlepwhadptratioratio();
  const float &lep_customrelIso005EA();
  const float &lep_customrelIso010EA();
  const float &lep_customrelIso015EA();
  const float &lep_customrelIso020EA();
  const float &lep_customrelIso025EA();
  const float &lep_customrelIso030EA();
  const float &lep_customrelIso035EA();
  const float &lep_customrelIso040EA();
  const float &lep_customrelIso045EA();
  const float &lep_customrelIso050EA();
  const float &lep_customrelIso055EA();
  const float &lep_customrelIso060EA();
  const float &lep_customrelIso065EA();
  const float &lep_customrelIso070EA();
  const float &lep_customrelIso075EA();
  const float &lep_customrelIso080EA();
  const int &nb();
  const int &nbmed();
  const int &nbtight();
  const int &nb30();
  const int &nb30med();
  const int &nb30tight();
  const int &nb40();
  const int &nb40med();
  const int &nb40tight();
  const int &nb50();
  const int &nb50med();
  const int &nb50tight();
  const int &nbOR();
  const int &nbORmed();
  const int &nbORtight();
  const int &nbOR30();
  const int &nbOR30med();
  const int &nbOR30tight();
  const int &nbOR40();
  const int &nbOR40med();
  const int &nbOR40tight();
  const int &nbOR50();
  const int &nbOR50med();
  const int &nbOR50tight();
  const int &nrecolep();
  const int &nak8jets();
  const int &nj();
  const int &nj50();
  const float &recowhad_puppi_mass();
  const float &recowhad_mass();
  const float &recowhad_puppi_nJettinessTau1();
  const float &recowhad_nJettinessTau1();
  const float &recowhad_puppi_nJettinessTau2();
  const float &recowhad_nJettinessTau2();
  const float &recowhad_puppi_nJettinessTauRatio();
  const float &recowhad_nJettinessTauRatio();
  const float &recohiggs_mass();
  const float &recohiggs2_mass();
  const float &recohiggs_min();
  const float &recohiggs_max();
  const float &recowhad_mlep_puppi_mass();
  const float &recowhad_mlep_mass();
  const float &recowhad_plep_puppi_mass();
  const float &recowhad_plep_mass();
  const float &pf_annuli_energy_0();
  const float &pf_annuli_energy_1();
  const float &pf_annuli_energy_2();
  const float &pf_annuli_energy_3();
  const float &pf_annuli_energy_4();
  const float &pf_annuli_energy_5();
  const float &pf_annuli_energy_6();
  const float &pf_annuli_energy_7();
  const float &lep_miniIsoEA();
  const float &lep_relIso04DB();
  const float &lep_relIso03EA();
  const float &recolepton_recowhad_dr();
  const float &recolepton_recowhad_mlep_dr();
  const float &recolepton_pt();
  const float &met_pt();
  const float &recowhad_pt();
  const float &recowhad_puppi_pt();
  const float &recolepton_met_dphi();
  const float &recoisrmegajet_pt();
  const float &recoisrbalance();
  const TString &CMS4path();
  const int &CMS4index();
  const int &run();
  const int &lumi();
  const unsigned long long &evt();
  const float &bdt_recoclassA();
  const float &bdt_recoclassB();
  const float &lqq_max_dr();
  const float &lq0_dr();
  const float &lq1_dr();
  const float &qq_dr();
  const float &decay_dr();
  const float &l_qq_dr();
  const float &lqq_mass();
  const float &lvqq_mt();
  const int &higgsdecay();
  const int &nlep();
  const int &nquark();
  const int &wa_id();
  const float &isr_pt();
  const float &isr_eta();
  const float &isr_phi();
  const float &higgs_pt();
  const float &higgs_eta();
  const float &higgs_phi();
  const float &decay0_pt();
  const float &decay0_eta();
  const float &decay0_phi();
  const float &decay0_mass();
  const int &decay0_id();
  const int &decay0_isstar();
  const float &decay1_pt();
  const float &decay1_eta();
  const float &decay1_phi();
  const float &decay1_mass();
  const int &decay1_id();
  const int &decay1_isstar();
  const float &lepton_pt();
  const float &lepton_eta();
  const float &lepton_phi();
  const float &lepton_mass();
  const int &lepton_id();
  const int &lepton_isstar();
  const float &neutrino_pt();
  const float &neutrino_eta();
  const float &neutrino_phi();
  const float &neutrino_mass();
  const int &neutrino_id();
  const int &neutrino_isstar();
  const float &quark0_pt();
  const float &quark0_eta();
  const float &quark0_phi();
  const float &quark0_mass();
  const int &quark0_id();
  const int &quark0_isstar();
  const float &quark1_pt();
  const float &quark1_eta();
  const float &quark1_phi();
  const float &quark1_mass();
  const int &quark1_id();
  const int &quark1_isstar();
  const int &njInDR1();
  const float &jet0InDR1_pt();
  const float &jet1InDR1_pt();
  const float &jet0InDR1_dr();
  const float &jet1InDR1_dr();
  const int &njInDR15();
  const float &jet0InDR15_pt();
  const float &jet1InDR15_pt();
  const float &jet0InDR15_dr();
  const float &jet1InDR15_dr();
}
#include "rooutil/rooutil.h"
#endif
