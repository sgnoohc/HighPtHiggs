#include "hwwtree.h"
hwwtree hww;

void hwwtree::Init(TTree *tree) {

  tree->SetMakeClass(1);

  CutGenHT_branch = tree->GetBranch("CutGenHT");
  if (CutGenHT_branch) CutGenHT_branch->SetAddress(&CutGenHT_);
  CutNLep_branch = tree->GetBranch("CutNLep");
  if (CutNLep_branch) CutNLep_branch->SetAddress(&CutNLep_);
  CutNAK8_branch = tree->GetBranch("CutNAK8");
  if (CutNAK8_branch) CutNAK8_branch->SetAddress(&CutNAK8_);
  CutISRMegaJet_branch = tree->GetBranch("CutISRMegaJet");
  if (CutISRMegaJet_branch) CutISRMegaJet_branch->SetAddress(&CutISRMegaJet_);
  CutISRBalance_branch = tree->GetBranch("CutISRBalance");
  if (CutISRBalance_branch) CutISRBalance_branch->SetAddress(&CutISRBalance_);
  CutMu_branch = tree->GetBranch("CutMu");
  if (CutMu_branch) CutMu_branch->SetAddress(&CutMu_);
  CutMuPlus_branch = tree->GetBranch("CutMuPlus");
  if (CutMuPlus_branch) CutMuPlus_branch->SetAddress(&CutMuPlus_);
  CutMuMinus_branch = tree->GetBranch("CutMuMinus");
  if (CutMuMinus_branch) CutMuMinus_branch->SetAddress(&CutMuMinus_);
  CutEl_branch = tree->GetBranch("CutEl");
  if (CutEl_branch) CutEl_branch->SetAddress(&CutEl_);
  CutElPlus_branch = tree->GetBranch("CutElPlus");
  if (CutElPlus_branch) CutElPlus_branch->SetAddress(&CutElPlus_);
  CutElMinus_branch = tree->GetBranch("CutElMinus");
  if (CutElMinus_branch) CutElMinus_branch->SetAddress(&CutElMinus_);
  CutClass1_branch = tree->GetBranch("CutClass1");
  if (CutClass1_branch) CutClass1_branch->SetAddress(&CutClass1_);
  CutClass2_branch = tree->GetBranch("CutClass2");
  if (CutClass2_branch) CutClass2_branch->SetAddress(&CutClass2_);
  CutClass3_branch = tree->GetBranch("CutClass3");
  if (CutClass3_branch) CutClass3_branch->SetAddress(&CutClass3_);
  CutClass4_branch = tree->GetBranch("CutClass4");
  if (CutClass4_branch) CutClass4_branch->SetAddress(&CutClass4_);
  CutClassA_branch = tree->GetBranch("CutClassA");
  if (CutClassA_branch) CutClassA_branch->SetAddress(&CutClassA_);
  CutClassB_branch = tree->GetBranch("CutClassB");
  if (CutClassB_branch) CutClassB_branch->SetAddress(&CutClassB_);
  CutRecoClassA_branch = tree->GetBranch("CutRecoClassA");
  if (CutRecoClassA_branch) CutRecoClassA_branch->SetAddress(&CutRecoClassA_);
  CutRecoClassB_branch = tree->GetBranch("CutRecoClassB");
  if (CutRecoClassB_branch) CutRecoClassB_branch->SetAddress(&CutRecoClassB_);
  wgt_branch = tree->GetBranch("wgt");
  if (wgt_branch) wgt_branch->SetAddress(&wgt_);
  wstar_channel_id_branch = tree->GetBranch("wstar_channel_id");
  if (wstar_channel_id_branch) wstar_channel_id_branch->SetAddress(&wstar_channel_id_);
  lepmetpt_branch = tree->GetBranch("lepmetpt");
  if (lepmetpt_branch) lepmetpt_branch->SetAddress(&lepmetpt_);
  ak8minusleppt_branch = tree->GetBranch("ak8minusleppt");
  if (ak8minusleppt_branch) ak8minusleppt_branch->SetAddress(&ak8minusleppt_);
  wlepptratio_branch = tree->GetBranch("wlepptratio");
  if (wlepptratio_branch) wlepptratio_branch->SetAddress(&wlepptratio_);
  whadptratio_branch = tree->GetBranch("whadptratio");
  if (whadptratio_branch) whadptratio_branch->SetAddress(&whadptratio_);
  wlepwhadptratiosum_branch = tree->GetBranch("wlepwhadptratiosum");
  if (wlepwhadptratiosum_branch) wlepwhadptratiosum_branch->SetAddress(&wlepwhadptratiosum_);
  wlepwhadptratiodiff_branch = tree->GetBranch("wlepwhadptratiodiff");
  if (wlepwhadptratiodiff_branch) wlepwhadptratiodiff_branch->SetAddress(&wlepwhadptratiodiff_);
  wlepwhadptratioratio_branch = tree->GetBranch("wlepwhadptratioratio");
  if (wlepwhadptratioratio_branch) wlepwhadptratioratio_branch->SetAddress(&wlepwhadptratioratio_);
  lep_customrelIso005EA_branch = tree->GetBranch("lep_customrelIso005EA");
  if (lep_customrelIso005EA_branch) lep_customrelIso005EA_branch->SetAddress(&lep_customrelIso005EA_);
  lep_customrelIso010EA_branch = tree->GetBranch("lep_customrelIso010EA");
  if (lep_customrelIso010EA_branch) lep_customrelIso010EA_branch->SetAddress(&lep_customrelIso010EA_);
  lep_customrelIso015EA_branch = tree->GetBranch("lep_customrelIso015EA");
  if (lep_customrelIso015EA_branch) lep_customrelIso015EA_branch->SetAddress(&lep_customrelIso015EA_);
  lep_customrelIso020EA_branch = tree->GetBranch("lep_customrelIso020EA");
  if (lep_customrelIso020EA_branch) lep_customrelIso020EA_branch->SetAddress(&lep_customrelIso020EA_);
  lep_customrelIso025EA_branch = tree->GetBranch("lep_customrelIso025EA");
  if (lep_customrelIso025EA_branch) lep_customrelIso025EA_branch->SetAddress(&lep_customrelIso025EA_);
  lep_customrelIso030EA_branch = tree->GetBranch("lep_customrelIso030EA");
  if (lep_customrelIso030EA_branch) lep_customrelIso030EA_branch->SetAddress(&lep_customrelIso030EA_);
  lep_customrelIso035EA_branch = tree->GetBranch("lep_customrelIso035EA");
  if (lep_customrelIso035EA_branch) lep_customrelIso035EA_branch->SetAddress(&lep_customrelIso035EA_);
  lep_customrelIso040EA_branch = tree->GetBranch("lep_customrelIso040EA");
  if (lep_customrelIso040EA_branch) lep_customrelIso040EA_branch->SetAddress(&lep_customrelIso040EA_);
  lep_customrelIso045EA_branch = tree->GetBranch("lep_customrelIso045EA");
  if (lep_customrelIso045EA_branch) lep_customrelIso045EA_branch->SetAddress(&lep_customrelIso045EA_);
  lep_customrelIso050EA_branch = tree->GetBranch("lep_customrelIso050EA");
  if (lep_customrelIso050EA_branch) lep_customrelIso050EA_branch->SetAddress(&lep_customrelIso050EA_);
  lep_customrelIso055EA_branch = tree->GetBranch("lep_customrelIso055EA");
  if (lep_customrelIso055EA_branch) lep_customrelIso055EA_branch->SetAddress(&lep_customrelIso055EA_);
  lep_customrelIso060EA_branch = tree->GetBranch("lep_customrelIso060EA");
  if (lep_customrelIso060EA_branch) lep_customrelIso060EA_branch->SetAddress(&lep_customrelIso060EA_);
  lep_customrelIso065EA_branch = tree->GetBranch("lep_customrelIso065EA");
  if (lep_customrelIso065EA_branch) lep_customrelIso065EA_branch->SetAddress(&lep_customrelIso065EA_);
  lep_customrelIso070EA_branch = tree->GetBranch("lep_customrelIso070EA");
  if (lep_customrelIso070EA_branch) lep_customrelIso070EA_branch->SetAddress(&lep_customrelIso070EA_);
  lep_customrelIso075EA_branch = tree->GetBranch("lep_customrelIso075EA");
  if (lep_customrelIso075EA_branch) lep_customrelIso075EA_branch->SetAddress(&lep_customrelIso075EA_);
  lep_customrelIso080EA_branch = tree->GetBranch("lep_customrelIso080EA");
  if (lep_customrelIso080EA_branch) lep_customrelIso080EA_branch->SetAddress(&lep_customrelIso080EA_);
  nb_branch = tree->GetBranch("nb");
  if (nb_branch) nb_branch->SetAddress(&nb_);
  nbmed_branch = tree->GetBranch("nbmed");
  if (nbmed_branch) nbmed_branch->SetAddress(&nbmed_);
  nbtight_branch = tree->GetBranch("nbtight");
  if (nbtight_branch) nbtight_branch->SetAddress(&nbtight_);
  nb30_branch = tree->GetBranch("nb30");
  if (nb30_branch) nb30_branch->SetAddress(&nb30_);
  nb30med_branch = tree->GetBranch("nb30med");
  if (nb30med_branch) nb30med_branch->SetAddress(&nb30med_);
  nb30tight_branch = tree->GetBranch("nb30tight");
  if (nb30tight_branch) nb30tight_branch->SetAddress(&nb30tight_);
  nb40_branch = tree->GetBranch("nb40");
  if (nb40_branch) nb40_branch->SetAddress(&nb40_);
  nb40med_branch = tree->GetBranch("nb40med");
  if (nb40med_branch) nb40med_branch->SetAddress(&nb40med_);
  nb40tight_branch = tree->GetBranch("nb40tight");
  if (nb40tight_branch) nb40tight_branch->SetAddress(&nb40tight_);
  nb50_branch = tree->GetBranch("nb50");
  if (nb50_branch) nb50_branch->SetAddress(&nb50_);
  nb50med_branch = tree->GetBranch("nb50med");
  if (nb50med_branch) nb50med_branch->SetAddress(&nb50med_);
  nb50tight_branch = tree->GetBranch("nb50tight");
  if (nb50tight_branch) nb50tight_branch->SetAddress(&nb50tight_);
  nbOR_branch = tree->GetBranch("nbOR");
  if (nbOR_branch) nbOR_branch->SetAddress(&nbOR_);
  nbORmed_branch = tree->GetBranch("nbORmed");
  if (nbORmed_branch) nbORmed_branch->SetAddress(&nbORmed_);
  nbORtight_branch = tree->GetBranch("nbORtight");
  if (nbORtight_branch) nbORtight_branch->SetAddress(&nbORtight_);
  nbOR30_branch = tree->GetBranch("nbOR30");
  if (nbOR30_branch) nbOR30_branch->SetAddress(&nbOR30_);
  nbOR30med_branch = tree->GetBranch("nbOR30med");
  if (nbOR30med_branch) nbOR30med_branch->SetAddress(&nbOR30med_);
  nbOR30tight_branch = tree->GetBranch("nbOR30tight");
  if (nbOR30tight_branch) nbOR30tight_branch->SetAddress(&nbOR30tight_);
  nbOR40_branch = tree->GetBranch("nbOR40");
  if (nbOR40_branch) nbOR40_branch->SetAddress(&nbOR40_);
  nbOR40med_branch = tree->GetBranch("nbOR40med");
  if (nbOR40med_branch) nbOR40med_branch->SetAddress(&nbOR40med_);
  nbOR40tight_branch = tree->GetBranch("nbOR40tight");
  if (nbOR40tight_branch) nbOR40tight_branch->SetAddress(&nbOR40tight_);
  nbOR50_branch = tree->GetBranch("nbOR50");
  if (nbOR50_branch) nbOR50_branch->SetAddress(&nbOR50_);
  nbOR50med_branch = tree->GetBranch("nbOR50med");
  if (nbOR50med_branch) nbOR50med_branch->SetAddress(&nbOR50med_);
  nbOR50tight_branch = tree->GetBranch("nbOR50tight");
  if (nbOR50tight_branch) nbOR50tight_branch->SetAddress(&nbOR50tight_);
  nrecolep_branch = tree->GetBranch("nrecolep");
  if (nrecolep_branch) nrecolep_branch->SetAddress(&nrecolep_);
  nak8jets_branch = tree->GetBranch("nak8jets");
  if (nak8jets_branch) nak8jets_branch->SetAddress(&nak8jets_);
  nj_branch = tree->GetBranch("nj");
  if (nj_branch) nj_branch->SetAddress(&nj_);
  nj50_branch = tree->GetBranch("nj50");
  if (nj50_branch) nj50_branch->SetAddress(&nj50_);
  recowhad_puppi_mass_branch = tree->GetBranch("recowhad_puppi_mass");
  if (recowhad_puppi_mass_branch) recowhad_puppi_mass_branch->SetAddress(&recowhad_puppi_mass_);
  recowhad_mass_branch = tree->GetBranch("recowhad_mass");
  if (recowhad_mass_branch) recowhad_mass_branch->SetAddress(&recowhad_mass_);
  recowhad_puppi_nJettinessTau1_branch = tree->GetBranch("recowhad_puppi_nJettinessTau1");
  if (recowhad_puppi_nJettinessTau1_branch) recowhad_puppi_nJettinessTau1_branch->SetAddress(&recowhad_puppi_nJettinessTau1_);
  recowhad_nJettinessTau1_branch = tree->GetBranch("recowhad_nJettinessTau1");
  if (recowhad_nJettinessTau1_branch) recowhad_nJettinessTau1_branch->SetAddress(&recowhad_nJettinessTau1_);
  recowhad_puppi_nJettinessTau2_branch = tree->GetBranch("recowhad_puppi_nJettinessTau2");
  if (recowhad_puppi_nJettinessTau2_branch) recowhad_puppi_nJettinessTau2_branch->SetAddress(&recowhad_puppi_nJettinessTau2_);
  recowhad_nJettinessTau2_branch = tree->GetBranch("recowhad_nJettinessTau2");
  if (recowhad_nJettinessTau2_branch) recowhad_nJettinessTau2_branch->SetAddress(&recowhad_nJettinessTau2_);
  recowhad_puppi_nJettinessTauRatio_branch = tree->GetBranch("recowhad_puppi_nJettinessTauRatio");
  if (recowhad_puppi_nJettinessTauRatio_branch) recowhad_puppi_nJettinessTauRatio_branch->SetAddress(&recowhad_puppi_nJettinessTauRatio_);
  recowhad_nJettinessTauRatio_branch = tree->GetBranch("recowhad_nJettinessTauRatio");
  if (recowhad_nJettinessTauRatio_branch) recowhad_nJettinessTauRatio_branch->SetAddress(&recowhad_nJettinessTauRatio_);
  recohiggs_mass_branch = tree->GetBranch("recohiggs_mass");
  if (recohiggs_mass_branch) recohiggs_mass_branch->SetAddress(&recohiggs_mass_);
  recohiggs2_mass_branch = tree->GetBranch("recohiggs2_mass");
  if (recohiggs2_mass_branch) recohiggs2_mass_branch->SetAddress(&recohiggs2_mass_);
  recohiggs_min_branch = tree->GetBranch("recohiggs_min");
  if (recohiggs_min_branch) recohiggs_min_branch->SetAddress(&recohiggs_min_);
  recohiggs_max_branch = tree->GetBranch("recohiggs_max");
  if (recohiggs_max_branch) recohiggs_max_branch->SetAddress(&recohiggs_max_);
  recowhad_mlep_puppi_mass_branch = tree->GetBranch("recowhad_mlep_puppi_mass");
  if (recowhad_mlep_puppi_mass_branch) recowhad_mlep_puppi_mass_branch->SetAddress(&recowhad_mlep_puppi_mass_);
  recowhad_mlep_mass_branch = tree->GetBranch("recowhad_mlep_mass");
  if (recowhad_mlep_mass_branch) recowhad_mlep_mass_branch->SetAddress(&recowhad_mlep_mass_);
  recowhad_plep_puppi_mass_branch = tree->GetBranch("recowhad_plep_puppi_mass");
  if (recowhad_plep_puppi_mass_branch) recowhad_plep_puppi_mass_branch->SetAddress(&recowhad_plep_puppi_mass_);
  recowhad_plep_mass_branch = tree->GetBranch("recowhad_plep_mass");
  if (recowhad_plep_mass_branch) recowhad_plep_mass_branch->SetAddress(&recowhad_plep_mass_);
  pf_annuli_energy_0_branch = tree->GetBranch("pf_annuli_energy_0");
  if (pf_annuli_energy_0_branch) pf_annuli_energy_0_branch->SetAddress(&pf_annuli_energy_0_);
  pf_annuli_energy_1_branch = tree->GetBranch("pf_annuli_energy_1");
  if (pf_annuli_energy_1_branch) pf_annuli_energy_1_branch->SetAddress(&pf_annuli_energy_1_);
  pf_annuli_energy_2_branch = tree->GetBranch("pf_annuli_energy_2");
  if (pf_annuli_energy_2_branch) pf_annuli_energy_2_branch->SetAddress(&pf_annuli_energy_2_);
  pf_annuli_energy_3_branch = tree->GetBranch("pf_annuli_energy_3");
  if (pf_annuli_energy_3_branch) pf_annuli_energy_3_branch->SetAddress(&pf_annuli_energy_3_);
  pf_annuli_energy_4_branch = tree->GetBranch("pf_annuli_energy_4");
  if (pf_annuli_energy_4_branch) pf_annuli_energy_4_branch->SetAddress(&pf_annuli_energy_4_);
  pf_annuli_energy_5_branch = tree->GetBranch("pf_annuli_energy_5");
  if (pf_annuli_energy_5_branch) pf_annuli_energy_5_branch->SetAddress(&pf_annuli_energy_5_);
  pf_annuli_energy_6_branch = tree->GetBranch("pf_annuli_energy_6");
  if (pf_annuli_energy_6_branch) pf_annuli_energy_6_branch->SetAddress(&pf_annuli_energy_6_);
  pf_annuli_energy_7_branch = tree->GetBranch("pf_annuli_energy_7");
  if (pf_annuli_energy_7_branch) pf_annuli_energy_7_branch->SetAddress(&pf_annuli_energy_7_);
  lep_miniIsoEA_branch = tree->GetBranch("lep_miniIsoEA");
  if (lep_miniIsoEA_branch) lep_miniIsoEA_branch->SetAddress(&lep_miniIsoEA_);
  lep_relIso04DB_branch = tree->GetBranch("lep_relIso04DB");
  if (lep_relIso04DB_branch) lep_relIso04DB_branch->SetAddress(&lep_relIso04DB_);
  lep_relIso03EA_branch = tree->GetBranch("lep_relIso03EA");
  if (lep_relIso03EA_branch) lep_relIso03EA_branch->SetAddress(&lep_relIso03EA_);
  recolepton_recowhad_dr_branch = tree->GetBranch("recolepton_recowhad_dr");
  if (recolepton_recowhad_dr_branch) recolepton_recowhad_dr_branch->SetAddress(&recolepton_recowhad_dr_);
  recolepton_recowhad_mlep_dr_branch = tree->GetBranch("recolepton_recowhad_mlep_dr");
  if (recolepton_recowhad_mlep_dr_branch) recolepton_recowhad_mlep_dr_branch->SetAddress(&recolepton_recowhad_mlep_dr_);
  recolepton_pt_branch = tree->GetBranch("recolepton_pt");
  if (recolepton_pt_branch) recolepton_pt_branch->SetAddress(&recolepton_pt_);
  met_pt_branch = tree->GetBranch("met_pt");
  if (met_pt_branch) met_pt_branch->SetAddress(&met_pt_);
  recowhad_pt_branch = tree->GetBranch("recowhad_pt");
  if (recowhad_pt_branch) recowhad_pt_branch->SetAddress(&recowhad_pt_);
  recowhad_puppi_pt_branch = tree->GetBranch("recowhad_puppi_pt");
  if (recowhad_puppi_pt_branch) recowhad_puppi_pt_branch->SetAddress(&recowhad_puppi_pt_);
  recolepton_met_dphi_branch = tree->GetBranch("recolepton_met_dphi");
  if (recolepton_met_dphi_branch) recolepton_met_dphi_branch->SetAddress(&recolepton_met_dphi_);
  recoisrmegajet_pt_branch = tree->GetBranch("recoisrmegajet_pt");
  if (recoisrmegajet_pt_branch) recoisrmegajet_pt_branch->SetAddress(&recoisrmegajet_pt_);
  recoisrbalance_branch = tree->GetBranch("recoisrbalance");
  if (recoisrbalance_branch) recoisrbalance_branch->SetAddress(&recoisrbalance_);
  CMS4path_branch = tree->GetBranch("CMS4path");
  if (CMS4path_branch) CMS4path_branch->SetAddress(&CMS4path_);
  CMS4index_branch = tree->GetBranch("CMS4index");
  if (CMS4index_branch) CMS4index_branch->SetAddress(&CMS4index_);
  run_branch = tree->GetBranch("run");
  if (run_branch) run_branch->SetAddress(&run_);
  lumi_branch = tree->GetBranch("lumi");
  if (lumi_branch) lumi_branch->SetAddress(&lumi_);
  evt_branch = tree->GetBranch("evt");
  if (evt_branch) evt_branch->SetAddress(&evt_);
  bdt_recoclassA_branch = tree->GetBranch("bdt_recoclassA");
  if (bdt_recoclassA_branch) bdt_recoclassA_branch->SetAddress(&bdt_recoclassA_);
  bdt_recoclassB_branch = tree->GetBranch("bdt_recoclassB");
  if (bdt_recoclassB_branch) bdt_recoclassB_branch->SetAddress(&bdt_recoclassB_);
  lqq_max_dr_branch = tree->GetBranch("lqq_max_dr");
  if (lqq_max_dr_branch) lqq_max_dr_branch->SetAddress(&lqq_max_dr_);
  lq0_dr_branch = tree->GetBranch("lq0_dr");
  if (lq0_dr_branch) lq0_dr_branch->SetAddress(&lq0_dr_);
  lq1_dr_branch = tree->GetBranch("lq1_dr");
  if (lq1_dr_branch) lq1_dr_branch->SetAddress(&lq1_dr_);
  qq_dr_branch = tree->GetBranch("qq_dr");
  if (qq_dr_branch) qq_dr_branch->SetAddress(&qq_dr_);
  decay_dr_branch = tree->GetBranch("decay_dr");
  if (decay_dr_branch) decay_dr_branch->SetAddress(&decay_dr_);
  l_qq_dr_branch = tree->GetBranch("l_qq_dr");
  if (l_qq_dr_branch) l_qq_dr_branch->SetAddress(&l_qq_dr_);
  lqq_mass_branch = tree->GetBranch("lqq_mass");
  if (lqq_mass_branch) lqq_mass_branch->SetAddress(&lqq_mass_);
  lvqq_mt_branch = tree->GetBranch("lvqq_mt");
  if (lvqq_mt_branch) lvqq_mt_branch->SetAddress(&lvqq_mt_);
  higgsdecay_branch = tree->GetBranch("higgsdecay");
  if (higgsdecay_branch) higgsdecay_branch->SetAddress(&higgsdecay_);
  nlep_branch = tree->GetBranch("nlep");
  if (nlep_branch) nlep_branch->SetAddress(&nlep_);
  nquark_branch = tree->GetBranch("nquark");
  if (nquark_branch) nquark_branch->SetAddress(&nquark_);
  wa_id_branch = tree->GetBranch("wa_id");
  if (wa_id_branch) wa_id_branch->SetAddress(&wa_id_);
  isr_pt_branch = tree->GetBranch("isr_pt");
  if (isr_pt_branch) isr_pt_branch->SetAddress(&isr_pt_);
  isr_eta_branch = tree->GetBranch("isr_eta");
  if (isr_eta_branch) isr_eta_branch->SetAddress(&isr_eta_);
  isr_phi_branch = tree->GetBranch("isr_phi");
  if (isr_phi_branch) isr_phi_branch->SetAddress(&isr_phi_);
  higgs_pt_branch = tree->GetBranch("higgs_pt");
  if (higgs_pt_branch) higgs_pt_branch->SetAddress(&higgs_pt_);
  higgs_eta_branch = tree->GetBranch("higgs_eta");
  if (higgs_eta_branch) higgs_eta_branch->SetAddress(&higgs_eta_);
  higgs_phi_branch = tree->GetBranch("higgs_phi");
  if (higgs_phi_branch) higgs_phi_branch->SetAddress(&higgs_phi_);
  decay0_pt_branch = tree->GetBranch("decay0_pt");
  if (decay0_pt_branch) decay0_pt_branch->SetAddress(&decay0_pt_);
  decay0_eta_branch = tree->GetBranch("decay0_eta");
  if (decay0_eta_branch) decay0_eta_branch->SetAddress(&decay0_eta_);
  decay0_phi_branch = tree->GetBranch("decay0_phi");
  if (decay0_phi_branch) decay0_phi_branch->SetAddress(&decay0_phi_);
  decay0_mass_branch = tree->GetBranch("decay0_mass");
  if (decay0_mass_branch) decay0_mass_branch->SetAddress(&decay0_mass_);
  decay0_id_branch = tree->GetBranch("decay0_id");
  if (decay0_id_branch) decay0_id_branch->SetAddress(&decay0_id_);
  decay0_isstar_branch = tree->GetBranch("decay0_isstar");
  if (decay0_isstar_branch) decay0_isstar_branch->SetAddress(&decay0_isstar_);
  decay1_pt_branch = tree->GetBranch("decay1_pt");
  if (decay1_pt_branch) decay1_pt_branch->SetAddress(&decay1_pt_);
  decay1_eta_branch = tree->GetBranch("decay1_eta");
  if (decay1_eta_branch) decay1_eta_branch->SetAddress(&decay1_eta_);
  decay1_phi_branch = tree->GetBranch("decay1_phi");
  if (decay1_phi_branch) decay1_phi_branch->SetAddress(&decay1_phi_);
  decay1_mass_branch = tree->GetBranch("decay1_mass");
  if (decay1_mass_branch) decay1_mass_branch->SetAddress(&decay1_mass_);
  decay1_id_branch = tree->GetBranch("decay1_id");
  if (decay1_id_branch) decay1_id_branch->SetAddress(&decay1_id_);
  decay1_isstar_branch = tree->GetBranch("decay1_isstar");
  if (decay1_isstar_branch) decay1_isstar_branch->SetAddress(&decay1_isstar_);
  lepton_pt_branch = tree->GetBranch("lepton_pt");
  if (lepton_pt_branch) lepton_pt_branch->SetAddress(&lepton_pt_);
  lepton_eta_branch = tree->GetBranch("lepton_eta");
  if (lepton_eta_branch) lepton_eta_branch->SetAddress(&lepton_eta_);
  lepton_phi_branch = tree->GetBranch("lepton_phi");
  if (lepton_phi_branch) lepton_phi_branch->SetAddress(&lepton_phi_);
  lepton_mass_branch = tree->GetBranch("lepton_mass");
  if (lepton_mass_branch) lepton_mass_branch->SetAddress(&lepton_mass_);
  lepton_id_branch = tree->GetBranch("lepton_id");
  if (lepton_id_branch) lepton_id_branch->SetAddress(&lepton_id_);
  lepton_isstar_branch = tree->GetBranch("lepton_isstar");
  if (lepton_isstar_branch) lepton_isstar_branch->SetAddress(&lepton_isstar_);
  neutrino_pt_branch = tree->GetBranch("neutrino_pt");
  if (neutrino_pt_branch) neutrino_pt_branch->SetAddress(&neutrino_pt_);
  neutrino_eta_branch = tree->GetBranch("neutrino_eta");
  if (neutrino_eta_branch) neutrino_eta_branch->SetAddress(&neutrino_eta_);
  neutrino_phi_branch = tree->GetBranch("neutrino_phi");
  if (neutrino_phi_branch) neutrino_phi_branch->SetAddress(&neutrino_phi_);
  neutrino_mass_branch = tree->GetBranch("neutrino_mass");
  if (neutrino_mass_branch) neutrino_mass_branch->SetAddress(&neutrino_mass_);
  neutrino_id_branch = tree->GetBranch("neutrino_id");
  if (neutrino_id_branch) neutrino_id_branch->SetAddress(&neutrino_id_);
  neutrino_isstar_branch = tree->GetBranch("neutrino_isstar");
  if (neutrino_isstar_branch) neutrino_isstar_branch->SetAddress(&neutrino_isstar_);
  quark0_pt_branch = tree->GetBranch("quark0_pt");
  if (quark0_pt_branch) quark0_pt_branch->SetAddress(&quark0_pt_);
  quark0_eta_branch = tree->GetBranch("quark0_eta");
  if (quark0_eta_branch) quark0_eta_branch->SetAddress(&quark0_eta_);
  quark0_phi_branch = tree->GetBranch("quark0_phi");
  if (quark0_phi_branch) quark0_phi_branch->SetAddress(&quark0_phi_);
  quark0_mass_branch = tree->GetBranch("quark0_mass");
  if (quark0_mass_branch) quark0_mass_branch->SetAddress(&quark0_mass_);
  quark0_id_branch = tree->GetBranch("quark0_id");
  if (quark0_id_branch) quark0_id_branch->SetAddress(&quark0_id_);
  quark0_isstar_branch = tree->GetBranch("quark0_isstar");
  if (quark0_isstar_branch) quark0_isstar_branch->SetAddress(&quark0_isstar_);
  quark1_pt_branch = tree->GetBranch("quark1_pt");
  if (quark1_pt_branch) quark1_pt_branch->SetAddress(&quark1_pt_);
  quark1_eta_branch = tree->GetBranch("quark1_eta");
  if (quark1_eta_branch) quark1_eta_branch->SetAddress(&quark1_eta_);
  quark1_phi_branch = tree->GetBranch("quark1_phi");
  if (quark1_phi_branch) quark1_phi_branch->SetAddress(&quark1_phi_);
  quark1_mass_branch = tree->GetBranch("quark1_mass");
  if (quark1_mass_branch) quark1_mass_branch->SetAddress(&quark1_mass_);
  quark1_id_branch = tree->GetBranch("quark1_id");
  if (quark1_id_branch) quark1_id_branch->SetAddress(&quark1_id_);
  quark1_isstar_branch = tree->GetBranch("quark1_isstar");
  if (quark1_isstar_branch) quark1_isstar_branch->SetAddress(&quark1_isstar_);
  njInDR1_branch = tree->GetBranch("njInDR1");
  if (njInDR1_branch) njInDR1_branch->SetAddress(&njInDR1_);
  jet0InDR1_pt_branch = tree->GetBranch("jet0InDR1_pt");
  if (jet0InDR1_pt_branch) jet0InDR1_pt_branch->SetAddress(&jet0InDR1_pt_);
  jet1InDR1_pt_branch = tree->GetBranch("jet1InDR1_pt");
  if (jet1InDR1_pt_branch) jet1InDR1_pt_branch->SetAddress(&jet1InDR1_pt_);
  jet0InDR1_dr_branch = tree->GetBranch("jet0InDR1_dr");
  if (jet0InDR1_dr_branch) jet0InDR1_dr_branch->SetAddress(&jet0InDR1_dr_);
  jet1InDR1_dr_branch = tree->GetBranch("jet1InDR1_dr");
  if (jet1InDR1_dr_branch) jet1InDR1_dr_branch->SetAddress(&jet1InDR1_dr_);
  njInDR15_branch = tree->GetBranch("njInDR15");
  if (njInDR15_branch) njInDR15_branch->SetAddress(&njInDR15_);
  jet0InDR15_pt_branch = tree->GetBranch("jet0InDR15_pt");
  if (jet0InDR15_pt_branch) jet0InDR15_pt_branch->SetAddress(&jet0InDR15_pt_);
  jet1InDR15_pt_branch = tree->GetBranch("jet1InDR15_pt");
  if (jet1InDR15_pt_branch) jet1InDR15_pt_branch->SetAddress(&jet1InDR15_pt_);
  jet0InDR15_dr_branch = tree->GetBranch("jet0InDR15_dr");
  if (jet0InDR15_dr_branch) jet0InDR15_dr_branch->SetAddress(&jet0InDR15_dr_);
  jet1InDR15_dr_branch = tree->GetBranch("jet1InDR15_dr");
  if (jet1InDR15_dr_branch) jet1InDR15_dr_branch->SetAddress(&jet1InDR15_dr_);

  tree->SetMakeClass(0);
}

void hwwtree::GetEntry(unsigned int idx) {
  // this only marks branches as not loaded, saving a lot of time
  index = idx;
  CutGenHT_isLoaded = false;
  CutNLep_isLoaded = false;
  CutNAK8_isLoaded = false;
  CutISRMegaJet_isLoaded = false;
  CutISRBalance_isLoaded = false;
  CutMu_isLoaded = false;
  CutMuPlus_isLoaded = false;
  CutMuMinus_isLoaded = false;
  CutEl_isLoaded = false;
  CutElPlus_isLoaded = false;
  CutElMinus_isLoaded = false;
  CutClass1_isLoaded = false;
  CutClass2_isLoaded = false;
  CutClass3_isLoaded = false;
  CutClass4_isLoaded = false;
  CutClassA_isLoaded = false;
  CutClassB_isLoaded = false;
  CutRecoClassA_isLoaded = false;
  CutRecoClassB_isLoaded = false;
  wgt_isLoaded = false;
  wstar_channel_id_isLoaded = false;
  lepmetpt_isLoaded = false;
  ak8minusleppt_isLoaded = false;
  wlepptratio_isLoaded = false;
  whadptratio_isLoaded = false;
  wlepwhadptratiosum_isLoaded = false;
  wlepwhadptratiodiff_isLoaded = false;
  wlepwhadptratioratio_isLoaded = false;
  lep_customrelIso005EA_isLoaded = false;
  lep_customrelIso010EA_isLoaded = false;
  lep_customrelIso015EA_isLoaded = false;
  lep_customrelIso020EA_isLoaded = false;
  lep_customrelIso025EA_isLoaded = false;
  lep_customrelIso030EA_isLoaded = false;
  lep_customrelIso035EA_isLoaded = false;
  lep_customrelIso040EA_isLoaded = false;
  lep_customrelIso045EA_isLoaded = false;
  lep_customrelIso050EA_isLoaded = false;
  lep_customrelIso055EA_isLoaded = false;
  lep_customrelIso060EA_isLoaded = false;
  lep_customrelIso065EA_isLoaded = false;
  lep_customrelIso070EA_isLoaded = false;
  lep_customrelIso075EA_isLoaded = false;
  lep_customrelIso080EA_isLoaded = false;
  nb_isLoaded = false;
  nbmed_isLoaded = false;
  nbtight_isLoaded = false;
  nb30_isLoaded = false;
  nb30med_isLoaded = false;
  nb30tight_isLoaded = false;
  nb40_isLoaded = false;
  nb40med_isLoaded = false;
  nb40tight_isLoaded = false;
  nb50_isLoaded = false;
  nb50med_isLoaded = false;
  nb50tight_isLoaded = false;
  nbOR_isLoaded = false;
  nbORmed_isLoaded = false;
  nbORtight_isLoaded = false;
  nbOR30_isLoaded = false;
  nbOR30med_isLoaded = false;
  nbOR30tight_isLoaded = false;
  nbOR40_isLoaded = false;
  nbOR40med_isLoaded = false;
  nbOR40tight_isLoaded = false;
  nbOR50_isLoaded = false;
  nbOR50med_isLoaded = false;
  nbOR50tight_isLoaded = false;
  nrecolep_isLoaded = false;
  nak8jets_isLoaded = false;
  nj_isLoaded = false;
  nj50_isLoaded = false;
  recowhad_puppi_mass_isLoaded = false;
  recowhad_mass_isLoaded = false;
  recowhad_puppi_nJettinessTau1_isLoaded = false;
  recowhad_nJettinessTau1_isLoaded = false;
  recowhad_puppi_nJettinessTau2_isLoaded = false;
  recowhad_nJettinessTau2_isLoaded = false;
  recowhad_puppi_nJettinessTauRatio_isLoaded = false;
  recowhad_nJettinessTauRatio_isLoaded = false;
  recohiggs_mass_isLoaded = false;
  recohiggs2_mass_isLoaded = false;
  recohiggs_min_isLoaded = false;
  recohiggs_max_isLoaded = false;
  recowhad_mlep_puppi_mass_isLoaded = false;
  recowhad_mlep_mass_isLoaded = false;
  recowhad_plep_puppi_mass_isLoaded = false;
  recowhad_plep_mass_isLoaded = false;
  pf_annuli_energy_0_isLoaded = false;
  pf_annuli_energy_1_isLoaded = false;
  pf_annuli_energy_2_isLoaded = false;
  pf_annuli_energy_3_isLoaded = false;
  pf_annuli_energy_4_isLoaded = false;
  pf_annuli_energy_5_isLoaded = false;
  pf_annuli_energy_6_isLoaded = false;
  pf_annuli_energy_7_isLoaded = false;
  lep_miniIsoEA_isLoaded = false;
  lep_relIso04DB_isLoaded = false;
  lep_relIso03EA_isLoaded = false;
  recolepton_recowhad_dr_isLoaded = false;
  recolepton_recowhad_mlep_dr_isLoaded = false;
  recolepton_pt_isLoaded = false;
  met_pt_isLoaded = false;
  recowhad_pt_isLoaded = false;
  recowhad_puppi_pt_isLoaded = false;
  recolepton_met_dphi_isLoaded = false;
  recoisrmegajet_pt_isLoaded = false;
  recoisrbalance_isLoaded = false;
  CMS4path_isLoaded = false;
  CMS4index_isLoaded = false;
  run_isLoaded = false;
  lumi_isLoaded = false;
  evt_isLoaded = false;
  bdt_recoclassA_isLoaded = false;
  bdt_recoclassB_isLoaded = false;
  lqq_max_dr_isLoaded = false;
  lq0_dr_isLoaded = false;
  lq1_dr_isLoaded = false;
  qq_dr_isLoaded = false;
  decay_dr_isLoaded = false;
  l_qq_dr_isLoaded = false;
  lqq_mass_isLoaded = false;
  lvqq_mt_isLoaded = false;
  higgsdecay_isLoaded = false;
  nlep_isLoaded = false;
  nquark_isLoaded = false;
  wa_id_isLoaded = false;
  isr_pt_isLoaded = false;
  isr_eta_isLoaded = false;
  isr_phi_isLoaded = false;
  higgs_pt_isLoaded = false;
  higgs_eta_isLoaded = false;
  higgs_phi_isLoaded = false;
  decay0_pt_isLoaded = false;
  decay0_eta_isLoaded = false;
  decay0_phi_isLoaded = false;
  decay0_mass_isLoaded = false;
  decay0_id_isLoaded = false;
  decay0_isstar_isLoaded = false;
  decay1_pt_isLoaded = false;
  decay1_eta_isLoaded = false;
  decay1_phi_isLoaded = false;
  decay1_mass_isLoaded = false;
  decay1_id_isLoaded = false;
  decay1_isstar_isLoaded = false;
  lepton_pt_isLoaded = false;
  lepton_eta_isLoaded = false;
  lepton_phi_isLoaded = false;
  lepton_mass_isLoaded = false;
  lepton_id_isLoaded = false;
  lepton_isstar_isLoaded = false;
  neutrino_pt_isLoaded = false;
  neutrino_eta_isLoaded = false;
  neutrino_phi_isLoaded = false;
  neutrino_mass_isLoaded = false;
  neutrino_id_isLoaded = false;
  neutrino_isstar_isLoaded = false;
  quark0_pt_isLoaded = false;
  quark0_eta_isLoaded = false;
  quark0_phi_isLoaded = false;
  quark0_mass_isLoaded = false;
  quark0_id_isLoaded = false;
  quark0_isstar_isLoaded = false;
  quark1_pt_isLoaded = false;
  quark1_eta_isLoaded = false;
  quark1_phi_isLoaded = false;
  quark1_mass_isLoaded = false;
  quark1_id_isLoaded = false;
  quark1_isstar_isLoaded = false;
  njInDR1_isLoaded = false;
  jet0InDR1_pt_isLoaded = false;
  jet1InDR1_pt_isLoaded = false;
  jet0InDR1_dr_isLoaded = false;
  jet1InDR1_dr_isLoaded = false;
  njInDR15_isLoaded = false;
  jet0InDR15_pt_isLoaded = false;
  jet1InDR15_pt_isLoaded = false;
  jet0InDR15_dr_isLoaded = false;
  jet1InDR15_dr_isLoaded = false;
}

void hwwtree::LoadAllBranches() {
  // load all branches
  if (CutGenHT_branch != 0) CutGenHT();
  if (CutNLep_branch != 0) CutNLep();
  if (CutNAK8_branch != 0) CutNAK8();
  if (CutISRMegaJet_branch != 0) CutISRMegaJet();
  if (CutISRBalance_branch != 0) CutISRBalance();
  if (CutMu_branch != 0) CutMu();
  if (CutMuPlus_branch != 0) CutMuPlus();
  if (CutMuMinus_branch != 0) CutMuMinus();
  if (CutEl_branch != 0) CutEl();
  if (CutElPlus_branch != 0) CutElPlus();
  if (CutElMinus_branch != 0) CutElMinus();
  if (CutClass1_branch != 0) CutClass1();
  if (CutClass2_branch != 0) CutClass2();
  if (CutClass3_branch != 0) CutClass3();
  if (CutClass4_branch != 0) CutClass4();
  if (CutClassA_branch != 0) CutClassA();
  if (CutClassB_branch != 0) CutClassB();
  if (CutRecoClassA_branch != 0) CutRecoClassA();
  if (CutRecoClassB_branch != 0) CutRecoClassB();
  if (wgt_branch != 0) wgt();
  if (wstar_channel_id_branch != 0) wstar_channel_id();
  if (lepmetpt_branch != 0) lepmetpt();
  if (ak8minusleppt_branch != 0) ak8minusleppt();
  if (wlepptratio_branch != 0) wlepptratio();
  if (whadptratio_branch != 0) whadptratio();
  if (wlepwhadptratiosum_branch != 0) wlepwhadptratiosum();
  if (wlepwhadptratiodiff_branch != 0) wlepwhadptratiodiff();
  if (wlepwhadptratioratio_branch != 0) wlepwhadptratioratio();
  if (lep_customrelIso005EA_branch != 0) lep_customrelIso005EA();
  if (lep_customrelIso010EA_branch != 0) lep_customrelIso010EA();
  if (lep_customrelIso015EA_branch != 0) lep_customrelIso015EA();
  if (lep_customrelIso020EA_branch != 0) lep_customrelIso020EA();
  if (lep_customrelIso025EA_branch != 0) lep_customrelIso025EA();
  if (lep_customrelIso030EA_branch != 0) lep_customrelIso030EA();
  if (lep_customrelIso035EA_branch != 0) lep_customrelIso035EA();
  if (lep_customrelIso040EA_branch != 0) lep_customrelIso040EA();
  if (lep_customrelIso045EA_branch != 0) lep_customrelIso045EA();
  if (lep_customrelIso050EA_branch != 0) lep_customrelIso050EA();
  if (lep_customrelIso055EA_branch != 0) lep_customrelIso055EA();
  if (lep_customrelIso060EA_branch != 0) lep_customrelIso060EA();
  if (lep_customrelIso065EA_branch != 0) lep_customrelIso065EA();
  if (lep_customrelIso070EA_branch != 0) lep_customrelIso070EA();
  if (lep_customrelIso075EA_branch != 0) lep_customrelIso075EA();
  if (lep_customrelIso080EA_branch != 0) lep_customrelIso080EA();
  if (nb_branch != 0) nb();
  if (nbmed_branch != 0) nbmed();
  if (nbtight_branch != 0) nbtight();
  if (nb30_branch != 0) nb30();
  if (nb30med_branch != 0) nb30med();
  if (nb30tight_branch != 0) nb30tight();
  if (nb40_branch != 0) nb40();
  if (nb40med_branch != 0) nb40med();
  if (nb40tight_branch != 0) nb40tight();
  if (nb50_branch != 0) nb50();
  if (nb50med_branch != 0) nb50med();
  if (nb50tight_branch != 0) nb50tight();
  if (nbOR_branch != 0) nbOR();
  if (nbORmed_branch != 0) nbORmed();
  if (nbORtight_branch != 0) nbORtight();
  if (nbOR30_branch != 0) nbOR30();
  if (nbOR30med_branch != 0) nbOR30med();
  if (nbOR30tight_branch != 0) nbOR30tight();
  if (nbOR40_branch != 0) nbOR40();
  if (nbOR40med_branch != 0) nbOR40med();
  if (nbOR40tight_branch != 0) nbOR40tight();
  if (nbOR50_branch != 0) nbOR50();
  if (nbOR50med_branch != 0) nbOR50med();
  if (nbOR50tight_branch != 0) nbOR50tight();
  if (nrecolep_branch != 0) nrecolep();
  if (nak8jets_branch != 0) nak8jets();
  if (nj_branch != 0) nj();
  if (nj50_branch != 0) nj50();
  if (recowhad_puppi_mass_branch != 0) recowhad_puppi_mass();
  if (recowhad_mass_branch != 0) recowhad_mass();
  if (recowhad_puppi_nJettinessTau1_branch != 0) recowhad_puppi_nJettinessTau1();
  if (recowhad_nJettinessTau1_branch != 0) recowhad_nJettinessTau1();
  if (recowhad_puppi_nJettinessTau2_branch != 0) recowhad_puppi_nJettinessTau2();
  if (recowhad_nJettinessTau2_branch != 0) recowhad_nJettinessTau2();
  if (recowhad_puppi_nJettinessTauRatio_branch != 0) recowhad_puppi_nJettinessTauRatio();
  if (recowhad_nJettinessTauRatio_branch != 0) recowhad_nJettinessTauRatio();
  if (recohiggs_mass_branch != 0) recohiggs_mass();
  if (recohiggs2_mass_branch != 0) recohiggs2_mass();
  if (recohiggs_min_branch != 0) recohiggs_min();
  if (recohiggs_max_branch != 0) recohiggs_max();
  if (recowhad_mlep_puppi_mass_branch != 0) recowhad_mlep_puppi_mass();
  if (recowhad_mlep_mass_branch != 0) recowhad_mlep_mass();
  if (recowhad_plep_puppi_mass_branch != 0) recowhad_plep_puppi_mass();
  if (recowhad_plep_mass_branch != 0) recowhad_plep_mass();
  if (pf_annuli_energy_0_branch != 0) pf_annuli_energy_0();
  if (pf_annuli_energy_1_branch != 0) pf_annuli_energy_1();
  if (pf_annuli_energy_2_branch != 0) pf_annuli_energy_2();
  if (pf_annuli_energy_3_branch != 0) pf_annuli_energy_3();
  if (pf_annuli_energy_4_branch != 0) pf_annuli_energy_4();
  if (pf_annuli_energy_5_branch != 0) pf_annuli_energy_5();
  if (pf_annuli_energy_6_branch != 0) pf_annuli_energy_6();
  if (pf_annuli_energy_7_branch != 0) pf_annuli_energy_7();
  if (lep_miniIsoEA_branch != 0) lep_miniIsoEA();
  if (lep_relIso04DB_branch != 0) lep_relIso04DB();
  if (lep_relIso03EA_branch != 0) lep_relIso03EA();
  if (recolepton_recowhad_dr_branch != 0) recolepton_recowhad_dr();
  if (recolepton_recowhad_mlep_dr_branch != 0) recolepton_recowhad_mlep_dr();
  if (recolepton_pt_branch != 0) recolepton_pt();
  if (met_pt_branch != 0) met_pt();
  if (recowhad_pt_branch != 0) recowhad_pt();
  if (recowhad_puppi_pt_branch != 0) recowhad_puppi_pt();
  if (recolepton_met_dphi_branch != 0) recolepton_met_dphi();
  if (recoisrmegajet_pt_branch != 0) recoisrmegajet_pt();
  if (recoisrbalance_branch != 0) recoisrbalance();
  if (CMS4path_branch != 0) CMS4path();
  if (CMS4index_branch != 0) CMS4index();
  if (run_branch != 0) run();
  if (lumi_branch != 0) lumi();
  if (evt_branch != 0) evt();
  if (bdt_recoclassA_branch != 0) bdt_recoclassA();
  if (bdt_recoclassB_branch != 0) bdt_recoclassB();
  if (lqq_max_dr_branch != 0) lqq_max_dr();
  if (lq0_dr_branch != 0) lq0_dr();
  if (lq1_dr_branch != 0) lq1_dr();
  if (qq_dr_branch != 0) qq_dr();
  if (decay_dr_branch != 0) decay_dr();
  if (l_qq_dr_branch != 0) l_qq_dr();
  if (lqq_mass_branch != 0) lqq_mass();
  if (lvqq_mt_branch != 0) lvqq_mt();
  if (higgsdecay_branch != 0) higgsdecay();
  if (nlep_branch != 0) nlep();
  if (nquark_branch != 0) nquark();
  if (wa_id_branch != 0) wa_id();
  if (isr_pt_branch != 0) isr_pt();
  if (isr_eta_branch != 0) isr_eta();
  if (isr_phi_branch != 0) isr_phi();
  if (higgs_pt_branch != 0) higgs_pt();
  if (higgs_eta_branch != 0) higgs_eta();
  if (higgs_phi_branch != 0) higgs_phi();
  if (decay0_pt_branch != 0) decay0_pt();
  if (decay0_eta_branch != 0) decay0_eta();
  if (decay0_phi_branch != 0) decay0_phi();
  if (decay0_mass_branch != 0) decay0_mass();
  if (decay0_id_branch != 0) decay0_id();
  if (decay0_isstar_branch != 0) decay0_isstar();
  if (decay1_pt_branch != 0) decay1_pt();
  if (decay1_eta_branch != 0) decay1_eta();
  if (decay1_phi_branch != 0) decay1_phi();
  if (decay1_mass_branch != 0) decay1_mass();
  if (decay1_id_branch != 0) decay1_id();
  if (decay1_isstar_branch != 0) decay1_isstar();
  if (lepton_pt_branch != 0) lepton_pt();
  if (lepton_eta_branch != 0) lepton_eta();
  if (lepton_phi_branch != 0) lepton_phi();
  if (lepton_mass_branch != 0) lepton_mass();
  if (lepton_id_branch != 0) lepton_id();
  if (lepton_isstar_branch != 0) lepton_isstar();
  if (neutrino_pt_branch != 0) neutrino_pt();
  if (neutrino_eta_branch != 0) neutrino_eta();
  if (neutrino_phi_branch != 0) neutrino_phi();
  if (neutrino_mass_branch != 0) neutrino_mass();
  if (neutrino_id_branch != 0) neutrino_id();
  if (neutrino_isstar_branch != 0) neutrino_isstar();
  if (quark0_pt_branch != 0) quark0_pt();
  if (quark0_eta_branch != 0) quark0_eta();
  if (quark0_phi_branch != 0) quark0_phi();
  if (quark0_mass_branch != 0) quark0_mass();
  if (quark0_id_branch != 0) quark0_id();
  if (quark0_isstar_branch != 0) quark0_isstar();
  if (quark1_pt_branch != 0) quark1_pt();
  if (quark1_eta_branch != 0) quark1_eta();
  if (quark1_phi_branch != 0) quark1_phi();
  if (quark1_mass_branch != 0) quark1_mass();
  if (quark1_id_branch != 0) quark1_id();
  if (quark1_isstar_branch != 0) quark1_isstar();
  if (njInDR1_branch != 0) njInDR1();
  if (jet0InDR1_pt_branch != 0) jet0InDR1_pt();
  if (jet1InDR1_pt_branch != 0) jet1InDR1_pt();
  if (jet0InDR1_dr_branch != 0) jet0InDR1_dr();
  if (jet1InDR1_dr_branch != 0) jet1InDR1_dr();
  if (njInDR15_branch != 0) njInDR15();
  if (jet0InDR15_pt_branch != 0) jet0InDR15_pt();
  if (jet1InDR15_pt_branch != 0) jet1InDR15_pt();
  if (jet0InDR15_dr_branch != 0) jet0InDR15_dr();
  if (jet1InDR15_dr_branch != 0) jet1InDR15_dr();
}

const float &hwwtree::CutGenHT() {
  if (not CutGenHT_isLoaded) {
    if (CutGenHT_branch != 0) {
      CutGenHT_branch->GetEntry(index);
    } else {
      printf("branch CutGenHT_branch does not exist!\n");
      exit(1);
    }
    CutGenHT_isLoaded = true;
  }
  return CutGenHT_;
}

const float &hwwtree::CutNLep() {
  if (not CutNLep_isLoaded) {
    if (CutNLep_branch != 0) {
      CutNLep_branch->GetEntry(index);
    } else {
      printf("branch CutNLep_branch does not exist!\n");
      exit(1);
    }
    CutNLep_isLoaded = true;
  }
  return CutNLep_;
}

const float &hwwtree::CutNAK8() {
  if (not CutNAK8_isLoaded) {
    if (CutNAK8_branch != 0) {
      CutNAK8_branch->GetEntry(index);
    } else {
      printf("branch CutNAK8_branch does not exist!\n");
      exit(1);
    }
    CutNAK8_isLoaded = true;
  }
  return CutNAK8_;
}

const float &hwwtree::CutISRMegaJet() {
  if (not CutISRMegaJet_isLoaded) {
    if (CutISRMegaJet_branch != 0) {
      CutISRMegaJet_branch->GetEntry(index);
    } else {
      printf("branch CutISRMegaJet_branch does not exist!\n");
      exit(1);
    }
    CutISRMegaJet_isLoaded = true;
  }
  return CutISRMegaJet_;
}

const float &hwwtree::CutISRBalance() {
  if (not CutISRBalance_isLoaded) {
    if (CutISRBalance_branch != 0) {
      CutISRBalance_branch->GetEntry(index);
    } else {
      printf("branch CutISRBalance_branch does not exist!\n");
      exit(1);
    }
    CutISRBalance_isLoaded = true;
  }
  return CutISRBalance_;
}

const float &hwwtree::CutMu() {
  if (not CutMu_isLoaded) {
    if (CutMu_branch != 0) {
      CutMu_branch->GetEntry(index);
    } else {
      printf("branch CutMu_branch does not exist!\n");
      exit(1);
    }
    CutMu_isLoaded = true;
  }
  return CutMu_;
}

const float &hwwtree::CutMuPlus() {
  if (not CutMuPlus_isLoaded) {
    if (CutMuPlus_branch != 0) {
      CutMuPlus_branch->GetEntry(index);
    } else {
      printf("branch CutMuPlus_branch does not exist!\n");
      exit(1);
    }
    CutMuPlus_isLoaded = true;
  }
  return CutMuPlus_;
}

const float &hwwtree::CutMuMinus() {
  if (not CutMuMinus_isLoaded) {
    if (CutMuMinus_branch != 0) {
      CutMuMinus_branch->GetEntry(index);
    } else {
      printf("branch CutMuMinus_branch does not exist!\n");
      exit(1);
    }
    CutMuMinus_isLoaded = true;
  }
  return CutMuMinus_;
}

const float &hwwtree::CutEl() {
  if (not CutEl_isLoaded) {
    if (CutEl_branch != 0) {
      CutEl_branch->GetEntry(index);
    } else {
      printf("branch CutEl_branch does not exist!\n");
      exit(1);
    }
    CutEl_isLoaded = true;
  }
  return CutEl_;
}

const float &hwwtree::CutElPlus() {
  if (not CutElPlus_isLoaded) {
    if (CutElPlus_branch != 0) {
      CutElPlus_branch->GetEntry(index);
    } else {
      printf("branch CutElPlus_branch does not exist!\n");
      exit(1);
    }
    CutElPlus_isLoaded = true;
  }
  return CutElPlus_;
}

const float &hwwtree::CutElMinus() {
  if (not CutElMinus_isLoaded) {
    if (CutElMinus_branch != 0) {
      CutElMinus_branch->GetEntry(index);
    } else {
      printf("branch CutElMinus_branch does not exist!\n");
      exit(1);
    }
    CutElMinus_isLoaded = true;
  }
  return CutElMinus_;
}

const float &hwwtree::CutClass1() {
  if (not CutClass1_isLoaded) {
    if (CutClass1_branch != 0) {
      CutClass1_branch->GetEntry(index);
    } else {
      printf("branch CutClass1_branch does not exist!\n");
      exit(1);
    }
    CutClass1_isLoaded = true;
  }
  return CutClass1_;
}

const float &hwwtree::CutClass2() {
  if (not CutClass2_isLoaded) {
    if (CutClass2_branch != 0) {
      CutClass2_branch->GetEntry(index);
    } else {
      printf("branch CutClass2_branch does not exist!\n");
      exit(1);
    }
    CutClass2_isLoaded = true;
  }
  return CutClass2_;
}

const float &hwwtree::CutClass3() {
  if (not CutClass3_isLoaded) {
    if (CutClass3_branch != 0) {
      CutClass3_branch->GetEntry(index);
    } else {
      printf("branch CutClass3_branch does not exist!\n");
      exit(1);
    }
    CutClass3_isLoaded = true;
  }
  return CutClass3_;
}

const float &hwwtree::CutClass4() {
  if (not CutClass4_isLoaded) {
    if (CutClass4_branch != 0) {
      CutClass4_branch->GetEntry(index);
    } else {
      printf("branch CutClass4_branch does not exist!\n");
      exit(1);
    }
    CutClass4_isLoaded = true;
  }
  return CutClass4_;
}

const float &hwwtree::CutClassA() {
  if (not CutClassA_isLoaded) {
    if (CutClassA_branch != 0) {
      CutClassA_branch->GetEntry(index);
    } else {
      printf("branch CutClassA_branch does not exist!\n");
      exit(1);
    }
    CutClassA_isLoaded = true;
  }
  return CutClassA_;
}

const float &hwwtree::CutClassB() {
  if (not CutClassB_isLoaded) {
    if (CutClassB_branch != 0) {
      CutClassB_branch->GetEntry(index);
    } else {
      printf("branch CutClassB_branch does not exist!\n");
      exit(1);
    }
    CutClassB_isLoaded = true;
  }
  return CutClassB_;
}

const float &hwwtree::CutRecoClassA() {
  if (not CutRecoClassA_isLoaded) {
    if (CutRecoClassA_branch != 0) {
      CutRecoClassA_branch->GetEntry(index);
    } else {
      printf("branch CutRecoClassA_branch does not exist!\n");
      exit(1);
    }
    CutRecoClassA_isLoaded = true;
  }
  return CutRecoClassA_;
}

const float &hwwtree::CutRecoClassB() {
  if (not CutRecoClassB_isLoaded) {
    if (CutRecoClassB_branch != 0) {
      CutRecoClassB_branch->GetEntry(index);
    } else {
      printf("branch CutRecoClassB_branch does not exist!\n");
      exit(1);
    }
    CutRecoClassB_isLoaded = true;
  }
  return CutRecoClassB_;
}

const float &hwwtree::wgt() {
  if (not wgt_isLoaded) {
    if (wgt_branch != 0) {
      wgt_branch->GetEntry(index);
    } else {
      printf("branch wgt_branch does not exist!\n");
      exit(1);
    }
    wgt_isLoaded = true;
  }
  return wgt_;
}

const int &hwwtree::wstar_channel_id() {
  if (not wstar_channel_id_isLoaded) {
    if (wstar_channel_id_branch != 0) {
      wstar_channel_id_branch->GetEntry(index);
    } else {
      printf("branch wstar_channel_id_branch does not exist!\n");
      exit(1);
    }
    wstar_channel_id_isLoaded = true;
  }
  return wstar_channel_id_;
}

const float &hwwtree::lepmetpt() {
  if (not lepmetpt_isLoaded) {
    if (lepmetpt_branch != 0) {
      lepmetpt_branch->GetEntry(index);
    } else {
      printf("branch lepmetpt_branch does not exist!\n");
      exit(1);
    }
    lepmetpt_isLoaded = true;
  }
  return lepmetpt_;
}

const float &hwwtree::ak8minusleppt() {
  if (not ak8minusleppt_isLoaded) {
    if (ak8minusleppt_branch != 0) {
      ak8minusleppt_branch->GetEntry(index);
    } else {
      printf("branch ak8minusleppt_branch does not exist!\n");
      exit(1);
    }
    ak8minusleppt_isLoaded = true;
  }
  return ak8minusleppt_;
}

const float &hwwtree::wlepptratio() {
  if (not wlepptratio_isLoaded) {
    if (wlepptratio_branch != 0) {
      wlepptratio_branch->GetEntry(index);
    } else {
      printf("branch wlepptratio_branch does not exist!\n");
      exit(1);
    }
    wlepptratio_isLoaded = true;
  }
  return wlepptratio_;
}

const float &hwwtree::whadptratio() {
  if (not whadptratio_isLoaded) {
    if (whadptratio_branch != 0) {
      whadptratio_branch->GetEntry(index);
    } else {
      printf("branch whadptratio_branch does not exist!\n");
      exit(1);
    }
    whadptratio_isLoaded = true;
  }
  return whadptratio_;
}

const float &hwwtree::wlepwhadptratiosum() {
  if (not wlepwhadptratiosum_isLoaded) {
    if (wlepwhadptratiosum_branch != 0) {
      wlepwhadptratiosum_branch->GetEntry(index);
    } else {
      printf("branch wlepwhadptratiosum_branch does not exist!\n");
      exit(1);
    }
    wlepwhadptratiosum_isLoaded = true;
  }
  return wlepwhadptratiosum_;
}

const float &hwwtree::wlepwhadptratiodiff() {
  if (not wlepwhadptratiodiff_isLoaded) {
    if (wlepwhadptratiodiff_branch != 0) {
      wlepwhadptratiodiff_branch->GetEntry(index);
    } else {
      printf("branch wlepwhadptratiodiff_branch does not exist!\n");
      exit(1);
    }
    wlepwhadptratiodiff_isLoaded = true;
  }
  return wlepwhadptratiodiff_;
}

const float &hwwtree::wlepwhadptratioratio() {
  if (not wlepwhadptratioratio_isLoaded) {
    if (wlepwhadptratioratio_branch != 0) {
      wlepwhadptratioratio_branch->GetEntry(index);
    } else {
      printf("branch wlepwhadptratioratio_branch does not exist!\n");
      exit(1);
    }
    wlepwhadptratioratio_isLoaded = true;
  }
  return wlepwhadptratioratio_;
}

const float &hwwtree::lep_customrelIso005EA() {
  if (not lep_customrelIso005EA_isLoaded) {
    if (lep_customrelIso005EA_branch != 0) {
      lep_customrelIso005EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso005EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso005EA_isLoaded = true;
  }
  return lep_customrelIso005EA_;
}

const float &hwwtree::lep_customrelIso010EA() {
  if (not lep_customrelIso010EA_isLoaded) {
    if (lep_customrelIso010EA_branch != 0) {
      lep_customrelIso010EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso010EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso010EA_isLoaded = true;
  }
  return lep_customrelIso010EA_;
}

const float &hwwtree::lep_customrelIso015EA() {
  if (not lep_customrelIso015EA_isLoaded) {
    if (lep_customrelIso015EA_branch != 0) {
      lep_customrelIso015EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso015EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso015EA_isLoaded = true;
  }
  return lep_customrelIso015EA_;
}

const float &hwwtree::lep_customrelIso020EA() {
  if (not lep_customrelIso020EA_isLoaded) {
    if (lep_customrelIso020EA_branch != 0) {
      lep_customrelIso020EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso020EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso020EA_isLoaded = true;
  }
  return lep_customrelIso020EA_;
}

const float &hwwtree::lep_customrelIso025EA() {
  if (not lep_customrelIso025EA_isLoaded) {
    if (lep_customrelIso025EA_branch != 0) {
      lep_customrelIso025EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso025EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso025EA_isLoaded = true;
  }
  return lep_customrelIso025EA_;
}

const float &hwwtree::lep_customrelIso030EA() {
  if (not lep_customrelIso030EA_isLoaded) {
    if (lep_customrelIso030EA_branch != 0) {
      lep_customrelIso030EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso030EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso030EA_isLoaded = true;
  }
  return lep_customrelIso030EA_;
}

const float &hwwtree::lep_customrelIso035EA() {
  if (not lep_customrelIso035EA_isLoaded) {
    if (lep_customrelIso035EA_branch != 0) {
      lep_customrelIso035EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso035EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso035EA_isLoaded = true;
  }
  return lep_customrelIso035EA_;
}

const float &hwwtree::lep_customrelIso040EA() {
  if (not lep_customrelIso040EA_isLoaded) {
    if (lep_customrelIso040EA_branch != 0) {
      lep_customrelIso040EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso040EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso040EA_isLoaded = true;
  }
  return lep_customrelIso040EA_;
}

const float &hwwtree::lep_customrelIso045EA() {
  if (not lep_customrelIso045EA_isLoaded) {
    if (lep_customrelIso045EA_branch != 0) {
      lep_customrelIso045EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso045EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso045EA_isLoaded = true;
  }
  return lep_customrelIso045EA_;
}

const float &hwwtree::lep_customrelIso050EA() {
  if (not lep_customrelIso050EA_isLoaded) {
    if (lep_customrelIso050EA_branch != 0) {
      lep_customrelIso050EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso050EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso050EA_isLoaded = true;
  }
  return lep_customrelIso050EA_;
}

const float &hwwtree::lep_customrelIso055EA() {
  if (not lep_customrelIso055EA_isLoaded) {
    if (lep_customrelIso055EA_branch != 0) {
      lep_customrelIso055EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso055EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso055EA_isLoaded = true;
  }
  return lep_customrelIso055EA_;
}

const float &hwwtree::lep_customrelIso060EA() {
  if (not lep_customrelIso060EA_isLoaded) {
    if (lep_customrelIso060EA_branch != 0) {
      lep_customrelIso060EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso060EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso060EA_isLoaded = true;
  }
  return lep_customrelIso060EA_;
}

const float &hwwtree::lep_customrelIso065EA() {
  if (not lep_customrelIso065EA_isLoaded) {
    if (lep_customrelIso065EA_branch != 0) {
      lep_customrelIso065EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso065EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso065EA_isLoaded = true;
  }
  return lep_customrelIso065EA_;
}

const float &hwwtree::lep_customrelIso070EA() {
  if (not lep_customrelIso070EA_isLoaded) {
    if (lep_customrelIso070EA_branch != 0) {
      lep_customrelIso070EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso070EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso070EA_isLoaded = true;
  }
  return lep_customrelIso070EA_;
}

const float &hwwtree::lep_customrelIso075EA() {
  if (not lep_customrelIso075EA_isLoaded) {
    if (lep_customrelIso075EA_branch != 0) {
      lep_customrelIso075EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso075EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso075EA_isLoaded = true;
  }
  return lep_customrelIso075EA_;
}

const float &hwwtree::lep_customrelIso080EA() {
  if (not lep_customrelIso080EA_isLoaded) {
    if (lep_customrelIso080EA_branch != 0) {
      lep_customrelIso080EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso080EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso080EA_isLoaded = true;
  }
  return lep_customrelIso080EA_;
}

const int &hwwtree::nb() {
  if (not nb_isLoaded) {
    if (nb_branch != 0) {
      nb_branch->GetEntry(index);
    } else {
      printf("branch nb_branch does not exist!\n");
      exit(1);
    }
    nb_isLoaded = true;
  }
  return nb_;
}

const int &hwwtree::nbmed() {
  if (not nbmed_isLoaded) {
    if (nbmed_branch != 0) {
      nbmed_branch->GetEntry(index);
    } else {
      printf("branch nbmed_branch does not exist!\n");
      exit(1);
    }
    nbmed_isLoaded = true;
  }
  return nbmed_;
}

const int &hwwtree::nbtight() {
  if (not nbtight_isLoaded) {
    if (nbtight_branch != 0) {
      nbtight_branch->GetEntry(index);
    } else {
      printf("branch nbtight_branch does not exist!\n");
      exit(1);
    }
    nbtight_isLoaded = true;
  }
  return nbtight_;
}

const int &hwwtree::nb30() {
  if (not nb30_isLoaded) {
    if (nb30_branch != 0) {
      nb30_branch->GetEntry(index);
    } else {
      printf("branch nb30_branch does not exist!\n");
      exit(1);
    }
    nb30_isLoaded = true;
  }
  return nb30_;
}

const int &hwwtree::nb30med() {
  if (not nb30med_isLoaded) {
    if (nb30med_branch != 0) {
      nb30med_branch->GetEntry(index);
    } else {
      printf("branch nb30med_branch does not exist!\n");
      exit(1);
    }
    nb30med_isLoaded = true;
  }
  return nb30med_;
}

const int &hwwtree::nb30tight() {
  if (not nb30tight_isLoaded) {
    if (nb30tight_branch != 0) {
      nb30tight_branch->GetEntry(index);
    } else {
      printf("branch nb30tight_branch does not exist!\n");
      exit(1);
    }
    nb30tight_isLoaded = true;
  }
  return nb30tight_;
}

const int &hwwtree::nb40() {
  if (not nb40_isLoaded) {
    if (nb40_branch != 0) {
      nb40_branch->GetEntry(index);
    } else {
      printf("branch nb40_branch does not exist!\n");
      exit(1);
    }
    nb40_isLoaded = true;
  }
  return nb40_;
}

const int &hwwtree::nb40med() {
  if (not nb40med_isLoaded) {
    if (nb40med_branch != 0) {
      nb40med_branch->GetEntry(index);
    } else {
      printf("branch nb40med_branch does not exist!\n");
      exit(1);
    }
    nb40med_isLoaded = true;
  }
  return nb40med_;
}

const int &hwwtree::nb40tight() {
  if (not nb40tight_isLoaded) {
    if (nb40tight_branch != 0) {
      nb40tight_branch->GetEntry(index);
    } else {
      printf("branch nb40tight_branch does not exist!\n");
      exit(1);
    }
    nb40tight_isLoaded = true;
  }
  return nb40tight_;
}

const int &hwwtree::nb50() {
  if (not nb50_isLoaded) {
    if (nb50_branch != 0) {
      nb50_branch->GetEntry(index);
    } else {
      printf("branch nb50_branch does not exist!\n");
      exit(1);
    }
    nb50_isLoaded = true;
  }
  return nb50_;
}

const int &hwwtree::nb50med() {
  if (not nb50med_isLoaded) {
    if (nb50med_branch != 0) {
      nb50med_branch->GetEntry(index);
    } else {
      printf("branch nb50med_branch does not exist!\n");
      exit(1);
    }
    nb50med_isLoaded = true;
  }
  return nb50med_;
}

const int &hwwtree::nb50tight() {
  if (not nb50tight_isLoaded) {
    if (nb50tight_branch != 0) {
      nb50tight_branch->GetEntry(index);
    } else {
      printf("branch nb50tight_branch does not exist!\n");
      exit(1);
    }
    nb50tight_isLoaded = true;
  }
  return nb50tight_;
}

const int &hwwtree::nbOR() {
  if (not nbOR_isLoaded) {
    if (nbOR_branch != 0) {
      nbOR_branch->GetEntry(index);
    } else {
      printf("branch nbOR_branch does not exist!\n");
      exit(1);
    }
    nbOR_isLoaded = true;
  }
  return nbOR_;
}

const int &hwwtree::nbORmed() {
  if (not nbORmed_isLoaded) {
    if (nbORmed_branch != 0) {
      nbORmed_branch->GetEntry(index);
    } else {
      printf("branch nbORmed_branch does not exist!\n");
      exit(1);
    }
    nbORmed_isLoaded = true;
  }
  return nbORmed_;
}

const int &hwwtree::nbORtight() {
  if (not nbORtight_isLoaded) {
    if (nbORtight_branch != 0) {
      nbORtight_branch->GetEntry(index);
    } else {
      printf("branch nbORtight_branch does not exist!\n");
      exit(1);
    }
    nbORtight_isLoaded = true;
  }
  return nbORtight_;
}

const int &hwwtree::nbOR30() {
  if (not nbOR30_isLoaded) {
    if (nbOR30_branch != 0) {
      nbOR30_branch->GetEntry(index);
    } else {
      printf("branch nbOR30_branch does not exist!\n");
      exit(1);
    }
    nbOR30_isLoaded = true;
  }
  return nbOR30_;
}

const int &hwwtree::nbOR30med() {
  if (not nbOR30med_isLoaded) {
    if (nbOR30med_branch != 0) {
      nbOR30med_branch->GetEntry(index);
    } else {
      printf("branch nbOR30med_branch does not exist!\n");
      exit(1);
    }
    nbOR30med_isLoaded = true;
  }
  return nbOR30med_;
}

const int &hwwtree::nbOR30tight() {
  if (not nbOR30tight_isLoaded) {
    if (nbOR30tight_branch != 0) {
      nbOR30tight_branch->GetEntry(index);
    } else {
      printf("branch nbOR30tight_branch does not exist!\n");
      exit(1);
    }
    nbOR30tight_isLoaded = true;
  }
  return nbOR30tight_;
}

const int &hwwtree::nbOR40() {
  if (not nbOR40_isLoaded) {
    if (nbOR40_branch != 0) {
      nbOR40_branch->GetEntry(index);
    } else {
      printf("branch nbOR40_branch does not exist!\n");
      exit(1);
    }
    nbOR40_isLoaded = true;
  }
  return nbOR40_;
}

const int &hwwtree::nbOR40med() {
  if (not nbOR40med_isLoaded) {
    if (nbOR40med_branch != 0) {
      nbOR40med_branch->GetEntry(index);
    } else {
      printf("branch nbOR40med_branch does not exist!\n");
      exit(1);
    }
    nbOR40med_isLoaded = true;
  }
  return nbOR40med_;
}

const int &hwwtree::nbOR40tight() {
  if (not nbOR40tight_isLoaded) {
    if (nbOR40tight_branch != 0) {
      nbOR40tight_branch->GetEntry(index);
    } else {
      printf("branch nbOR40tight_branch does not exist!\n");
      exit(1);
    }
    nbOR40tight_isLoaded = true;
  }
  return nbOR40tight_;
}

const int &hwwtree::nbOR50() {
  if (not nbOR50_isLoaded) {
    if (nbOR50_branch != 0) {
      nbOR50_branch->GetEntry(index);
    } else {
      printf("branch nbOR50_branch does not exist!\n");
      exit(1);
    }
    nbOR50_isLoaded = true;
  }
  return nbOR50_;
}

const int &hwwtree::nbOR50med() {
  if (not nbOR50med_isLoaded) {
    if (nbOR50med_branch != 0) {
      nbOR50med_branch->GetEntry(index);
    } else {
      printf("branch nbOR50med_branch does not exist!\n");
      exit(1);
    }
    nbOR50med_isLoaded = true;
  }
  return nbOR50med_;
}

const int &hwwtree::nbOR50tight() {
  if (not nbOR50tight_isLoaded) {
    if (nbOR50tight_branch != 0) {
      nbOR50tight_branch->GetEntry(index);
    } else {
      printf("branch nbOR50tight_branch does not exist!\n");
      exit(1);
    }
    nbOR50tight_isLoaded = true;
  }
  return nbOR50tight_;
}

const int &hwwtree::nrecolep() {
  if (not nrecolep_isLoaded) {
    if (nrecolep_branch != 0) {
      nrecolep_branch->GetEntry(index);
    } else {
      printf("branch nrecolep_branch does not exist!\n");
      exit(1);
    }
    nrecolep_isLoaded = true;
  }
  return nrecolep_;
}

const int &hwwtree::nak8jets() {
  if (not nak8jets_isLoaded) {
    if (nak8jets_branch != 0) {
      nak8jets_branch->GetEntry(index);
    } else {
      printf("branch nak8jets_branch does not exist!\n");
      exit(1);
    }
    nak8jets_isLoaded = true;
  }
  return nak8jets_;
}

const int &hwwtree::nj() {
  if (not nj_isLoaded) {
    if (nj_branch != 0) {
      nj_branch->GetEntry(index);
    } else {
      printf("branch nj_branch does not exist!\n");
      exit(1);
    }
    nj_isLoaded = true;
  }
  return nj_;
}

const int &hwwtree::nj50() {
  if (not nj50_isLoaded) {
    if (nj50_branch != 0) {
      nj50_branch->GetEntry(index);
    } else {
      printf("branch nj50_branch does not exist!\n");
      exit(1);
    }
    nj50_isLoaded = true;
  }
  return nj50_;
}

const float &hwwtree::recowhad_puppi_mass() {
  if (not recowhad_puppi_mass_isLoaded) {
    if (recowhad_puppi_mass_branch != 0) {
      recowhad_puppi_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_mass_isLoaded = true;
  }
  return recowhad_puppi_mass_;
}

const float &hwwtree::recowhad_mass() {
  if (not recowhad_mass_isLoaded) {
    if (recowhad_mass_branch != 0) {
      recowhad_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_mass_isLoaded = true;
  }
  return recowhad_mass_;
}

const float &hwwtree::recowhad_puppi_nJettinessTau1() {
  if (not recowhad_puppi_nJettinessTau1_isLoaded) {
    if (recowhad_puppi_nJettinessTau1_branch != 0) {
      recowhad_puppi_nJettinessTau1_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_nJettinessTau1_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_nJettinessTau1_isLoaded = true;
  }
  return recowhad_puppi_nJettinessTau1_;
}

const float &hwwtree::recowhad_nJettinessTau1() {
  if (not recowhad_nJettinessTau1_isLoaded) {
    if (recowhad_nJettinessTau1_branch != 0) {
      recowhad_nJettinessTau1_branch->GetEntry(index);
    } else {
      printf("branch recowhad_nJettinessTau1_branch does not exist!\n");
      exit(1);
    }
    recowhad_nJettinessTau1_isLoaded = true;
  }
  return recowhad_nJettinessTau1_;
}

const float &hwwtree::recowhad_puppi_nJettinessTau2() {
  if (not recowhad_puppi_nJettinessTau2_isLoaded) {
    if (recowhad_puppi_nJettinessTau2_branch != 0) {
      recowhad_puppi_nJettinessTau2_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_nJettinessTau2_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_nJettinessTau2_isLoaded = true;
  }
  return recowhad_puppi_nJettinessTau2_;
}

const float &hwwtree::recowhad_nJettinessTau2() {
  if (not recowhad_nJettinessTau2_isLoaded) {
    if (recowhad_nJettinessTau2_branch != 0) {
      recowhad_nJettinessTau2_branch->GetEntry(index);
    } else {
      printf("branch recowhad_nJettinessTau2_branch does not exist!\n");
      exit(1);
    }
    recowhad_nJettinessTau2_isLoaded = true;
  }
  return recowhad_nJettinessTau2_;
}

const float &hwwtree::recowhad_puppi_nJettinessTauRatio() {
  if (not recowhad_puppi_nJettinessTauRatio_isLoaded) {
    if (recowhad_puppi_nJettinessTauRatio_branch != 0) {
      recowhad_puppi_nJettinessTauRatio_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_nJettinessTauRatio_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_nJettinessTauRatio_isLoaded = true;
  }
  return recowhad_puppi_nJettinessTauRatio_;
}

const float &hwwtree::recowhad_nJettinessTauRatio() {
  if (not recowhad_nJettinessTauRatio_isLoaded) {
    if (recowhad_nJettinessTauRatio_branch != 0) {
      recowhad_nJettinessTauRatio_branch->GetEntry(index);
    } else {
      printf("branch recowhad_nJettinessTauRatio_branch does not exist!\n");
      exit(1);
    }
    recowhad_nJettinessTauRatio_isLoaded = true;
  }
  return recowhad_nJettinessTauRatio_;
}

const float &hwwtree::recohiggs_mass() {
  if (not recohiggs_mass_isLoaded) {
    if (recohiggs_mass_branch != 0) {
      recohiggs_mass_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_mass_branch does not exist!\n");
      exit(1);
    }
    recohiggs_mass_isLoaded = true;
  }
  return recohiggs_mass_;
}

const float &hwwtree::recohiggs2_mass() {
  if (not recohiggs2_mass_isLoaded) {
    if (recohiggs2_mass_branch != 0) {
      recohiggs2_mass_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_mass_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_mass_isLoaded = true;
  }
  return recohiggs2_mass_;
}

const float &hwwtree::recohiggs_min() {
  if (not recohiggs_min_isLoaded) {
    if (recohiggs_min_branch != 0) {
      recohiggs_min_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_min_branch does not exist!\n");
      exit(1);
    }
    recohiggs_min_isLoaded = true;
  }
  return recohiggs_min_;
}

const float &hwwtree::recohiggs_max() {
  if (not recohiggs_max_isLoaded) {
    if (recohiggs_max_branch != 0) {
      recohiggs_max_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_max_branch does not exist!\n");
      exit(1);
    }
    recohiggs_max_isLoaded = true;
  }
  return recohiggs_max_;
}

const float &hwwtree::recowhad_mlep_puppi_mass() {
  if (not recowhad_mlep_puppi_mass_isLoaded) {
    if (recowhad_mlep_puppi_mass_branch != 0) {
      recowhad_mlep_puppi_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_mlep_puppi_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_mlep_puppi_mass_isLoaded = true;
  }
  return recowhad_mlep_puppi_mass_;
}

const float &hwwtree::recowhad_mlep_mass() {
  if (not recowhad_mlep_mass_isLoaded) {
    if (recowhad_mlep_mass_branch != 0) {
      recowhad_mlep_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_mlep_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_mlep_mass_isLoaded = true;
  }
  return recowhad_mlep_mass_;
}

const float &hwwtree::recowhad_plep_puppi_mass() {
  if (not recowhad_plep_puppi_mass_isLoaded) {
    if (recowhad_plep_puppi_mass_branch != 0) {
      recowhad_plep_puppi_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_plep_puppi_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_plep_puppi_mass_isLoaded = true;
  }
  return recowhad_plep_puppi_mass_;
}

const float &hwwtree::recowhad_plep_mass() {
  if (not recowhad_plep_mass_isLoaded) {
    if (recowhad_plep_mass_branch != 0) {
      recowhad_plep_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_plep_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_plep_mass_isLoaded = true;
  }
  return recowhad_plep_mass_;
}

const float &hwwtree::pf_annuli_energy_0() {
  if (not pf_annuli_energy_0_isLoaded) {
    if (pf_annuli_energy_0_branch != 0) {
      pf_annuli_energy_0_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_0_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_0_isLoaded = true;
  }
  return pf_annuli_energy_0_;
}

const float &hwwtree::pf_annuli_energy_1() {
  if (not pf_annuli_energy_1_isLoaded) {
    if (pf_annuli_energy_1_branch != 0) {
      pf_annuli_energy_1_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_1_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_1_isLoaded = true;
  }
  return pf_annuli_energy_1_;
}

const float &hwwtree::pf_annuli_energy_2() {
  if (not pf_annuli_energy_2_isLoaded) {
    if (pf_annuli_energy_2_branch != 0) {
      pf_annuli_energy_2_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_2_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_2_isLoaded = true;
  }
  return pf_annuli_energy_2_;
}

const float &hwwtree::pf_annuli_energy_3() {
  if (not pf_annuli_energy_3_isLoaded) {
    if (pf_annuli_energy_3_branch != 0) {
      pf_annuli_energy_3_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_3_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_3_isLoaded = true;
  }
  return pf_annuli_energy_3_;
}

const float &hwwtree::pf_annuli_energy_4() {
  if (not pf_annuli_energy_4_isLoaded) {
    if (pf_annuli_energy_4_branch != 0) {
      pf_annuli_energy_4_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_4_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_4_isLoaded = true;
  }
  return pf_annuli_energy_4_;
}

const float &hwwtree::pf_annuli_energy_5() {
  if (not pf_annuli_energy_5_isLoaded) {
    if (pf_annuli_energy_5_branch != 0) {
      pf_annuli_energy_5_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_5_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_5_isLoaded = true;
  }
  return pf_annuli_energy_5_;
}

const float &hwwtree::pf_annuli_energy_6() {
  if (not pf_annuli_energy_6_isLoaded) {
    if (pf_annuli_energy_6_branch != 0) {
      pf_annuli_energy_6_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_6_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_6_isLoaded = true;
  }
  return pf_annuli_energy_6_;
}

const float &hwwtree::pf_annuli_energy_7() {
  if (not pf_annuli_energy_7_isLoaded) {
    if (pf_annuli_energy_7_branch != 0) {
      pf_annuli_energy_7_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_7_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_7_isLoaded = true;
  }
  return pf_annuli_energy_7_;
}

const float &hwwtree::lep_miniIsoEA() {
  if (not lep_miniIsoEA_isLoaded) {
    if (lep_miniIsoEA_branch != 0) {
      lep_miniIsoEA_branch->GetEntry(index);
    } else {
      printf("branch lep_miniIsoEA_branch does not exist!\n");
      exit(1);
    }
    lep_miniIsoEA_isLoaded = true;
  }
  return lep_miniIsoEA_;
}

const float &hwwtree::lep_relIso04DB() {
  if (not lep_relIso04DB_isLoaded) {
    if (lep_relIso04DB_branch != 0) {
      lep_relIso04DB_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04DB_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04DB_isLoaded = true;
  }
  return lep_relIso04DB_;
}

const float &hwwtree::lep_relIso03EA() {
  if (not lep_relIso03EA_isLoaded) {
    if (lep_relIso03EA_branch != 0) {
      lep_relIso03EA_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EA_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EA_isLoaded = true;
  }
  return lep_relIso03EA_;
}

const float &hwwtree::recolepton_recowhad_dr() {
  if (not recolepton_recowhad_dr_isLoaded) {
    if (recolepton_recowhad_dr_branch != 0) {
      recolepton_recowhad_dr_branch->GetEntry(index);
    } else {
      printf("branch recolepton_recowhad_dr_branch does not exist!\n");
      exit(1);
    }
    recolepton_recowhad_dr_isLoaded = true;
  }
  return recolepton_recowhad_dr_;
}

const float &hwwtree::recolepton_recowhad_mlep_dr() {
  if (not recolepton_recowhad_mlep_dr_isLoaded) {
    if (recolepton_recowhad_mlep_dr_branch != 0) {
      recolepton_recowhad_mlep_dr_branch->GetEntry(index);
    } else {
      printf("branch recolepton_recowhad_mlep_dr_branch does not exist!\n");
      exit(1);
    }
    recolepton_recowhad_mlep_dr_isLoaded = true;
  }
  return recolepton_recowhad_mlep_dr_;
}

const float &hwwtree::recolepton_pt() {
  if (not recolepton_pt_isLoaded) {
    if (recolepton_pt_branch != 0) {
      recolepton_pt_branch->GetEntry(index);
    } else {
      printf("branch recolepton_pt_branch does not exist!\n");
      exit(1);
    }
    recolepton_pt_isLoaded = true;
  }
  return recolepton_pt_;
}

const float &hwwtree::met_pt() {
  if (not met_pt_isLoaded) {
    if (met_pt_branch != 0) {
      met_pt_branch->GetEntry(index);
    } else {
      printf("branch met_pt_branch does not exist!\n");
      exit(1);
    }
    met_pt_isLoaded = true;
  }
  return met_pt_;
}

const float &hwwtree::recowhad_pt() {
  if (not recowhad_pt_isLoaded) {
    if (recowhad_pt_branch != 0) {
      recowhad_pt_branch->GetEntry(index);
    } else {
      printf("branch recowhad_pt_branch does not exist!\n");
      exit(1);
    }
    recowhad_pt_isLoaded = true;
  }
  return recowhad_pt_;
}

const float &hwwtree::recowhad_puppi_pt() {
  if (not recowhad_puppi_pt_isLoaded) {
    if (recowhad_puppi_pt_branch != 0) {
      recowhad_puppi_pt_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_pt_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_pt_isLoaded = true;
  }
  return recowhad_puppi_pt_;
}

const float &hwwtree::recolepton_met_dphi() {
  if (not recolepton_met_dphi_isLoaded) {
    if (recolepton_met_dphi_branch != 0) {
      recolepton_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch recolepton_met_dphi_branch does not exist!\n");
      exit(1);
    }
    recolepton_met_dphi_isLoaded = true;
  }
  return recolepton_met_dphi_;
}

const float &hwwtree::recoisrmegajet_pt() {
  if (not recoisrmegajet_pt_isLoaded) {
    if (recoisrmegajet_pt_branch != 0) {
      recoisrmegajet_pt_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_pt_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_pt_isLoaded = true;
  }
  return recoisrmegajet_pt_;
}

const float &hwwtree::recoisrbalance() {
  if (not recoisrbalance_isLoaded) {
    if (recoisrbalance_branch != 0) {
      recoisrbalance_branch->GetEntry(index);
    } else {
      printf("branch recoisrbalance_branch does not exist!\n");
      exit(1);
    }
    recoisrbalance_isLoaded = true;
  }
  return recoisrbalance_;
}

const TString &hwwtree::CMS4path() {
  if (not CMS4path_isLoaded) {
    if (CMS4path_branch != 0) {
      CMS4path_branch->GetEntry(index);
    } else {
      printf("branch CMS4path_branch does not exist!\n");
      exit(1);
    }
    CMS4path_isLoaded = true;
  }
  return *CMS4path_;
}

const int &hwwtree::CMS4index() {
  if (not CMS4index_isLoaded) {
    if (CMS4index_branch != 0) {
      CMS4index_branch->GetEntry(index);
    } else {
      printf("branch CMS4index_branch does not exist!\n");
      exit(1);
    }
    CMS4index_isLoaded = true;
  }
  return CMS4index_;
}

const int &hwwtree::run() {
  if (not run_isLoaded) {
    if (run_branch != 0) {
      run_branch->GetEntry(index);
    } else {
      printf("branch run_branch does not exist!\n");
      exit(1);
    }
    run_isLoaded = true;
  }
  return run_;
}

const int &hwwtree::lumi() {
  if (not lumi_isLoaded) {
    if (lumi_branch != 0) {
      lumi_branch->GetEntry(index);
    } else {
      printf("branch lumi_branch does not exist!\n");
      exit(1);
    }
    lumi_isLoaded = true;
  }
  return lumi_;
}

const unsigned long long &hwwtree::evt() {
  if (not evt_isLoaded) {
    if (evt_branch != 0) {
      evt_branch->GetEntry(index);
    } else {
      printf("branch evt_branch does not exist!\n");
      exit(1);
    }
    evt_isLoaded = true;
  }
  return evt_;
}

const float &hwwtree::bdt_recoclassA() {
  if (not bdt_recoclassA_isLoaded) {
    if (bdt_recoclassA_branch != 0) {
      bdt_recoclassA_branch->GetEntry(index);
    } else {
      printf("branch bdt_recoclassA_branch does not exist!\n");
      exit(1);
    }
    bdt_recoclassA_isLoaded = true;
  }
  return bdt_recoclassA_;
}

const float &hwwtree::bdt_recoclassB() {
  if (not bdt_recoclassB_isLoaded) {
    if (bdt_recoclassB_branch != 0) {
      bdt_recoclassB_branch->GetEntry(index);
    } else {
      printf("branch bdt_recoclassB_branch does not exist!\n");
      exit(1);
    }
    bdt_recoclassB_isLoaded = true;
  }
  return bdt_recoclassB_;
}

const float &hwwtree::lqq_max_dr() {
  if (not lqq_max_dr_isLoaded) {
    if (lqq_max_dr_branch != 0) {
      lqq_max_dr_branch->GetEntry(index);
    } else {
      printf("branch lqq_max_dr_branch does not exist!\n");
      exit(1);
    }
    lqq_max_dr_isLoaded = true;
  }
  return lqq_max_dr_;
}

const float &hwwtree::lq0_dr() {
  if (not lq0_dr_isLoaded) {
    if (lq0_dr_branch != 0) {
      lq0_dr_branch->GetEntry(index);
    } else {
      printf("branch lq0_dr_branch does not exist!\n");
      exit(1);
    }
    lq0_dr_isLoaded = true;
  }
  return lq0_dr_;
}

const float &hwwtree::lq1_dr() {
  if (not lq1_dr_isLoaded) {
    if (lq1_dr_branch != 0) {
      lq1_dr_branch->GetEntry(index);
    } else {
      printf("branch lq1_dr_branch does not exist!\n");
      exit(1);
    }
    lq1_dr_isLoaded = true;
  }
  return lq1_dr_;
}

const float &hwwtree::qq_dr() {
  if (not qq_dr_isLoaded) {
    if (qq_dr_branch != 0) {
      qq_dr_branch->GetEntry(index);
    } else {
      printf("branch qq_dr_branch does not exist!\n");
      exit(1);
    }
    qq_dr_isLoaded = true;
  }
  return qq_dr_;
}

const float &hwwtree::decay_dr() {
  if (not decay_dr_isLoaded) {
    if (decay_dr_branch != 0) {
      decay_dr_branch->GetEntry(index);
    } else {
      printf("branch decay_dr_branch does not exist!\n");
      exit(1);
    }
    decay_dr_isLoaded = true;
  }
  return decay_dr_;
}

const float &hwwtree::l_qq_dr() {
  if (not l_qq_dr_isLoaded) {
    if (l_qq_dr_branch != 0) {
      l_qq_dr_branch->GetEntry(index);
    } else {
      printf("branch l_qq_dr_branch does not exist!\n");
      exit(1);
    }
    l_qq_dr_isLoaded = true;
  }
  return l_qq_dr_;
}

const float &hwwtree::lqq_mass() {
  if (not lqq_mass_isLoaded) {
    if (lqq_mass_branch != 0) {
      lqq_mass_branch->GetEntry(index);
    } else {
      printf("branch lqq_mass_branch does not exist!\n");
      exit(1);
    }
    lqq_mass_isLoaded = true;
  }
  return lqq_mass_;
}

const float &hwwtree::lvqq_mt() {
  if (not lvqq_mt_isLoaded) {
    if (lvqq_mt_branch != 0) {
      lvqq_mt_branch->GetEntry(index);
    } else {
      printf("branch lvqq_mt_branch does not exist!\n");
      exit(1);
    }
    lvqq_mt_isLoaded = true;
  }
  return lvqq_mt_;
}

const int &hwwtree::higgsdecay() {
  if (not higgsdecay_isLoaded) {
    if (higgsdecay_branch != 0) {
      higgsdecay_branch->GetEntry(index);
    } else {
      printf("branch higgsdecay_branch does not exist!\n");
      exit(1);
    }
    higgsdecay_isLoaded = true;
  }
  return higgsdecay_;
}

const int &hwwtree::nlep() {
  if (not nlep_isLoaded) {
    if (nlep_branch != 0) {
      nlep_branch->GetEntry(index);
    } else {
      printf("branch nlep_branch does not exist!\n");
      exit(1);
    }
    nlep_isLoaded = true;
  }
  return nlep_;
}

const int &hwwtree::nquark() {
  if (not nquark_isLoaded) {
    if (nquark_branch != 0) {
      nquark_branch->GetEntry(index);
    } else {
      printf("branch nquark_branch does not exist!\n");
      exit(1);
    }
    nquark_isLoaded = true;
  }
  return nquark_;
}

const int &hwwtree::wa_id() {
  if (not wa_id_isLoaded) {
    if (wa_id_branch != 0) {
      wa_id_branch->GetEntry(index);
    } else {
      printf("branch wa_id_branch does not exist!\n");
      exit(1);
    }
    wa_id_isLoaded = true;
  }
  return wa_id_;
}

const float &hwwtree::isr_pt() {
  if (not isr_pt_isLoaded) {
    if (isr_pt_branch != 0) {
      isr_pt_branch->GetEntry(index);
    } else {
      printf("branch isr_pt_branch does not exist!\n");
      exit(1);
    }
    isr_pt_isLoaded = true;
  }
  return isr_pt_;
}

const float &hwwtree::isr_eta() {
  if (not isr_eta_isLoaded) {
    if (isr_eta_branch != 0) {
      isr_eta_branch->GetEntry(index);
    } else {
      printf("branch isr_eta_branch does not exist!\n");
      exit(1);
    }
    isr_eta_isLoaded = true;
  }
  return isr_eta_;
}

const float &hwwtree::isr_phi() {
  if (not isr_phi_isLoaded) {
    if (isr_phi_branch != 0) {
      isr_phi_branch->GetEntry(index);
    } else {
      printf("branch isr_phi_branch does not exist!\n");
      exit(1);
    }
    isr_phi_isLoaded = true;
  }
  return isr_phi_;
}

const float &hwwtree::higgs_pt() {
  if (not higgs_pt_isLoaded) {
    if (higgs_pt_branch != 0) {
      higgs_pt_branch->GetEntry(index);
    } else {
      printf("branch higgs_pt_branch does not exist!\n");
      exit(1);
    }
    higgs_pt_isLoaded = true;
  }
  return higgs_pt_;
}

const float &hwwtree::higgs_eta() {
  if (not higgs_eta_isLoaded) {
    if (higgs_eta_branch != 0) {
      higgs_eta_branch->GetEntry(index);
    } else {
      printf("branch higgs_eta_branch does not exist!\n");
      exit(1);
    }
    higgs_eta_isLoaded = true;
  }
  return higgs_eta_;
}

const float &hwwtree::higgs_phi() {
  if (not higgs_phi_isLoaded) {
    if (higgs_phi_branch != 0) {
      higgs_phi_branch->GetEntry(index);
    } else {
      printf("branch higgs_phi_branch does not exist!\n");
      exit(1);
    }
    higgs_phi_isLoaded = true;
  }
  return higgs_phi_;
}

const float &hwwtree::decay0_pt() {
  if (not decay0_pt_isLoaded) {
    if (decay0_pt_branch != 0) {
      decay0_pt_branch->GetEntry(index);
    } else {
      printf("branch decay0_pt_branch does not exist!\n");
      exit(1);
    }
    decay0_pt_isLoaded = true;
  }
  return decay0_pt_;
}

const float &hwwtree::decay0_eta() {
  if (not decay0_eta_isLoaded) {
    if (decay0_eta_branch != 0) {
      decay0_eta_branch->GetEntry(index);
    } else {
      printf("branch decay0_eta_branch does not exist!\n");
      exit(1);
    }
    decay0_eta_isLoaded = true;
  }
  return decay0_eta_;
}

const float &hwwtree::decay0_phi() {
  if (not decay0_phi_isLoaded) {
    if (decay0_phi_branch != 0) {
      decay0_phi_branch->GetEntry(index);
    } else {
      printf("branch decay0_phi_branch does not exist!\n");
      exit(1);
    }
    decay0_phi_isLoaded = true;
  }
  return decay0_phi_;
}

const float &hwwtree::decay0_mass() {
  if (not decay0_mass_isLoaded) {
    if (decay0_mass_branch != 0) {
      decay0_mass_branch->GetEntry(index);
    } else {
      printf("branch decay0_mass_branch does not exist!\n");
      exit(1);
    }
    decay0_mass_isLoaded = true;
  }
  return decay0_mass_;
}

const int &hwwtree::decay0_id() {
  if (not decay0_id_isLoaded) {
    if (decay0_id_branch != 0) {
      decay0_id_branch->GetEntry(index);
    } else {
      printf("branch decay0_id_branch does not exist!\n");
      exit(1);
    }
    decay0_id_isLoaded = true;
  }
  return decay0_id_;
}

const int &hwwtree::decay0_isstar() {
  if (not decay0_isstar_isLoaded) {
    if (decay0_isstar_branch != 0) {
      decay0_isstar_branch->GetEntry(index);
    } else {
      printf("branch decay0_isstar_branch does not exist!\n");
      exit(1);
    }
    decay0_isstar_isLoaded = true;
  }
  return decay0_isstar_;
}

const float &hwwtree::decay1_pt() {
  if (not decay1_pt_isLoaded) {
    if (decay1_pt_branch != 0) {
      decay1_pt_branch->GetEntry(index);
    } else {
      printf("branch decay1_pt_branch does not exist!\n");
      exit(1);
    }
    decay1_pt_isLoaded = true;
  }
  return decay1_pt_;
}

const float &hwwtree::decay1_eta() {
  if (not decay1_eta_isLoaded) {
    if (decay1_eta_branch != 0) {
      decay1_eta_branch->GetEntry(index);
    } else {
      printf("branch decay1_eta_branch does not exist!\n");
      exit(1);
    }
    decay1_eta_isLoaded = true;
  }
  return decay1_eta_;
}

const float &hwwtree::decay1_phi() {
  if (not decay1_phi_isLoaded) {
    if (decay1_phi_branch != 0) {
      decay1_phi_branch->GetEntry(index);
    } else {
      printf("branch decay1_phi_branch does not exist!\n");
      exit(1);
    }
    decay1_phi_isLoaded = true;
  }
  return decay1_phi_;
}

const float &hwwtree::decay1_mass() {
  if (not decay1_mass_isLoaded) {
    if (decay1_mass_branch != 0) {
      decay1_mass_branch->GetEntry(index);
    } else {
      printf("branch decay1_mass_branch does not exist!\n");
      exit(1);
    }
    decay1_mass_isLoaded = true;
  }
  return decay1_mass_;
}

const int &hwwtree::decay1_id() {
  if (not decay1_id_isLoaded) {
    if (decay1_id_branch != 0) {
      decay1_id_branch->GetEntry(index);
    } else {
      printf("branch decay1_id_branch does not exist!\n");
      exit(1);
    }
    decay1_id_isLoaded = true;
  }
  return decay1_id_;
}

const int &hwwtree::decay1_isstar() {
  if (not decay1_isstar_isLoaded) {
    if (decay1_isstar_branch != 0) {
      decay1_isstar_branch->GetEntry(index);
    } else {
      printf("branch decay1_isstar_branch does not exist!\n");
      exit(1);
    }
    decay1_isstar_isLoaded = true;
  }
  return decay1_isstar_;
}

const float &hwwtree::lepton_pt() {
  if (not lepton_pt_isLoaded) {
    if (lepton_pt_branch != 0) {
      lepton_pt_branch->GetEntry(index);
    } else {
      printf("branch lepton_pt_branch does not exist!\n");
      exit(1);
    }
    lepton_pt_isLoaded = true;
  }
  return lepton_pt_;
}

const float &hwwtree::lepton_eta() {
  if (not lepton_eta_isLoaded) {
    if (lepton_eta_branch != 0) {
      lepton_eta_branch->GetEntry(index);
    } else {
      printf("branch lepton_eta_branch does not exist!\n");
      exit(1);
    }
    lepton_eta_isLoaded = true;
  }
  return lepton_eta_;
}

const float &hwwtree::lepton_phi() {
  if (not lepton_phi_isLoaded) {
    if (lepton_phi_branch != 0) {
      lepton_phi_branch->GetEntry(index);
    } else {
      printf("branch lepton_phi_branch does not exist!\n");
      exit(1);
    }
    lepton_phi_isLoaded = true;
  }
  return lepton_phi_;
}

const float &hwwtree::lepton_mass() {
  if (not lepton_mass_isLoaded) {
    if (lepton_mass_branch != 0) {
      lepton_mass_branch->GetEntry(index);
    } else {
      printf("branch lepton_mass_branch does not exist!\n");
      exit(1);
    }
    lepton_mass_isLoaded = true;
  }
  return lepton_mass_;
}

const int &hwwtree::lepton_id() {
  if (not lepton_id_isLoaded) {
    if (lepton_id_branch != 0) {
      lepton_id_branch->GetEntry(index);
    } else {
      printf("branch lepton_id_branch does not exist!\n");
      exit(1);
    }
    lepton_id_isLoaded = true;
  }
  return lepton_id_;
}

const int &hwwtree::lepton_isstar() {
  if (not lepton_isstar_isLoaded) {
    if (lepton_isstar_branch != 0) {
      lepton_isstar_branch->GetEntry(index);
    } else {
      printf("branch lepton_isstar_branch does not exist!\n");
      exit(1);
    }
    lepton_isstar_isLoaded = true;
  }
  return lepton_isstar_;
}

const float &hwwtree::neutrino_pt() {
  if (not neutrino_pt_isLoaded) {
    if (neutrino_pt_branch != 0) {
      neutrino_pt_branch->GetEntry(index);
    } else {
      printf("branch neutrino_pt_branch does not exist!\n");
      exit(1);
    }
    neutrino_pt_isLoaded = true;
  }
  return neutrino_pt_;
}

const float &hwwtree::neutrino_eta() {
  if (not neutrino_eta_isLoaded) {
    if (neutrino_eta_branch != 0) {
      neutrino_eta_branch->GetEntry(index);
    } else {
      printf("branch neutrino_eta_branch does not exist!\n");
      exit(1);
    }
    neutrino_eta_isLoaded = true;
  }
  return neutrino_eta_;
}

const float &hwwtree::neutrino_phi() {
  if (not neutrino_phi_isLoaded) {
    if (neutrino_phi_branch != 0) {
      neutrino_phi_branch->GetEntry(index);
    } else {
      printf("branch neutrino_phi_branch does not exist!\n");
      exit(1);
    }
    neutrino_phi_isLoaded = true;
  }
  return neutrino_phi_;
}

const float &hwwtree::neutrino_mass() {
  if (not neutrino_mass_isLoaded) {
    if (neutrino_mass_branch != 0) {
      neutrino_mass_branch->GetEntry(index);
    } else {
      printf("branch neutrino_mass_branch does not exist!\n");
      exit(1);
    }
    neutrino_mass_isLoaded = true;
  }
  return neutrino_mass_;
}

const int &hwwtree::neutrino_id() {
  if (not neutrino_id_isLoaded) {
    if (neutrino_id_branch != 0) {
      neutrino_id_branch->GetEntry(index);
    } else {
      printf("branch neutrino_id_branch does not exist!\n");
      exit(1);
    }
    neutrino_id_isLoaded = true;
  }
  return neutrino_id_;
}

const int &hwwtree::neutrino_isstar() {
  if (not neutrino_isstar_isLoaded) {
    if (neutrino_isstar_branch != 0) {
      neutrino_isstar_branch->GetEntry(index);
    } else {
      printf("branch neutrino_isstar_branch does not exist!\n");
      exit(1);
    }
    neutrino_isstar_isLoaded = true;
  }
  return neutrino_isstar_;
}

const float &hwwtree::quark0_pt() {
  if (not quark0_pt_isLoaded) {
    if (quark0_pt_branch != 0) {
      quark0_pt_branch->GetEntry(index);
    } else {
      printf("branch quark0_pt_branch does not exist!\n");
      exit(1);
    }
    quark0_pt_isLoaded = true;
  }
  return quark0_pt_;
}

const float &hwwtree::quark0_eta() {
  if (not quark0_eta_isLoaded) {
    if (quark0_eta_branch != 0) {
      quark0_eta_branch->GetEntry(index);
    } else {
      printf("branch quark0_eta_branch does not exist!\n");
      exit(1);
    }
    quark0_eta_isLoaded = true;
  }
  return quark0_eta_;
}

const float &hwwtree::quark0_phi() {
  if (not quark0_phi_isLoaded) {
    if (quark0_phi_branch != 0) {
      quark0_phi_branch->GetEntry(index);
    } else {
      printf("branch quark0_phi_branch does not exist!\n");
      exit(1);
    }
    quark0_phi_isLoaded = true;
  }
  return quark0_phi_;
}

const float &hwwtree::quark0_mass() {
  if (not quark0_mass_isLoaded) {
    if (quark0_mass_branch != 0) {
      quark0_mass_branch->GetEntry(index);
    } else {
      printf("branch quark0_mass_branch does not exist!\n");
      exit(1);
    }
    quark0_mass_isLoaded = true;
  }
  return quark0_mass_;
}

const int &hwwtree::quark0_id() {
  if (not quark0_id_isLoaded) {
    if (quark0_id_branch != 0) {
      quark0_id_branch->GetEntry(index);
    } else {
      printf("branch quark0_id_branch does not exist!\n");
      exit(1);
    }
    quark0_id_isLoaded = true;
  }
  return quark0_id_;
}

const int &hwwtree::quark0_isstar() {
  if (not quark0_isstar_isLoaded) {
    if (quark0_isstar_branch != 0) {
      quark0_isstar_branch->GetEntry(index);
    } else {
      printf("branch quark0_isstar_branch does not exist!\n");
      exit(1);
    }
    quark0_isstar_isLoaded = true;
  }
  return quark0_isstar_;
}

const float &hwwtree::quark1_pt() {
  if (not quark1_pt_isLoaded) {
    if (quark1_pt_branch != 0) {
      quark1_pt_branch->GetEntry(index);
    } else {
      printf("branch quark1_pt_branch does not exist!\n");
      exit(1);
    }
    quark1_pt_isLoaded = true;
  }
  return quark1_pt_;
}

const float &hwwtree::quark1_eta() {
  if (not quark1_eta_isLoaded) {
    if (quark1_eta_branch != 0) {
      quark1_eta_branch->GetEntry(index);
    } else {
      printf("branch quark1_eta_branch does not exist!\n");
      exit(1);
    }
    quark1_eta_isLoaded = true;
  }
  return quark1_eta_;
}

const float &hwwtree::quark1_phi() {
  if (not quark1_phi_isLoaded) {
    if (quark1_phi_branch != 0) {
      quark1_phi_branch->GetEntry(index);
    } else {
      printf("branch quark1_phi_branch does not exist!\n");
      exit(1);
    }
    quark1_phi_isLoaded = true;
  }
  return quark1_phi_;
}

const float &hwwtree::quark1_mass() {
  if (not quark1_mass_isLoaded) {
    if (quark1_mass_branch != 0) {
      quark1_mass_branch->GetEntry(index);
    } else {
      printf("branch quark1_mass_branch does not exist!\n");
      exit(1);
    }
    quark1_mass_isLoaded = true;
  }
  return quark1_mass_;
}

const int &hwwtree::quark1_id() {
  if (not quark1_id_isLoaded) {
    if (quark1_id_branch != 0) {
      quark1_id_branch->GetEntry(index);
    } else {
      printf("branch quark1_id_branch does not exist!\n");
      exit(1);
    }
    quark1_id_isLoaded = true;
  }
  return quark1_id_;
}

const int &hwwtree::quark1_isstar() {
  if (not quark1_isstar_isLoaded) {
    if (quark1_isstar_branch != 0) {
      quark1_isstar_branch->GetEntry(index);
    } else {
      printf("branch quark1_isstar_branch does not exist!\n");
      exit(1);
    }
    quark1_isstar_isLoaded = true;
  }
  return quark1_isstar_;
}

const int &hwwtree::njInDR1() {
  if (not njInDR1_isLoaded) {
    if (njInDR1_branch != 0) {
      njInDR1_branch->GetEntry(index);
    } else {
      printf("branch njInDR1_branch does not exist!\n");
      exit(1);
    }
    njInDR1_isLoaded = true;
  }
  return njInDR1_;
}

const float &hwwtree::jet0InDR1_pt() {
  if (not jet0InDR1_pt_isLoaded) {
    if (jet0InDR1_pt_branch != 0) {
      jet0InDR1_pt_branch->GetEntry(index);
    } else {
      printf("branch jet0InDR1_pt_branch does not exist!\n");
      exit(1);
    }
    jet0InDR1_pt_isLoaded = true;
  }
  return jet0InDR1_pt_;
}

const float &hwwtree::jet1InDR1_pt() {
  if (not jet1InDR1_pt_isLoaded) {
    if (jet1InDR1_pt_branch != 0) {
      jet1InDR1_pt_branch->GetEntry(index);
    } else {
      printf("branch jet1InDR1_pt_branch does not exist!\n");
      exit(1);
    }
    jet1InDR1_pt_isLoaded = true;
  }
  return jet1InDR1_pt_;
}

const float &hwwtree::jet0InDR1_dr() {
  if (not jet0InDR1_dr_isLoaded) {
    if (jet0InDR1_dr_branch != 0) {
      jet0InDR1_dr_branch->GetEntry(index);
    } else {
      printf("branch jet0InDR1_dr_branch does not exist!\n");
      exit(1);
    }
    jet0InDR1_dr_isLoaded = true;
  }
  return jet0InDR1_dr_;
}

const float &hwwtree::jet1InDR1_dr() {
  if (not jet1InDR1_dr_isLoaded) {
    if (jet1InDR1_dr_branch != 0) {
      jet1InDR1_dr_branch->GetEntry(index);
    } else {
      printf("branch jet1InDR1_dr_branch does not exist!\n");
      exit(1);
    }
    jet1InDR1_dr_isLoaded = true;
  }
  return jet1InDR1_dr_;
}

const int &hwwtree::njInDR15() {
  if (not njInDR15_isLoaded) {
    if (njInDR15_branch != 0) {
      njInDR15_branch->GetEntry(index);
    } else {
      printf("branch njInDR15_branch does not exist!\n");
      exit(1);
    }
    njInDR15_isLoaded = true;
  }
  return njInDR15_;
}

const float &hwwtree::jet0InDR15_pt() {
  if (not jet0InDR15_pt_isLoaded) {
    if (jet0InDR15_pt_branch != 0) {
      jet0InDR15_pt_branch->GetEntry(index);
    } else {
      printf("branch jet0InDR15_pt_branch does not exist!\n");
      exit(1);
    }
    jet0InDR15_pt_isLoaded = true;
  }
  return jet0InDR15_pt_;
}

const float &hwwtree::jet1InDR15_pt() {
  if (not jet1InDR15_pt_isLoaded) {
    if (jet1InDR15_pt_branch != 0) {
      jet1InDR15_pt_branch->GetEntry(index);
    } else {
      printf("branch jet1InDR15_pt_branch does not exist!\n");
      exit(1);
    }
    jet1InDR15_pt_isLoaded = true;
  }
  return jet1InDR15_pt_;
}

const float &hwwtree::jet0InDR15_dr() {
  if (not jet0InDR15_dr_isLoaded) {
    if (jet0InDR15_dr_branch != 0) {
      jet0InDR15_dr_branch->GetEntry(index);
    } else {
      printf("branch jet0InDR15_dr_branch does not exist!\n");
      exit(1);
    }
    jet0InDR15_dr_isLoaded = true;
  }
  return jet0InDR15_dr_;
}

const float &hwwtree::jet1InDR15_dr() {
  if (not jet1InDR15_dr_isLoaded) {
    if (jet1InDR15_dr_branch != 0) {
      jet1InDR15_dr_branch->GetEntry(index);
    } else {
      printf("branch jet1InDR15_dr_branch does not exist!\n");
      exit(1);
    }
    jet1InDR15_dr_isLoaded = true;
  }
  return jet1InDR15_dr_;
}


void hwwtree::progress( int nEventsTotal, int nEventsChain ){
  int period = 1000;
  if (nEventsTotal%1000 == 0) {
    // xterm magic from L. Vacavant and A. Cerri
    if (isatty(1)) {
      if ((nEventsChain - nEventsTotal) > period) {
        float frac = (float)nEventsTotal/(nEventsChain*0.01);
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
             "\033[0m\033[32m <---\033[0m\015", frac);
        fflush(stdout);
      }
      else {
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", 100.);
        cout << endl;
      }
    }
  }
}

namespace tas {

const float &CutGenHT() { return hww.CutGenHT(); }
const float &CutNLep() { return hww.CutNLep(); }
const float &CutNAK8() { return hww.CutNAK8(); }
const float &CutISRMegaJet() { return hww.CutISRMegaJet(); }
const float &CutISRBalance() { return hww.CutISRBalance(); }
const float &CutMu() { return hww.CutMu(); }
const float &CutMuPlus() { return hww.CutMuPlus(); }
const float &CutMuMinus() { return hww.CutMuMinus(); }
const float &CutEl() { return hww.CutEl(); }
const float &CutElPlus() { return hww.CutElPlus(); }
const float &CutElMinus() { return hww.CutElMinus(); }
const float &CutClass1() { return hww.CutClass1(); }
const float &CutClass2() { return hww.CutClass2(); }
const float &CutClass3() { return hww.CutClass3(); }
const float &CutClass4() { return hww.CutClass4(); }
const float &CutClassA() { return hww.CutClassA(); }
const float &CutClassB() { return hww.CutClassB(); }
const float &CutRecoClassA() { return hww.CutRecoClassA(); }
const float &CutRecoClassB() { return hww.CutRecoClassB(); }
const float &wgt() { return hww.wgt(); }
const int &wstar_channel_id() { return hww.wstar_channel_id(); }
const float &lepmetpt() { return hww.lepmetpt(); }
const float &ak8minusleppt() { return hww.ak8minusleppt(); }
const float &wlepptratio() { return hww.wlepptratio(); }
const float &whadptratio() { return hww.whadptratio(); }
const float &wlepwhadptratiosum() { return hww.wlepwhadptratiosum(); }
const float &wlepwhadptratiodiff() { return hww.wlepwhadptratiodiff(); }
const float &wlepwhadptratioratio() { return hww.wlepwhadptratioratio(); }
const float &lep_customrelIso005EA() { return hww.lep_customrelIso005EA(); }
const float &lep_customrelIso010EA() { return hww.lep_customrelIso010EA(); }
const float &lep_customrelIso015EA() { return hww.lep_customrelIso015EA(); }
const float &lep_customrelIso020EA() { return hww.lep_customrelIso020EA(); }
const float &lep_customrelIso025EA() { return hww.lep_customrelIso025EA(); }
const float &lep_customrelIso030EA() { return hww.lep_customrelIso030EA(); }
const float &lep_customrelIso035EA() { return hww.lep_customrelIso035EA(); }
const float &lep_customrelIso040EA() { return hww.lep_customrelIso040EA(); }
const float &lep_customrelIso045EA() { return hww.lep_customrelIso045EA(); }
const float &lep_customrelIso050EA() { return hww.lep_customrelIso050EA(); }
const float &lep_customrelIso055EA() { return hww.lep_customrelIso055EA(); }
const float &lep_customrelIso060EA() { return hww.lep_customrelIso060EA(); }
const float &lep_customrelIso065EA() { return hww.lep_customrelIso065EA(); }
const float &lep_customrelIso070EA() { return hww.lep_customrelIso070EA(); }
const float &lep_customrelIso075EA() { return hww.lep_customrelIso075EA(); }
const float &lep_customrelIso080EA() { return hww.lep_customrelIso080EA(); }
const int &nb() { return hww.nb(); }
const int &nbmed() { return hww.nbmed(); }
const int &nbtight() { return hww.nbtight(); }
const int &nb30() { return hww.nb30(); }
const int &nb30med() { return hww.nb30med(); }
const int &nb30tight() { return hww.nb30tight(); }
const int &nb40() { return hww.nb40(); }
const int &nb40med() { return hww.nb40med(); }
const int &nb40tight() { return hww.nb40tight(); }
const int &nb50() { return hww.nb50(); }
const int &nb50med() { return hww.nb50med(); }
const int &nb50tight() { return hww.nb50tight(); }
const int &nbOR() { return hww.nbOR(); }
const int &nbORmed() { return hww.nbORmed(); }
const int &nbORtight() { return hww.nbORtight(); }
const int &nbOR30() { return hww.nbOR30(); }
const int &nbOR30med() { return hww.nbOR30med(); }
const int &nbOR30tight() { return hww.nbOR30tight(); }
const int &nbOR40() { return hww.nbOR40(); }
const int &nbOR40med() { return hww.nbOR40med(); }
const int &nbOR40tight() { return hww.nbOR40tight(); }
const int &nbOR50() { return hww.nbOR50(); }
const int &nbOR50med() { return hww.nbOR50med(); }
const int &nbOR50tight() { return hww.nbOR50tight(); }
const int &nrecolep() { return hww.nrecolep(); }
const int &nak8jets() { return hww.nak8jets(); }
const int &nj() { return hww.nj(); }
const int &nj50() { return hww.nj50(); }
const float &recowhad_puppi_mass() { return hww.recowhad_puppi_mass(); }
const float &recowhad_mass() { return hww.recowhad_mass(); }
const float &recowhad_puppi_nJettinessTau1() { return hww.recowhad_puppi_nJettinessTau1(); }
const float &recowhad_nJettinessTau1() { return hww.recowhad_nJettinessTau1(); }
const float &recowhad_puppi_nJettinessTau2() { return hww.recowhad_puppi_nJettinessTau2(); }
const float &recowhad_nJettinessTau2() { return hww.recowhad_nJettinessTau2(); }
const float &recowhad_puppi_nJettinessTauRatio() { return hww.recowhad_puppi_nJettinessTauRatio(); }
const float &recowhad_nJettinessTauRatio() { return hww.recowhad_nJettinessTauRatio(); }
const float &recohiggs_mass() { return hww.recohiggs_mass(); }
const float &recohiggs2_mass() { return hww.recohiggs2_mass(); }
const float &recohiggs_min() { return hww.recohiggs_min(); }
const float &recohiggs_max() { return hww.recohiggs_max(); }
const float &recowhad_mlep_puppi_mass() { return hww.recowhad_mlep_puppi_mass(); }
const float &recowhad_mlep_mass() { return hww.recowhad_mlep_mass(); }
const float &recowhad_plep_puppi_mass() { return hww.recowhad_plep_puppi_mass(); }
const float &recowhad_plep_mass() { return hww.recowhad_plep_mass(); }
const float &pf_annuli_energy_0() { return hww.pf_annuli_energy_0(); }
const float &pf_annuli_energy_1() { return hww.pf_annuli_energy_1(); }
const float &pf_annuli_energy_2() { return hww.pf_annuli_energy_2(); }
const float &pf_annuli_energy_3() { return hww.pf_annuli_energy_3(); }
const float &pf_annuli_energy_4() { return hww.pf_annuli_energy_4(); }
const float &pf_annuli_energy_5() { return hww.pf_annuli_energy_5(); }
const float &pf_annuli_energy_6() { return hww.pf_annuli_energy_6(); }
const float &pf_annuli_energy_7() { return hww.pf_annuli_energy_7(); }
const float &lep_miniIsoEA() { return hww.lep_miniIsoEA(); }
const float &lep_relIso04DB() { return hww.lep_relIso04DB(); }
const float &lep_relIso03EA() { return hww.lep_relIso03EA(); }
const float &recolepton_recowhad_dr() { return hww.recolepton_recowhad_dr(); }
const float &recolepton_recowhad_mlep_dr() { return hww.recolepton_recowhad_mlep_dr(); }
const float &recolepton_pt() { return hww.recolepton_pt(); }
const float &met_pt() { return hww.met_pt(); }
const float &recowhad_pt() { return hww.recowhad_pt(); }
const float &recowhad_puppi_pt() { return hww.recowhad_puppi_pt(); }
const float &recolepton_met_dphi() { return hww.recolepton_met_dphi(); }
const float &recoisrmegajet_pt() { return hww.recoisrmegajet_pt(); }
const float &recoisrbalance() { return hww.recoisrbalance(); }
const TString &CMS4path() { return hww.CMS4path(); }
const int &CMS4index() { return hww.CMS4index(); }
const int &run() { return hww.run(); }
const int &lumi() { return hww.lumi(); }
const unsigned long long &evt() { return hww.evt(); }
const float &bdt_recoclassA() { return hww.bdt_recoclassA(); }
const float &bdt_recoclassB() { return hww.bdt_recoclassB(); }
const float &lqq_max_dr() { return hww.lqq_max_dr(); }
const float &lq0_dr() { return hww.lq0_dr(); }
const float &lq1_dr() { return hww.lq1_dr(); }
const float &qq_dr() { return hww.qq_dr(); }
const float &decay_dr() { return hww.decay_dr(); }
const float &l_qq_dr() { return hww.l_qq_dr(); }
const float &lqq_mass() { return hww.lqq_mass(); }
const float &lvqq_mt() { return hww.lvqq_mt(); }
const int &higgsdecay() { return hww.higgsdecay(); }
const int &nlep() { return hww.nlep(); }
const int &nquark() { return hww.nquark(); }
const int &wa_id() { return hww.wa_id(); }
const float &isr_pt() { return hww.isr_pt(); }
const float &isr_eta() { return hww.isr_eta(); }
const float &isr_phi() { return hww.isr_phi(); }
const float &higgs_pt() { return hww.higgs_pt(); }
const float &higgs_eta() { return hww.higgs_eta(); }
const float &higgs_phi() { return hww.higgs_phi(); }
const float &decay0_pt() { return hww.decay0_pt(); }
const float &decay0_eta() { return hww.decay0_eta(); }
const float &decay0_phi() { return hww.decay0_phi(); }
const float &decay0_mass() { return hww.decay0_mass(); }
const int &decay0_id() { return hww.decay0_id(); }
const int &decay0_isstar() { return hww.decay0_isstar(); }
const float &decay1_pt() { return hww.decay1_pt(); }
const float &decay1_eta() { return hww.decay1_eta(); }
const float &decay1_phi() { return hww.decay1_phi(); }
const float &decay1_mass() { return hww.decay1_mass(); }
const int &decay1_id() { return hww.decay1_id(); }
const int &decay1_isstar() { return hww.decay1_isstar(); }
const float &lepton_pt() { return hww.lepton_pt(); }
const float &lepton_eta() { return hww.lepton_eta(); }
const float &lepton_phi() { return hww.lepton_phi(); }
const float &lepton_mass() { return hww.lepton_mass(); }
const int &lepton_id() { return hww.lepton_id(); }
const int &lepton_isstar() { return hww.lepton_isstar(); }
const float &neutrino_pt() { return hww.neutrino_pt(); }
const float &neutrino_eta() { return hww.neutrino_eta(); }
const float &neutrino_phi() { return hww.neutrino_phi(); }
const float &neutrino_mass() { return hww.neutrino_mass(); }
const int &neutrino_id() { return hww.neutrino_id(); }
const int &neutrino_isstar() { return hww.neutrino_isstar(); }
const float &quark0_pt() { return hww.quark0_pt(); }
const float &quark0_eta() { return hww.quark0_eta(); }
const float &quark0_phi() { return hww.quark0_phi(); }
const float &quark0_mass() { return hww.quark0_mass(); }
const int &quark0_id() { return hww.quark0_id(); }
const int &quark0_isstar() { return hww.quark0_isstar(); }
const float &quark1_pt() { return hww.quark1_pt(); }
const float &quark1_eta() { return hww.quark1_eta(); }
const float &quark1_phi() { return hww.quark1_phi(); }
const float &quark1_mass() { return hww.quark1_mass(); }
const int &quark1_id() { return hww.quark1_id(); }
const int &quark1_isstar() { return hww.quark1_isstar(); }
const int &njInDR1() { return hww.njInDR1(); }
const float &jet0InDR1_pt() { return hww.jet0InDR1_pt(); }
const float &jet1InDR1_pt() { return hww.jet1InDR1_pt(); }
const float &jet0InDR1_dr() { return hww.jet0InDR1_dr(); }
const float &jet1InDR1_dr() { return hww.jet1InDR1_dr(); }
const int &njInDR15() { return hww.njInDR15(); }
const float &jet0InDR15_pt() { return hww.jet0InDR15_pt(); }
const float &jet1InDR15_pt() { return hww.jet1InDR15_pt(); }
const float &jet0InDR15_dr() { return hww.jet0InDR15_dr(); }
const float &jet1InDR15_dr() { return hww.jet1InDR15_dr(); }

}

#include "rooutil/rooutil.cc"
