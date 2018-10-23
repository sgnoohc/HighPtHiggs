#include "hwwtree.h"
hwwtree hww;

void hwwtree::Init(TTree *tree) {
  lep_p4_branch = tree->GetBranch("lep_p4");
  if (lep_p4_branch) lep_p4_branch->SetAddress(&lep_p4_);
  lep_p4_0_branch = tree->GetBranch("lep_p4_0");
  if (lep_p4_0_branch) lep_p4_0_branch->SetAddress(&lep_p4_0_);
  lep_p4_1_branch = tree->GetBranch("lep_p4_1");
  if (lep_p4_1_branch) lep_p4_1_branch->SetAddress(&lep_p4_1_);
  lep_p4_2_branch = tree->GetBranch("lep_p4_2");
  if (lep_p4_2_branch) lep_p4_2_branch->SetAddress(&lep_p4_2_);
  alljets_p4_branch = tree->GetBranch("alljets_p4");
  if (alljets_p4_branch) alljets_p4_branch->SetAddress(&alljets_p4_);
  jets_p4_branch = tree->GetBranch("jets_p4");
  if (jets_p4_branch) jets_p4_branch->SetAddress(&jets_p4_);
  jets_up_p4_branch = tree->GetBranch("jets_up_p4");
  if (jets_up_p4_branch) jets_up_p4_branch->SetAddress(&jets_up_p4_);
  jets_dn_p4_branch = tree->GetBranch("jets_dn_p4");
  if (jets_dn_p4_branch) jets_dn_p4_branch->SetAddress(&jets_dn_p4_);
  ak8jets_p4_branch = tree->GetBranch("ak8jets_p4");
  if (ak8jets_p4_branch) ak8jets_p4_branch->SetAddress(&ak8jets_p4_);
  jets_p4_0_branch = tree->GetBranch("jets_p4_0");
  if (jets_p4_0_branch) jets_p4_0_branch->SetAddress(&jets_p4_0_);
  jets_p4_1_branch = tree->GetBranch("jets_p4_1");
  if (jets_p4_1_branch) jets_p4_1_branch->SetAddress(&jets_p4_1_);
  jets_p4_2_branch = tree->GetBranch("jets_p4_2");
  if (jets_p4_2_branch) jets_p4_2_branch->SetAddress(&jets_p4_2_);
  jets_up_p4_0_branch = tree->GetBranch("jets_up_p4_0");
  if (jets_up_p4_0_branch) jets_up_p4_0_branch->SetAddress(&jets_up_p4_0_);
  jets_up_p4_1_branch = tree->GetBranch("jets_up_p4_1");
  if (jets_up_p4_1_branch) jets_up_p4_1_branch->SetAddress(&jets_up_p4_1_);
  jets_up_p4_2_branch = tree->GetBranch("jets_up_p4_2");
  if (jets_up_p4_2_branch) jets_up_p4_2_branch->SetAddress(&jets_up_p4_2_);
  jets_dn_p4_0_branch = tree->GetBranch("jets_dn_p4_0");
  if (jets_dn_p4_0_branch) jets_dn_p4_0_branch->SetAddress(&jets_dn_p4_0_);
  jets_dn_p4_1_branch = tree->GetBranch("jets_dn_p4_1");
  if (jets_dn_p4_1_branch) jets_dn_p4_1_branch->SetAddress(&jets_dn_p4_1_);
  jets_dn_p4_2_branch = tree->GetBranch("jets_dn_p4_2");
  if (jets_dn_p4_2_branch) jets_dn_p4_2_branch->SetAddress(&jets_dn_p4_2_);
  ak8jets_p4_0_branch = tree->GetBranch("ak8jets_p4_0");
  if (ak8jets_p4_0_branch) ak8jets_p4_0_branch->SetAddress(&ak8jets_p4_0_);
  ak8jets_p4_1_branch = tree->GetBranch("ak8jets_p4_1");
  if (ak8jets_p4_1_branch) ak8jets_p4_1_branch->SetAddress(&ak8jets_p4_1_);
  ak8jets_p4_2_branch = tree->GetBranch("ak8jets_p4_2");
  if (ak8jets_p4_2_branch) ak8jets_p4_2_branch->SetAddress(&ak8jets_p4_2_);
  recohiggs_p4_branch = tree->GetBranch("recohiggs_p4");
  if (recohiggs_p4_branch) recohiggs_p4_branch->SetAddress(&recohiggs_p4_);
  recohiggs2_p4_branch = tree->GetBranch("recohiggs2_p4");
  if (recohiggs2_p4_branch) recohiggs2_p4_branch->SetAddress(&recohiggs2_p4_);
  recohiggsinv_p4_branch = tree->GetBranch("recohiggsinv_p4");
  if (recohiggsinv_p4_branch) recohiggsinv_p4_branch->SetAddress(&recohiggsinv_p4_);
  recohiggsmin_p4_branch = tree->GetBranch("recohiggsmin_p4");
  if (recohiggsmin_p4_branch) recohiggsmin_p4_branch->SetAddress(&recohiggsmin_p4_);
  recohiggsmin12_p4_branch = tree->GetBranch("recohiggsmin12_p4");
  if (recohiggsmin12_p4_branch) recohiggsmin12_p4_branch->SetAddress(&recohiggsmin12_p4_);
  recoisr_p4_branch = tree->GetBranch("recoisr_p4");
  if (recoisr_p4_branch) recoisr_p4_branch->SetAddress(&recoisr_p4_);
  recoisrmegajet_p4_branch = tree->GetBranch("recoisrmegajet_p4");
  if (recoisrmegajet_p4_branch) recoisrmegajet_p4_branch->SetAddress(&recoisrmegajet_p4_);
  recoisrmegajet_n2_p4_branch = tree->GetBranch("recoisrmegajet_n2_p4");
  if (recoisrmegajet_n2_p4_branch) recoisrmegajet_n2_p4_branch->SetAddress(&recoisrmegajet_n2_p4_);
  recolepton_p4_branch = tree->GetBranch("recolepton_p4");
  if (recolepton_p4_branch) recolepton_p4_branch->SetAddress(&recolepton_p4_);
  reconeutrino_p4_branch = tree->GetBranch("reconeutrino_p4");
  if (reconeutrino_p4_branch) reconeutrino_p4_branch->SetAddress(&reconeutrino_p4_);
  reconeutrino2_p4_branch = tree->GetBranch("reconeutrino2_p4");
  if (reconeutrino2_p4_branch) reconeutrino2_p4_branch->SetAddress(&reconeutrino2_p4_);
  reconeutrinoinv_p4_branch = tree->GetBranch("reconeutrinoinv_p4");
  if (reconeutrinoinv_p4_branch) reconeutrinoinv_p4_branch->SetAddress(&reconeutrinoinv_p4_);
  recowhad_p4_branch = tree->GetBranch("recowhad_p4");
  if (recowhad_p4_branch) recowhad_p4_branch->SetAddress(&recowhad_p4_);
  recowlep_p4_branch = tree->GetBranch("recowlep_p4");
  if (recowlep_p4_branch) recowlep_p4_branch->SetAddress(&recowlep_p4_);
  recoleadjet_p4_branch = tree->GetBranch("recoleadjet_p4");
  if (recoleadjet_p4_branch) recoleadjet_p4_branch->SetAddress(&recoleadjet_p4_);
  recowhad_minus_recolepton_p4_branch = tree->GetBranch("recowhad_minus_recolepton_p4");
  if (recowhad_minus_recolepton_p4_branch) recowhad_minus_recolepton_p4_branch->SetAddress(&recowhad_minus_recolepton_p4_);
  recowhad_minus_recolepton_positive_p4_branch = tree->GetBranch("recowhad_minus_recolepton_positive_p4");
  if (recowhad_minus_recolepton_positive_p4_branch) recowhad_minus_recolepton_positive_p4_branch->SetAddress(&recowhad_minus_recolepton_positive_p4_);
  isr_p4_branch = tree->GetBranch("isr_p4");
  if (isr_p4_branch) isr_p4_branch->SetAddress(&isr_p4_);
  higgs_p4_branch = tree->GetBranch("higgs_p4");
  if (higgs_p4_branch) higgs_p4_branch->SetAddress(&higgs_p4_);
  decay_p4_branch = tree->GetBranch("decay_p4");
  if (decay_p4_branch) decay_p4_branch->SetAddress(&decay_p4_);
  lepton_p4_branch = tree->GetBranch("lepton_p4");
  if (lepton_p4_branch) lepton_p4_branch->SetAddress(&lepton_p4_);
  neutrino_p4_branch = tree->GetBranch("neutrino_p4");
  if (neutrino_p4_branch) neutrino_p4_branch->SetAddress(&neutrino_p4_);
  quark_p4_branch = tree->GetBranch("quark_p4");
  if (quark_p4_branch) quark_p4_branch->SetAddress(&quark_p4_);
  pf_p4s_branch = tree->GetBranch("pf_p4s");
  if (pf_p4s_branch) pf_p4s_branch->SetAddress(&pf_p4s_);

  tree->SetMakeClass(1);

  run_branch = tree->GetBranch("run");
  if (run_branch) run_branch->SetAddress(&run_);
  lumi_branch = tree->GetBranch("lumi");
  if (lumi_branch) lumi_branch->SetAddress(&lumi_);
  evt_branch = tree->GetBranch("evt");
  if (evt_branch) evt_branch->SetAddress(&evt_);
  isData_branch = tree->GetBranch("isData");
  if (isData_branch) isData_branch->SetAddress(&isData_);
  evt_scale1fb_branch = tree->GetBranch("evt_scale1fb");
  if (evt_scale1fb_branch) evt_scale1fb_branch->SetAddress(&evt_scale1fb_);
  genps_weight_branch = tree->GetBranch("genps_weight");
  if (genps_weight_branch) genps_weight_branch->SetAddress(&genps_weight_);
  xsec_br_branch = tree->GetBranch("xsec_br");
  if (xsec_br_branch) xsec_br_branch->SetAddress(&xsec_br_);
  evt_passgoodrunlist_branch = tree->GetBranch("evt_passgoodrunlist");
  if (evt_passgoodrunlist_branch) evt_passgoodrunlist_branch->SetAddress(&evt_passgoodrunlist_);
  CMS4path_branch = tree->GetBranch("CMS4path");
  if (CMS4path_branch) CMS4path_branch->SetAddress(&CMS4path_);
  CMS4index_branch = tree->GetBranch("CMS4index");
  if (CMS4index_branch) CMS4index_branch->SetAddress(&CMS4index_);
  weight_fr_r1_f1_branch = tree->GetBranch("weight_fr_r1_f1");
  if (weight_fr_r1_f1_branch) weight_fr_r1_f1_branch->SetAddress(&weight_fr_r1_f1_);
  weight_fr_r1_f2_branch = tree->GetBranch("weight_fr_r1_f2");
  if (weight_fr_r1_f2_branch) weight_fr_r1_f2_branch->SetAddress(&weight_fr_r1_f2_);
  weight_fr_r1_f0p5_branch = tree->GetBranch("weight_fr_r1_f0p5");
  if (weight_fr_r1_f0p5_branch) weight_fr_r1_f0p5_branch->SetAddress(&weight_fr_r1_f0p5_);
  weight_fr_r2_f1_branch = tree->GetBranch("weight_fr_r2_f1");
  if (weight_fr_r2_f1_branch) weight_fr_r2_f1_branch->SetAddress(&weight_fr_r2_f1_);
  weight_fr_r2_f2_branch = tree->GetBranch("weight_fr_r2_f2");
  if (weight_fr_r2_f2_branch) weight_fr_r2_f2_branch->SetAddress(&weight_fr_r2_f2_);
  weight_fr_r2_f0p5_branch = tree->GetBranch("weight_fr_r2_f0p5");
  if (weight_fr_r2_f0p5_branch) weight_fr_r2_f0p5_branch->SetAddress(&weight_fr_r2_f0p5_);
  weight_fr_r0p5_f1_branch = tree->GetBranch("weight_fr_r0p5_f1");
  if (weight_fr_r0p5_f1_branch) weight_fr_r0p5_f1_branch->SetAddress(&weight_fr_r0p5_f1_);
  weight_fr_r0p5_f2_branch = tree->GetBranch("weight_fr_r0p5_f2");
  if (weight_fr_r0p5_f2_branch) weight_fr_r0p5_f2_branch->SetAddress(&weight_fr_r0p5_f2_);
  weight_fr_r0p5_f0p5_branch = tree->GetBranch("weight_fr_r0p5_f0p5");
  if (weight_fr_r0p5_f0p5_branch) weight_fr_r0p5_f0p5_branch->SetAddress(&weight_fr_r0p5_f0p5_);
  weight_pdf_up_branch = tree->GetBranch("weight_pdf_up");
  if (weight_pdf_up_branch) weight_pdf_up_branch->SetAddress(&weight_pdf_up_);
  weight_pdf_down_branch = tree->GetBranch("weight_pdf_down");
  if (weight_pdf_down_branch) weight_pdf_down_branch->SetAddress(&weight_pdf_down_);
  weight_alphas_down_branch = tree->GetBranch("weight_alphas_down");
  if (weight_alphas_down_branch) weight_alphas_down_branch->SetAddress(&weight_alphas_down_);
  weight_alphas_up_branch = tree->GetBranch("weight_alphas_up");
  if (weight_alphas_up_branch) weight_alphas_up_branch->SetAddress(&weight_alphas_up_);
  weight_isr_branch = tree->GetBranch("weight_isr");
  if (weight_isr_branch) weight_isr_branch->SetAddress(&weight_isr_);
  weight_isr_up_branch = tree->GetBranch("weight_isr_up");
  if (weight_isr_up_branch) weight_isr_up_branch->SetAddress(&weight_isr_up_);
  weight_isr_down_branch = tree->GetBranch("weight_isr_down");
  if (weight_isr_down_branch) weight_isr_down_branch->SetAddress(&weight_isr_down_);
  lep_id_branch = tree->GetBranch("lep_id");
  if (lep_id_branch) lep_id_branch->SetAddress(&lep_id_);
  lep_idx_branch = tree->GetBranch("lep_idx");
  if (lep_idx_branch) lep_idx_branch->SetAddress(&lep_idx_);
  lep_pt_branch = tree->GetBranch("lep_pt");
  if (lep_pt_branch) lep_pt_branch->SetAddress(&lep_pt_);
  lep_eta_branch = tree->GetBranch("lep_eta");
  if (lep_eta_branch) lep_eta_branch->SetAddress(&lep_eta_);
  lep_phi_branch = tree->GetBranch("lep_phi");
  if (lep_phi_branch) lep_phi_branch->SetAddress(&lep_phi_);
  lep_miniIsoEA_branch = tree->GetBranch("lep_miniIsoEA");
  if (lep_miniIsoEA_branch) lep_miniIsoEA_branch->SetAddress(&lep_miniIsoEA_);
  lep_relIso03EA_branch = tree->GetBranch("lep_relIso03EA");
  if (lep_relIso03EA_branch) lep_relIso03EA_branch->SetAddress(&lep_relIso03EA_);
  lep_relIso04DB_branch = tree->GetBranch("lep_relIso04DB");
  if (lep_relIso04DB_branch) lep_relIso04DB_branch->SetAddress(&lep_relIso04DB_);
  lep_customrelIso005EA_branch = tree->GetBranch("lep_customrelIso005EA");
  if (lep_customrelIso005EA_branch) lep_customrelIso005EA_branch->SetAddress(&lep_customrelIso005EA_);
  lep_customrelIso01EA_branch = tree->GetBranch("lep_customrelIso01EA");
  if (lep_customrelIso01EA_branch) lep_customrelIso01EA_branch->SetAddress(&lep_customrelIso01EA_);
  lep_customrelIso015EA_branch = tree->GetBranch("lep_customrelIso015EA");
  if (lep_customrelIso015EA_branch) lep_customrelIso015EA_branch->SetAddress(&lep_customrelIso015EA_);
  lep_customrelIso02EA_branch = tree->GetBranch("lep_customrelIso02EA");
  if (lep_customrelIso02EA_branch) lep_customrelIso02EA_branch->SetAddress(&lep_customrelIso02EA_);
  lep_customrelIso025EA_branch = tree->GetBranch("lep_customrelIso025EA");
  if (lep_customrelIso025EA_branch) lep_customrelIso025EA_branch->SetAddress(&lep_customrelIso025EA_);
  lep_customrelIso03EA_branch = tree->GetBranch("lep_customrelIso03EA");
  if (lep_customrelIso03EA_branch) lep_customrelIso03EA_branch->SetAddress(&lep_customrelIso03EA_);
  lep_customrelIso035EA_branch = tree->GetBranch("lep_customrelIso035EA");
  if (lep_customrelIso035EA_branch) lep_customrelIso035EA_branch->SetAddress(&lep_customrelIso035EA_);
  lep_customrelIso04EA_branch = tree->GetBranch("lep_customrelIso04EA");
  if (lep_customrelIso04EA_branch) lep_customrelIso04EA_branch->SetAddress(&lep_customrelIso04EA_);
  lep_customrelIso045EA_branch = tree->GetBranch("lep_customrelIso045EA");
  if (lep_customrelIso045EA_branch) lep_customrelIso045EA_branch->SetAddress(&lep_customrelIso045EA_);
  lep_customrelIso05EA_branch = tree->GetBranch("lep_customrelIso05EA");
  if (lep_customrelIso05EA_branch) lep_customrelIso05EA_branch->SetAddress(&lep_customrelIso05EA_);
  lep_customrelIso055EA_branch = tree->GetBranch("lep_customrelIso055EA");
  if (lep_customrelIso055EA_branch) lep_customrelIso055EA_branch->SetAddress(&lep_customrelIso055EA_);
  lep_customrelIso06EA_branch = tree->GetBranch("lep_customrelIso06EA");
  if (lep_customrelIso06EA_branch) lep_customrelIso06EA_branch->SetAddress(&lep_customrelIso06EA_);
  lep_customrelIso065EA_branch = tree->GetBranch("lep_customrelIso065EA");
  if (lep_customrelIso065EA_branch) lep_customrelIso065EA_branch->SetAddress(&lep_customrelIso065EA_);
  lep_customrelIso07EA_branch = tree->GetBranch("lep_customrelIso07EA");
  if (lep_customrelIso07EA_branch) lep_customrelIso07EA_branch->SetAddress(&lep_customrelIso07EA_);
  lep_customrelIso075EA_branch = tree->GetBranch("lep_customrelIso075EA");
  if (lep_customrelIso075EA_branch) lep_customrelIso075EA_branch->SetAddress(&lep_customrelIso075EA_);
  lep_customrelIso08EA_branch = tree->GetBranch("lep_customrelIso08EA");
  if (lep_customrelIso08EA_branch) lep_customrelIso08EA_branch->SetAddress(&lep_customrelIso08EA_);
  nrecolep_branch = tree->GetBranch("nrecolep");
  if (nrecolep_branch) nrecolep_branch->SetAddress(&nrecolep_);
  lep_pt_0_branch = tree->GetBranch("lep_pt_0");
  if (lep_pt_0_branch) lep_pt_0_branch->SetAddress(&lep_pt_0_);
  lep_pt_1_branch = tree->GetBranch("lep_pt_1");
  if (lep_pt_1_branch) lep_pt_1_branch->SetAddress(&lep_pt_1_);
  lep_pt_2_branch = tree->GetBranch("lep_pt_2");
  if (lep_pt_2_branch) lep_pt_2_branch->SetAddress(&lep_pt_2_);
  lep_eta_0_branch = tree->GetBranch("lep_eta_0");
  if (lep_eta_0_branch) lep_eta_0_branch->SetAddress(&lep_eta_0_);
  lep_eta_1_branch = tree->GetBranch("lep_eta_1");
  if (lep_eta_1_branch) lep_eta_1_branch->SetAddress(&lep_eta_1_);
  lep_eta_2_branch = tree->GetBranch("lep_eta_2");
  if (lep_eta_2_branch) lep_eta_2_branch->SetAddress(&lep_eta_2_);
  lep_phi_0_branch = tree->GetBranch("lep_phi_0");
  if (lep_phi_0_branch) lep_phi_0_branch->SetAddress(&lep_phi_0_);
  lep_phi_1_branch = tree->GetBranch("lep_phi_1");
  if (lep_phi_1_branch) lep_phi_1_branch->SetAddress(&lep_phi_1_);
  lep_phi_2_branch = tree->GetBranch("lep_phi_2");
  if (lep_phi_2_branch) lep_phi_2_branch->SetAddress(&lep_phi_2_);
  lep_miniIsoEA_0_branch = tree->GetBranch("lep_miniIsoEA_0");
  if (lep_miniIsoEA_0_branch) lep_miniIsoEA_0_branch->SetAddress(&lep_miniIsoEA_0_);
  lep_miniIsoEA_1_branch = tree->GetBranch("lep_miniIsoEA_1");
  if (lep_miniIsoEA_1_branch) lep_miniIsoEA_1_branch->SetAddress(&lep_miniIsoEA_1_);
  lep_miniIsoEA_2_branch = tree->GetBranch("lep_miniIsoEA_2");
  if (lep_miniIsoEA_2_branch) lep_miniIsoEA_2_branch->SetAddress(&lep_miniIsoEA_2_);
  lep_relIso03EA_0_branch = tree->GetBranch("lep_relIso03EA_0");
  if (lep_relIso03EA_0_branch) lep_relIso03EA_0_branch->SetAddress(&lep_relIso03EA_0_);
  lep_relIso03EA_1_branch = tree->GetBranch("lep_relIso03EA_1");
  if (lep_relIso03EA_1_branch) lep_relIso03EA_1_branch->SetAddress(&lep_relIso03EA_1_);
  lep_relIso03EA_2_branch = tree->GetBranch("lep_relIso03EA_2");
  if (lep_relIso03EA_2_branch) lep_relIso03EA_2_branch->SetAddress(&lep_relIso03EA_2_);
  lep_relIso04DB_0_branch = tree->GetBranch("lep_relIso04DB_0");
  if (lep_relIso04DB_0_branch) lep_relIso04DB_0_branch->SetAddress(&lep_relIso04DB_0_);
  lep_relIso04DB_1_branch = tree->GetBranch("lep_relIso04DB_1");
  if (lep_relIso04DB_1_branch) lep_relIso04DB_1_branch->SetAddress(&lep_relIso04DB_1_);
  lep_relIso04DB_2_branch = tree->GetBranch("lep_relIso04DB_2");
  if (lep_relIso04DB_2_branch) lep_relIso04DB_2_branch->SetAddress(&lep_relIso04DB_2_);
  lep_id_0_branch = tree->GetBranch("lep_id_0");
  if (lep_id_0_branch) lep_id_0_branch->SetAddress(&lep_id_0_);
  lep_id_1_branch = tree->GetBranch("lep_id_1");
  if (lep_id_1_branch) lep_id_1_branch->SetAddress(&lep_id_1_);
  lep_id_2_branch = tree->GetBranch("lep_id_2");
  if (lep_id_2_branch) lep_id_2_branch->SetAddress(&lep_id_2_);
  lep_idx_0_branch = tree->GetBranch("lep_idx_0");
  if (lep_idx_0_branch) lep_idx_0_branch->SetAddress(&lep_idx_0_);
  lep_idx_1_branch = tree->GetBranch("lep_idx_1");
  if (lep_idx_1_branch) lep_idx_1_branch->SetAddress(&lep_idx_1_);
  lep_idx_2_branch = tree->GetBranch("lep_idx_2");
  if (lep_idx_2_branch) lep_idx_2_branch->SetAddress(&lep_idx_2_);
  nj_branch = tree->GetBranch("nj");
  if (nj_branch) nj_branch->SetAddress(&nj_);
  nb_branch = tree->GetBranch("nb");
  if (nb_branch) nb_branch->SetAddress(&nb_);
  nbmed_branch = tree->GetBranch("nbmed");
  if (nbmed_branch) nbmed_branch->SetAddress(&nbmed_);
  nbtight_branch = tree->GetBranch("nbtight");
  if (nbtight_branch) nbtight_branch->SetAddress(&nbtight_);
  nj50_branch = tree->GetBranch("nj50");
  if (nj50_branch) nj50_branch->SetAddress(&nj50_);
  nb50_branch = tree->GetBranch("nb50");
  if (nb50_branch) nb50_branch->SetAddress(&nb50_);
  nb50med_branch = tree->GetBranch("nb50med");
  if (nb50med_branch) nb50med_branch->SetAddress(&nb50med_);
  nb50tight_branch = tree->GetBranch("nb50tight");
  if (nb50tight_branch) nb50tight_branch->SetAddress(&nb50tight_);
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
  ht_branch = tree->GetBranch("ht");
  if (ht_branch) ht_branch->SetAddress(&ht_);
  ht40_branch = tree->GetBranch("ht40");
  if (ht40_branch) ht40_branch->SetAddress(&ht40_);
  ht50_branch = tree->GetBranch("ht50");
  if (ht50_branch) ht50_branch->SetAddress(&ht50_);
  mh_branch = tree->GetBranch("mh");
  if (mh_branch) mh_branch->SetAddress(&mh_);
  mh40_branch = tree->GetBranch("mh40");
  if (mh40_branch) mh40_branch->SetAddress(&mh40_);
  mh50_branch = tree->GetBranch("mh50");
  if (mh50_branch) mh50_branch->SetAddress(&mh50_);
  alljets_pt_branch = tree->GetBranch("alljets_pt");
  if (alljets_pt_branch) alljets_pt_branch->SetAddress(&alljets_pt_);
  alljets_eta_branch = tree->GetBranch("alljets_eta");
  if (alljets_eta_branch) alljets_eta_branch->SetAddress(&alljets_eta_);
  alljets_phi_branch = tree->GetBranch("alljets_phi");
  if (alljets_phi_branch) alljets_phi_branch->SetAddress(&alljets_phi_);
  alljets_csv_branch = tree->GetBranch("alljets_csv");
  if (alljets_csv_branch) alljets_csv_branch->SetAddress(&alljets_csv_);
  jets_pt_branch = tree->GetBranch("jets_pt");
  if (jets_pt_branch) jets_pt_branch->SetAddress(&jets_pt_);
  jets_eta_branch = tree->GetBranch("jets_eta");
  if (jets_eta_branch) jets_eta_branch->SetAddress(&jets_eta_);
  jets_phi_branch = tree->GetBranch("jets_phi");
  if (jets_phi_branch) jets_phi_branch->SetAddress(&jets_phi_);
  jets_csv_branch = tree->GetBranch("jets_csv");
  if (jets_csv_branch) jets_csv_branch->SetAddress(&jets_csv_);
  jets_up_pt_branch = tree->GetBranch("jets_up_pt");
  if (jets_up_pt_branch) jets_up_pt_branch->SetAddress(&jets_up_pt_);
  jets_up_eta_branch = tree->GetBranch("jets_up_eta");
  if (jets_up_eta_branch) jets_up_eta_branch->SetAddress(&jets_up_eta_);
  jets_up_phi_branch = tree->GetBranch("jets_up_phi");
  if (jets_up_phi_branch) jets_up_phi_branch->SetAddress(&jets_up_phi_);
  jets_up_csv_branch = tree->GetBranch("jets_up_csv");
  if (jets_up_csv_branch) jets_up_csv_branch->SetAddress(&jets_up_csv_);
  jets_dn_pt_branch = tree->GetBranch("jets_dn_pt");
  if (jets_dn_pt_branch) jets_dn_pt_branch->SetAddress(&jets_dn_pt_);
  jets_dn_eta_branch = tree->GetBranch("jets_dn_eta");
  if (jets_dn_eta_branch) jets_dn_eta_branch->SetAddress(&jets_dn_eta_);
  jets_dn_phi_branch = tree->GetBranch("jets_dn_phi");
  if (jets_dn_phi_branch) jets_dn_phi_branch->SetAddress(&jets_dn_phi_);
  jets_dn_csv_branch = tree->GetBranch("jets_dn_csv");
  if (jets_dn_csv_branch) jets_dn_csv_branch->SetAddress(&jets_dn_csv_);
  nak8jets_branch = tree->GetBranch("nak8jets");
  if (nak8jets_branch) nak8jets_branch->SetAddress(&nak8jets_);
  ak8jets_pt_branch = tree->GetBranch("ak8jets_pt");
  if (ak8jets_pt_branch) ak8jets_pt_branch->SetAddress(&ak8jets_pt_);
  ak8jets_eta_branch = tree->GetBranch("ak8jets_eta");
  if (ak8jets_eta_branch) ak8jets_eta_branch->SetAddress(&ak8jets_eta_);
  ak8jets_phi_branch = tree->GetBranch("ak8jets_phi");
  if (ak8jets_phi_branch) ak8jets_phi_branch->SetAddress(&ak8jets_phi_);
  ak8jets_softdropMass_branch = tree->GetBranch("ak8jets_softdropMass");
  if (ak8jets_softdropMass_branch) ak8jets_softdropMass_branch->SetAddress(&ak8jets_softdropMass_);
  ak8jets_prunedMass_branch = tree->GetBranch("ak8jets_prunedMass");
  if (ak8jets_prunedMass_branch) ak8jets_prunedMass_branch->SetAddress(&ak8jets_prunedMass_);
  ak8jets_trimmedMass_branch = tree->GetBranch("ak8jets_trimmedMass");
  if (ak8jets_trimmedMass_branch) ak8jets_trimmedMass_branch->SetAddress(&ak8jets_trimmedMass_);
  ak8jets_mass_branch = tree->GetBranch("ak8jets_mass");
  if (ak8jets_mass_branch) ak8jets_mass_branch->SetAddress(&ak8jets_mass_);
  ak8jets_nJettinessTau1_branch = tree->GetBranch("ak8jets_nJettinessTau1");
  if (ak8jets_nJettinessTau1_branch) ak8jets_nJettinessTau1_branch->SetAddress(&ak8jets_nJettinessTau1_);
  ak8jets_nJettinessTau2_branch = tree->GetBranch("ak8jets_nJettinessTau2");
  if (ak8jets_nJettinessTau2_branch) ak8jets_nJettinessTau2_branch->SetAddress(&ak8jets_nJettinessTau2_);
  ak8jets_softdropPuppiSubjet1_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet1");
  if (ak8jets_softdropPuppiSubjet1_branch) ak8jets_softdropPuppiSubjet1_branch->SetAddress(&ak8jets_softdropPuppiSubjet1_);
  ak8jets_softdropPuppiSubjet2_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet2");
  if (ak8jets_softdropPuppiSubjet2_branch) ak8jets_softdropPuppiSubjet2_branch->SetAddress(&ak8jets_softdropPuppiSubjet2_);
  ak8jets_puppi_softdropMass_branch = tree->GetBranch("ak8jets_puppi_softdropMass");
  if (ak8jets_puppi_softdropMass_branch) ak8jets_puppi_softdropMass_branch->SetAddress(&ak8jets_puppi_softdropMass_);
  ak8jets_puppi_nJettinessTau1_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau1");
  if (ak8jets_puppi_nJettinessTau1_branch) ak8jets_puppi_nJettinessTau1_branch->SetAddress(&ak8jets_puppi_nJettinessTau1_);
  ak8jets_puppi_nJettinessTau2_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau2");
  if (ak8jets_puppi_nJettinessTau2_branch) ak8jets_puppi_nJettinessTau2_branch->SetAddress(&ak8jets_puppi_nJettinessTau2_);
  ak8jets_puppi_eta_branch = tree->GetBranch("ak8jets_puppi_eta");
  if (ak8jets_puppi_eta_branch) ak8jets_puppi_eta_branch->SetAddress(&ak8jets_puppi_eta_);
  ak8jets_puppi_phi_branch = tree->GetBranch("ak8jets_puppi_phi");
  if (ak8jets_puppi_phi_branch) ak8jets_puppi_phi_branch->SetAddress(&ak8jets_puppi_phi_);
  ak8jets_puppi_pt_branch = tree->GetBranch("ak8jets_puppi_pt");
  if (ak8jets_puppi_pt_branch) ak8jets_puppi_pt_branch->SetAddress(&ak8jets_puppi_pt_);
  ak8jets_puppi_mass_branch = tree->GetBranch("ak8jets_puppi_mass");
  if (ak8jets_puppi_mass_branch) ak8jets_puppi_mass_branch->SetAddress(&ak8jets_puppi_mass_);
  jets_pt_0_branch = tree->GetBranch("jets_pt_0");
  if (jets_pt_0_branch) jets_pt_0_branch->SetAddress(&jets_pt_0_);
  jets_pt_1_branch = tree->GetBranch("jets_pt_1");
  if (jets_pt_1_branch) jets_pt_1_branch->SetAddress(&jets_pt_1_);
  jets_pt_2_branch = tree->GetBranch("jets_pt_2");
  if (jets_pt_2_branch) jets_pt_2_branch->SetAddress(&jets_pt_2_);
  jets_eta_0_branch = tree->GetBranch("jets_eta_0");
  if (jets_eta_0_branch) jets_eta_0_branch->SetAddress(&jets_eta_0_);
  jets_eta_1_branch = tree->GetBranch("jets_eta_1");
  if (jets_eta_1_branch) jets_eta_1_branch->SetAddress(&jets_eta_1_);
  jets_eta_2_branch = tree->GetBranch("jets_eta_2");
  if (jets_eta_2_branch) jets_eta_2_branch->SetAddress(&jets_eta_2_);
  jets_phi_0_branch = tree->GetBranch("jets_phi_0");
  if (jets_phi_0_branch) jets_phi_0_branch->SetAddress(&jets_phi_0_);
  jets_phi_1_branch = tree->GetBranch("jets_phi_1");
  if (jets_phi_1_branch) jets_phi_1_branch->SetAddress(&jets_phi_1_);
  jets_phi_2_branch = tree->GetBranch("jets_phi_2");
  if (jets_phi_2_branch) jets_phi_2_branch->SetAddress(&jets_phi_2_);
  jets_csv_0_branch = tree->GetBranch("jets_csv_0");
  if (jets_csv_0_branch) jets_csv_0_branch->SetAddress(&jets_csv_0_);
  jets_csv_1_branch = tree->GetBranch("jets_csv_1");
  if (jets_csv_1_branch) jets_csv_1_branch->SetAddress(&jets_csv_1_);
  jets_csv_2_branch = tree->GetBranch("jets_csv_2");
  if (jets_csv_2_branch) jets_csv_2_branch->SetAddress(&jets_csv_2_);
  jets_up_pt_0_branch = tree->GetBranch("jets_up_pt_0");
  if (jets_up_pt_0_branch) jets_up_pt_0_branch->SetAddress(&jets_up_pt_0_);
  jets_up_pt_1_branch = tree->GetBranch("jets_up_pt_1");
  if (jets_up_pt_1_branch) jets_up_pt_1_branch->SetAddress(&jets_up_pt_1_);
  jets_up_pt_2_branch = tree->GetBranch("jets_up_pt_2");
  if (jets_up_pt_2_branch) jets_up_pt_2_branch->SetAddress(&jets_up_pt_2_);
  jets_up_eta_0_branch = tree->GetBranch("jets_up_eta_0");
  if (jets_up_eta_0_branch) jets_up_eta_0_branch->SetAddress(&jets_up_eta_0_);
  jets_up_eta_1_branch = tree->GetBranch("jets_up_eta_1");
  if (jets_up_eta_1_branch) jets_up_eta_1_branch->SetAddress(&jets_up_eta_1_);
  jets_up_eta_2_branch = tree->GetBranch("jets_up_eta_2");
  if (jets_up_eta_2_branch) jets_up_eta_2_branch->SetAddress(&jets_up_eta_2_);
  jets_up_phi_0_branch = tree->GetBranch("jets_up_phi_0");
  if (jets_up_phi_0_branch) jets_up_phi_0_branch->SetAddress(&jets_up_phi_0_);
  jets_up_phi_1_branch = tree->GetBranch("jets_up_phi_1");
  if (jets_up_phi_1_branch) jets_up_phi_1_branch->SetAddress(&jets_up_phi_1_);
  jets_up_phi_2_branch = tree->GetBranch("jets_up_phi_2");
  if (jets_up_phi_2_branch) jets_up_phi_2_branch->SetAddress(&jets_up_phi_2_);
  jets_up_csv_0_branch = tree->GetBranch("jets_up_csv_0");
  if (jets_up_csv_0_branch) jets_up_csv_0_branch->SetAddress(&jets_up_csv_0_);
  jets_up_csv_1_branch = tree->GetBranch("jets_up_csv_1");
  if (jets_up_csv_1_branch) jets_up_csv_1_branch->SetAddress(&jets_up_csv_1_);
  jets_up_csv_2_branch = tree->GetBranch("jets_up_csv_2");
  if (jets_up_csv_2_branch) jets_up_csv_2_branch->SetAddress(&jets_up_csv_2_);
  jets_dn_pt_0_branch = tree->GetBranch("jets_dn_pt_0");
  if (jets_dn_pt_0_branch) jets_dn_pt_0_branch->SetAddress(&jets_dn_pt_0_);
  jets_dn_pt_1_branch = tree->GetBranch("jets_dn_pt_1");
  if (jets_dn_pt_1_branch) jets_dn_pt_1_branch->SetAddress(&jets_dn_pt_1_);
  jets_dn_pt_2_branch = tree->GetBranch("jets_dn_pt_2");
  if (jets_dn_pt_2_branch) jets_dn_pt_2_branch->SetAddress(&jets_dn_pt_2_);
  jets_dn_eta_0_branch = tree->GetBranch("jets_dn_eta_0");
  if (jets_dn_eta_0_branch) jets_dn_eta_0_branch->SetAddress(&jets_dn_eta_0_);
  jets_dn_eta_1_branch = tree->GetBranch("jets_dn_eta_1");
  if (jets_dn_eta_1_branch) jets_dn_eta_1_branch->SetAddress(&jets_dn_eta_1_);
  jets_dn_eta_2_branch = tree->GetBranch("jets_dn_eta_2");
  if (jets_dn_eta_2_branch) jets_dn_eta_2_branch->SetAddress(&jets_dn_eta_2_);
  jets_dn_phi_0_branch = tree->GetBranch("jets_dn_phi_0");
  if (jets_dn_phi_0_branch) jets_dn_phi_0_branch->SetAddress(&jets_dn_phi_0_);
  jets_dn_phi_1_branch = tree->GetBranch("jets_dn_phi_1");
  if (jets_dn_phi_1_branch) jets_dn_phi_1_branch->SetAddress(&jets_dn_phi_1_);
  jets_dn_phi_2_branch = tree->GetBranch("jets_dn_phi_2");
  if (jets_dn_phi_2_branch) jets_dn_phi_2_branch->SetAddress(&jets_dn_phi_2_);
  jets_dn_csv_0_branch = tree->GetBranch("jets_dn_csv_0");
  if (jets_dn_csv_0_branch) jets_dn_csv_0_branch->SetAddress(&jets_dn_csv_0_);
  jets_dn_csv_1_branch = tree->GetBranch("jets_dn_csv_1");
  if (jets_dn_csv_1_branch) jets_dn_csv_1_branch->SetAddress(&jets_dn_csv_1_);
  jets_dn_csv_2_branch = tree->GetBranch("jets_dn_csv_2");
  if (jets_dn_csv_2_branch) jets_dn_csv_2_branch->SetAddress(&jets_dn_csv_2_);
  ak8jets_pt_0_branch = tree->GetBranch("ak8jets_pt_0");
  if (ak8jets_pt_0_branch) ak8jets_pt_0_branch->SetAddress(&ak8jets_pt_0_);
  ak8jets_pt_1_branch = tree->GetBranch("ak8jets_pt_1");
  if (ak8jets_pt_1_branch) ak8jets_pt_1_branch->SetAddress(&ak8jets_pt_1_);
  ak8jets_pt_2_branch = tree->GetBranch("ak8jets_pt_2");
  if (ak8jets_pt_2_branch) ak8jets_pt_2_branch->SetAddress(&ak8jets_pt_2_);
  ak8jets_eta_0_branch = tree->GetBranch("ak8jets_eta_0");
  if (ak8jets_eta_0_branch) ak8jets_eta_0_branch->SetAddress(&ak8jets_eta_0_);
  ak8jets_eta_1_branch = tree->GetBranch("ak8jets_eta_1");
  if (ak8jets_eta_1_branch) ak8jets_eta_1_branch->SetAddress(&ak8jets_eta_1_);
  ak8jets_eta_2_branch = tree->GetBranch("ak8jets_eta_2");
  if (ak8jets_eta_2_branch) ak8jets_eta_2_branch->SetAddress(&ak8jets_eta_2_);
  ak8jets_phi_0_branch = tree->GetBranch("ak8jets_phi_0");
  if (ak8jets_phi_0_branch) ak8jets_phi_0_branch->SetAddress(&ak8jets_phi_0_);
  ak8jets_phi_1_branch = tree->GetBranch("ak8jets_phi_1");
  if (ak8jets_phi_1_branch) ak8jets_phi_1_branch->SetAddress(&ak8jets_phi_1_);
  ak8jets_phi_2_branch = tree->GetBranch("ak8jets_phi_2");
  if (ak8jets_phi_2_branch) ak8jets_phi_2_branch->SetAddress(&ak8jets_phi_2_);
  ak8jets_softdropMass_0_branch = tree->GetBranch("ak8jets_softdropMass_0");
  if (ak8jets_softdropMass_0_branch) ak8jets_softdropMass_0_branch->SetAddress(&ak8jets_softdropMass_0_);
  ak8jets_softdropMass_1_branch = tree->GetBranch("ak8jets_softdropMass_1");
  if (ak8jets_softdropMass_1_branch) ak8jets_softdropMass_1_branch->SetAddress(&ak8jets_softdropMass_1_);
  ak8jets_softdropMass_2_branch = tree->GetBranch("ak8jets_softdropMass_2");
  if (ak8jets_softdropMass_2_branch) ak8jets_softdropMass_2_branch->SetAddress(&ak8jets_softdropMass_2_);
  ak8jets_prunedMass_0_branch = tree->GetBranch("ak8jets_prunedMass_0");
  if (ak8jets_prunedMass_0_branch) ak8jets_prunedMass_0_branch->SetAddress(&ak8jets_prunedMass_0_);
  ak8jets_prunedMass_1_branch = tree->GetBranch("ak8jets_prunedMass_1");
  if (ak8jets_prunedMass_1_branch) ak8jets_prunedMass_1_branch->SetAddress(&ak8jets_prunedMass_1_);
  ak8jets_prunedMass_2_branch = tree->GetBranch("ak8jets_prunedMass_2");
  if (ak8jets_prunedMass_2_branch) ak8jets_prunedMass_2_branch->SetAddress(&ak8jets_prunedMass_2_);
  ak8jets_trimmedMass_0_branch = tree->GetBranch("ak8jets_trimmedMass_0");
  if (ak8jets_trimmedMass_0_branch) ak8jets_trimmedMass_0_branch->SetAddress(&ak8jets_trimmedMass_0_);
  ak8jets_trimmedMass_1_branch = tree->GetBranch("ak8jets_trimmedMass_1");
  if (ak8jets_trimmedMass_1_branch) ak8jets_trimmedMass_1_branch->SetAddress(&ak8jets_trimmedMass_1_);
  ak8jets_trimmedMass_2_branch = tree->GetBranch("ak8jets_trimmedMass_2");
  if (ak8jets_trimmedMass_2_branch) ak8jets_trimmedMass_2_branch->SetAddress(&ak8jets_trimmedMass_2_);
  ak8jets_mass_0_branch = tree->GetBranch("ak8jets_mass_0");
  if (ak8jets_mass_0_branch) ak8jets_mass_0_branch->SetAddress(&ak8jets_mass_0_);
  ak8jets_mass_1_branch = tree->GetBranch("ak8jets_mass_1");
  if (ak8jets_mass_1_branch) ak8jets_mass_1_branch->SetAddress(&ak8jets_mass_1_);
  ak8jets_mass_2_branch = tree->GetBranch("ak8jets_mass_2");
  if (ak8jets_mass_2_branch) ak8jets_mass_2_branch->SetAddress(&ak8jets_mass_2_);
  ak8jets_nJettinessTau1_0_branch = tree->GetBranch("ak8jets_nJettinessTau1_0");
  if (ak8jets_nJettinessTau1_0_branch) ak8jets_nJettinessTau1_0_branch->SetAddress(&ak8jets_nJettinessTau1_0_);
  ak8jets_nJettinessTau1_1_branch = tree->GetBranch("ak8jets_nJettinessTau1_1");
  if (ak8jets_nJettinessTau1_1_branch) ak8jets_nJettinessTau1_1_branch->SetAddress(&ak8jets_nJettinessTau1_1_);
  ak8jets_nJettinessTau1_2_branch = tree->GetBranch("ak8jets_nJettinessTau1_2");
  if (ak8jets_nJettinessTau1_2_branch) ak8jets_nJettinessTau1_2_branch->SetAddress(&ak8jets_nJettinessTau1_2_);
  ak8jets_nJettinessTau2_0_branch = tree->GetBranch("ak8jets_nJettinessTau2_0");
  if (ak8jets_nJettinessTau2_0_branch) ak8jets_nJettinessTau2_0_branch->SetAddress(&ak8jets_nJettinessTau2_0_);
  ak8jets_nJettinessTau2_1_branch = tree->GetBranch("ak8jets_nJettinessTau2_1");
  if (ak8jets_nJettinessTau2_1_branch) ak8jets_nJettinessTau2_1_branch->SetAddress(&ak8jets_nJettinessTau2_1_);
  ak8jets_nJettinessTau2_2_branch = tree->GetBranch("ak8jets_nJettinessTau2_2");
  if (ak8jets_nJettinessTau2_2_branch) ak8jets_nJettinessTau2_2_branch->SetAddress(&ak8jets_nJettinessTau2_2_);
  ak8jets_softdropPuppiSubjet1_0_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet1_0");
  if (ak8jets_softdropPuppiSubjet1_0_branch) ak8jets_softdropPuppiSubjet1_0_branch->SetAddress(&ak8jets_softdropPuppiSubjet1_0_);
  ak8jets_softdropPuppiSubjet1_1_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet1_1");
  if (ak8jets_softdropPuppiSubjet1_1_branch) ak8jets_softdropPuppiSubjet1_1_branch->SetAddress(&ak8jets_softdropPuppiSubjet1_1_);
  ak8jets_softdropPuppiSubjet1_2_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet1_2");
  if (ak8jets_softdropPuppiSubjet1_2_branch) ak8jets_softdropPuppiSubjet1_2_branch->SetAddress(&ak8jets_softdropPuppiSubjet1_2_);
  ak8jets_softdropPuppiSubjet2_0_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet2_0");
  if (ak8jets_softdropPuppiSubjet2_0_branch) ak8jets_softdropPuppiSubjet2_0_branch->SetAddress(&ak8jets_softdropPuppiSubjet2_0_);
  ak8jets_softdropPuppiSubjet2_1_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet2_1");
  if (ak8jets_softdropPuppiSubjet2_1_branch) ak8jets_softdropPuppiSubjet2_1_branch->SetAddress(&ak8jets_softdropPuppiSubjet2_1_);
  ak8jets_softdropPuppiSubjet2_2_branch = tree->GetBranch("ak8jets_softdropPuppiSubjet2_2");
  if (ak8jets_softdropPuppiSubjet2_2_branch) ak8jets_softdropPuppiSubjet2_2_branch->SetAddress(&ak8jets_softdropPuppiSubjet2_2_);
  ak8jets_puppi_softdropMass_0_branch = tree->GetBranch("ak8jets_puppi_softdropMass_0");
  if (ak8jets_puppi_softdropMass_0_branch) ak8jets_puppi_softdropMass_0_branch->SetAddress(&ak8jets_puppi_softdropMass_0_);
  ak8jets_puppi_softdropMass_1_branch = tree->GetBranch("ak8jets_puppi_softdropMass_1");
  if (ak8jets_puppi_softdropMass_1_branch) ak8jets_puppi_softdropMass_1_branch->SetAddress(&ak8jets_puppi_softdropMass_1_);
  ak8jets_puppi_softdropMass_2_branch = tree->GetBranch("ak8jets_puppi_softdropMass_2");
  if (ak8jets_puppi_softdropMass_2_branch) ak8jets_puppi_softdropMass_2_branch->SetAddress(&ak8jets_puppi_softdropMass_2_);
  ak8jets_puppi_nJettinessTau1_0_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau1_0");
  if (ak8jets_puppi_nJettinessTau1_0_branch) ak8jets_puppi_nJettinessTau1_0_branch->SetAddress(&ak8jets_puppi_nJettinessTau1_0_);
  ak8jets_puppi_nJettinessTau1_1_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau1_1");
  if (ak8jets_puppi_nJettinessTau1_1_branch) ak8jets_puppi_nJettinessTau1_1_branch->SetAddress(&ak8jets_puppi_nJettinessTau1_1_);
  ak8jets_puppi_nJettinessTau1_2_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau1_2");
  if (ak8jets_puppi_nJettinessTau1_2_branch) ak8jets_puppi_nJettinessTau1_2_branch->SetAddress(&ak8jets_puppi_nJettinessTau1_2_);
  ak8jets_puppi_nJettinessTau2_0_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau2_0");
  if (ak8jets_puppi_nJettinessTau2_0_branch) ak8jets_puppi_nJettinessTau2_0_branch->SetAddress(&ak8jets_puppi_nJettinessTau2_0_);
  ak8jets_puppi_nJettinessTau2_1_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau2_1");
  if (ak8jets_puppi_nJettinessTau2_1_branch) ak8jets_puppi_nJettinessTau2_1_branch->SetAddress(&ak8jets_puppi_nJettinessTau2_1_);
  ak8jets_puppi_nJettinessTau2_2_branch = tree->GetBranch("ak8jets_puppi_nJettinessTau2_2");
  if (ak8jets_puppi_nJettinessTau2_2_branch) ak8jets_puppi_nJettinessTau2_2_branch->SetAddress(&ak8jets_puppi_nJettinessTau2_2_);
  ak8jets_puppi_eta_0_branch = tree->GetBranch("ak8jets_puppi_eta_0");
  if (ak8jets_puppi_eta_0_branch) ak8jets_puppi_eta_0_branch->SetAddress(&ak8jets_puppi_eta_0_);
  ak8jets_puppi_eta_1_branch = tree->GetBranch("ak8jets_puppi_eta_1");
  if (ak8jets_puppi_eta_1_branch) ak8jets_puppi_eta_1_branch->SetAddress(&ak8jets_puppi_eta_1_);
  ak8jets_puppi_eta_2_branch = tree->GetBranch("ak8jets_puppi_eta_2");
  if (ak8jets_puppi_eta_2_branch) ak8jets_puppi_eta_2_branch->SetAddress(&ak8jets_puppi_eta_2_);
  ak8jets_puppi_phi_0_branch = tree->GetBranch("ak8jets_puppi_phi_0");
  if (ak8jets_puppi_phi_0_branch) ak8jets_puppi_phi_0_branch->SetAddress(&ak8jets_puppi_phi_0_);
  ak8jets_puppi_phi_1_branch = tree->GetBranch("ak8jets_puppi_phi_1");
  if (ak8jets_puppi_phi_1_branch) ak8jets_puppi_phi_1_branch->SetAddress(&ak8jets_puppi_phi_1_);
  ak8jets_puppi_phi_2_branch = tree->GetBranch("ak8jets_puppi_phi_2");
  if (ak8jets_puppi_phi_2_branch) ak8jets_puppi_phi_2_branch->SetAddress(&ak8jets_puppi_phi_2_);
  ak8jets_puppi_pt_0_branch = tree->GetBranch("ak8jets_puppi_pt_0");
  if (ak8jets_puppi_pt_0_branch) ak8jets_puppi_pt_0_branch->SetAddress(&ak8jets_puppi_pt_0_);
  ak8jets_puppi_pt_1_branch = tree->GetBranch("ak8jets_puppi_pt_1");
  if (ak8jets_puppi_pt_1_branch) ak8jets_puppi_pt_1_branch->SetAddress(&ak8jets_puppi_pt_1_);
  ak8jets_puppi_pt_2_branch = tree->GetBranch("ak8jets_puppi_pt_2");
  if (ak8jets_puppi_pt_2_branch) ak8jets_puppi_pt_2_branch->SetAddress(&ak8jets_puppi_pt_2_);
  ak8jets_puppi_mass_0_branch = tree->GetBranch("ak8jets_puppi_mass_0");
  if (ak8jets_puppi_mass_0_branch) ak8jets_puppi_mass_0_branch->SetAddress(&ak8jets_puppi_mass_0_);
  ak8jets_puppi_mass_1_branch = tree->GetBranch("ak8jets_puppi_mass_1");
  if (ak8jets_puppi_mass_1_branch) ak8jets_puppi_mass_1_branch->SetAddress(&ak8jets_puppi_mass_1_);
  ak8jets_puppi_mass_2_branch = tree->GetBranch("ak8jets_puppi_mass_2");
  if (ak8jets_puppi_mass_2_branch) ak8jets_puppi_mass_2_branch->SetAddress(&ak8jets_puppi_mass_2_);
  weight_btagsf_branch = tree->GetBranch("weight_btagsf");
  if (weight_btagsf_branch) weight_btagsf_branch->SetAddress(&weight_btagsf_);
  weight_btagsf_heavy_DN_branch = tree->GetBranch("weight_btagsf_heavy_DN");
  if (weight_btagsf_heavy_DN_branch) weight_btagsf_heavy_DN_branch->SetAddress(&weight_btagsf_heavy_DN_);
  weight_btagsf_heavy_UP_branch = tree->GetBranch("weight_btagsf_heavy_UP");
  if (weight_btagsf_heavy_UP_branch) weight_btagsf_heavy_UP_branch->SetAddress(&weight_btagsf_heavy_UP_);
  weight_btagsf_light_DN_branch = tree->GetBranch("weight_btagsf_light_DN");
  if (weight_btagsf_light_DN_branch) weight_btagsf_light_DN_branch->SetAddress(&weight_btagsf_light_DN_);
  weight_btagsf_light_UP_branch = tree->GetBranch("weight_btagsf_light_UP");
  if (weight_btagsf_light_UP_branch) weight_btagsf_light_UP_branch->SetAddress(&weight_btagsf_light_UP_);
  met_pt_branch = tree->GetBranch("met_pt");
  if (met_pt_branch) met_pt_branch->SetAddress(&met_pt_);
  met_phi_branch = tree->GetBranch("met_phi");
  if (met_phi_branch) met_phi_branch->SetAddress(&met_phi_);
  met_up_pt_branch = tree->GetBranch("met_up_pt");
  if (met_up_pt_branch) met_up_pt_branch->SetAddress(&met_up_pt_);
  met_up_phi_branch = tree->GetBranch("met_up_phi");
  if (met_up_phi_branch) met_up_phi_branch->SetAddress(&met_up_phi_);
  met_dn_pt_branch = tree->GetBranch("met_dn_pt");
  if (met_dn_pt_branch) met_dn_pt_branch->SetAddress(&met_dn_pt_);
  met_dn_phi_branch = tree->GetBranch("met_dn_phi");
  if (met_dn_phi_branch) met_dn_phi_branch->SetAddress(&met_dn_phi_);
  met_gen_pt_branch = tree->GetBranch("met_gen_pt");
  if (met_gen_pt_branch) met_gen_pt_branch->SetAddress(&met_gen_pt_);
  met_gen_phi_branch = tree->GetBranch("met_gen_phi");
  if (met_gen_phi_branch) met_gen_phi_branch->SetAddress(&met_gen_phi_);
  gen_ht_branch = tree->GetBranch("gen_ht");
  if (gen_ht_branch) gen_ht_branch->SetAddress(&gen_ht_);
  isr_leadjet_dr_branch = tree->GetBranch("isr_leadjet_dr");
  if (isr_leadjet_dr_branch) isr_leadjet_dr_branch->SetAddress(&isr_leadjet_dr_);
  higgs_met_dphi_branch = tree->GetBranch("higgs_met_dphi");
  if (higgs_met_dphi_branch) higgs_met_dphi_branch->SetAddress(&higgs_met_dphi_);
  isr_recoisr_dr_branch = tree->GetBranch("isr_recoisr_dr");
  if (isr_recoisr_dr_branch) isr_recoisr_dr_branch->SetAddress(&isr_recoisr_dr_);
  isr_recoisrmegajet_dr_branch = tree->GetBranch("isr_recoisrmegajet_dr");
  if (isr_recoisrmegajet_dr_branch) isr_recoisrmegajet_dr_branch->SetAddress(&isr_recoisrmegajet_dr_);
  lepton_met_dphi_branch = tree->GetBranch("lepton_met_dphi");
  if (lepton_met_dphi_branch) lepton_met_dphi_branch->SetAddress(&lepton_met_dphi_);
  quark0_met_dphi_branch = tree->GetBranch("quark0_met_dphi");
  if (quark0_met_dphi_branch) quark0_met_dphi_branch->SetAddress(&quark0_met_dphi_);
  quark1_met_dphi_branch = tree->GetBranch("quark1_met_dphi");
  if (quark1_met_dphi_branch) quark1_met_dphi_branch->SetAddress(&quark1_met_dphi_);
  wlep_met_dphi_branch = tree->GetBranch("wlep_met_dphi");
  if (wlep_met_dphi_branch) wlep_met_dphi_branch->SetAddress(&wlep_met_dphi_);
  whad_met_dphi_branch = tree->GetBranch("whad_met_dphi");
  if (whad_met_dphi_branch) whad_met_dphi_branch->SetAddress(&whad_met_dphi_);
  whad_recowhad_dr_branch = tree->GetBranch("whad_recowhad_dr");
  if (whad_recowhad_dr_branch) whad_recowhad_dr_branch->SetAddress(&whad_recowhad_dr_);
  whad_recowhad_dphi_branch = tree->GetBranch("whad_recowhad_dphi");
  if (whad_recowhad_dphi_branch) whad_recowhad_dphi_branch->SetAddress(&whad_recowhad_dphi_);
  whad_recowhad_deta_branch = tree->GetBranch("whad_recowhad_deta");
  if (whad_recowhad_deta_branch) whad_recowhad_deta_branch->SetAddress(&whad_recowhad_deta_);
  whad_recowhad_ptratio_branch = tree->GetBranch("whad_recowhad_ptratio");
  if (whad_recowhad_ptratio_branch) whad_recowhad_ptratio_branch->SetAddress(&whad_recowhad_ptratio_);
  higgs_recowhad_dr_branch = tree->GetBranch("higgs_recowhad_dr");
  if (higgs_recowhad_dr_branch) higgs_recowhad_dr_branch->SetAddress(&higgs_recowhad_dr_);
  higgs_recowhad_dphi_branch = tree->GetBranch("higgs_recowhad_dphi");
  if (higgs_recowhad_dphi_branch) higgs_recowhad_dphi_branch->SetAddress(&higgs_recowhad_dphi_);
  higgs_recowhad_deta_branch = tree->GetBranch("higgs_recowhad_deta");
  if (higgs_recowhad_deta_branch) higgs_recowhad_deta_branch->SetAddress(&higgs_recowhad_deta_);
  higgs_recowhad_ptratio_branch = tree->GetBranch("higgs_recowhad_ptratio");
  if (higgs_recowhad_ptratio_branch) higgs_recowhad_ptratio_branch->SetAddress(&higgs_recowhad_ptratio_);
  whad_leadak8_dr_branch = tree->GetBranch("whad_leadak8_dr");
  if (whad_leadak8_dr_branch) whad_leadak8_dr_branch->SetAddress(&whad_leadak8_dr_);
  whad_leadak8_dphi_branch = tree->GetBranch("whad_leadak8_dphi");
  if (whad_leadak8_dphi_branch) whad_leadak8_dphi_branch->SetAddress(&whad_leadak8_dphi_);
  whad_leadak8_deta_branch = tree->GetBranch("whad_leadak8_deta");
  if (whad_leadak8_deta_branch) whad_leadak8_deta_branch->SetAddress(&whad_leadak8_deta_);
  whad_leadak8_ptratio_branch = tree->GetBranch("whad_leadak8_ptratio");
  if (whad_leadak8_ptratio_branch) whad_leadak8_ptratio_branch->SetAddress(&whad_leadak8_ptratio_);
  higgs_leadak8_dr_branch = tree->GetBranch("higgs_leadak8_dr");
  if (higgs_leadak8_dr_branch) higgs_leadak8_dr_branch->SetAddress(&higgs_leadak8_dr_);
  higgs_leadak8_dphi_branch = tree->GetBranch("higgs_leadak8_dphi");
  if (higgs_leadak8_dphi_branch) higgs_leadak8_dphi_branch->SetAddress(&higgs_leadak8_dphi_);
  higgs_leadak8_deta_branch = tree->GetBranch("higgs_leadak8_deta");
  if (higgs_leadak8_deta_branch) higgs_leadak8_deta_branch->SetAddress(&higgs_leadak8_deta_);
  higgs_leadak8_ptratio_branch = tree->GetBranch("higgs_leadak8_ptratio");
  if (higgs_leadak8_ptratio_branch) higgs_leadak8_ptratio_branch->SetAddress(&higgs_leadak8_ptratio_);
  lepton_recolep_dr_branch = tree->GetBranch("lepton_recolep_dr");
  if (lepton_recolep_dr_branch) lepton_recolep_dr_branch->SetAddress(&lepton_recolep_dr_);
  lepton_recolep_deta_branch = tree->GetBranch("lepton_recolep_deta");
  if (lepton_recolep_deta_branch) lepton_recolep_deta_branch->SetAddress(&lepton_recolep_deta_);
  lepton_recolep_dphi_branch = tree->GetBranch("lepton_recolep_dphi");
  if (lepton_recolep_dphi_branch) lepton_recolep_dphi_branch->SetAddress(&lepton_recolep_dphi_);
  lepton_recolep_ptratio_branch = tree->GetBranch("lepton_recolep_ptratio");
  if (lepton_recolep_ptratio_branch) lepton_recolep_ptratio_branch->SetAddress(&lepton_recolep_ptratio_);
  neutrino_reconeutrino_dr_branch = tree->GetBranch("neutrino_reconeutrino_dr");
  if (neutrino_reconeutrino_dr_branch) neutrino_reconeutrino_dr_branch->SetAddress(&neutrino_reconeutrino_dr_);
  neutrino_reconeutrino_deta_branch = tree->GetBranch("neutrino_reconeutrino_deta");
  if (neutrino_reconeutrino_deta_branch) neutrino_reconeutrino_deta_branch->SetAddress(&neutrino_reconeutrino_deta_);
  neutrino_reconeutrino_dphi_branch = tree->GetBranch("neutrino_reconeutrino_dphi");
  if (neutrino_reconeutrino_dphi_branch) neutrino_reconeutrino_dphi_branch->SetAddress(&neutrino_reconeutrino_dphi_);
  neutrino_reconeutrino_dpz_branch = tree->GetBranch("neutrino_reconeutrino_dpz");
  if (neutrino_reconeutrino_dpz_branch) neutrino_reconeutrino_dpz_branch->SetAddress(&neutrino_reconeutrino_dpz_);
  neutrino_reconeutrino_dabspz_branch = tree->GetBranch("neutrino_reconeutrino_dabspz");
  if (neutrino_reconeutrino_dabspz_branch) neutrino_reconeutrino_dabspz_branch->SetAddress(&neutrino_reconeutrino_dabspz_);
  neutrino_reconeutrino_ptratio_branch = tree->GetBranch("neutrino_reconeutrino_ptratio");
  if (neutrino_reconeutrino_ptratio_branch) neutrino_reconeutrino_ptratio_branch->SetAddress(&neutrino_reconeutrino_ptratio_);
  recohiggs_pt_branch = tree->GetBranch("recohiggs_pt");
  if (recohiggs_pt_branch) recohiggs_pt_branch->SetAddress(&recohiggs_pt_);
  recohiggs_eta_branch = tree->GetBranch("recohiggs_eta");
  if (recohiggs_eta_branch) recohiggs_eta_branch->SetAddress(&recohiggs_eta_);
  recohiggs_phi_branch = tree->GetBranch("recohiggs_phi");
  if (recohiggs_phi_branch) recohiggs_phi_branch->SetAddress(&recohiggs_phi_);
  recohiggs_mass_branch = tree->GetBranch("recohiggs_mass");
  if (recohiggs_mass_branch) recohiggs_mass_branch->SetAddress(&recohiggs_mass_);
  recohiggs_mt_branch = tree->GetBranch("recohiggs_mt");
  if (recohiggs_mt_branch) recohiggs_mt_branch->SetAddress(&recohiggs_mt_);
  recohiggs2_pt_branch = tree->GetBranch("recohiggs2_pt");
  if (recohiggs2_pt_branch) recohiggs2_pt_branch->SetAddress(&recohiggs2_pt_);
  recohiggs2_eta_branch = tree->GetBranch("recohiggs2_eta");
  if (recohiggs2_eta_branch) recohiggs2_eta_branch->SetAddress(&recohiggs2_eta_);
  recohiggs2_phi_branch = tree->GetBranch("recohiggs2_phi");
  if (recohiggs2_phi_branch) recohiggs2_phi_branch->SetAddress(&recohiggs2_phi_);
  recohiggs2_mass_branch = tree->GetBranch("recohiggs2_mass");
  if (recohiggs2_mass_branch) recohiggs2_mass_branch->SetAddress(&recohiggs2_mass_);
  recohiggs2_mt_branch = tree->GetBranch("recohiggs2_mt");
  if (recohiggs2_mt_branch) recohiggs2_mt_branch->SetAddress(&recohiggs2_mt_);
  recohiggsinv_pt_branch = tree->GetBranch("recohiggsinv_pt");
  if (recohiggsinv_pt_branch) recohiggsinv_pt_branch->SetAddress(&recohiggsinv_pt_);
  recohiggsinv_eta_branch = tree->GetBranch("recohiggsinv_eta");
  if (recohiggsinv_eta_branch) recohiggsinv_eta_branch->SetAddress(&recohiggsinv_eta_);
  recohiggsinv_phi_branch = tree->GetBranch("recohiggsinv_phi");
  if (recohiggsinv_phi_branch) recohiggsinv_phi_branch->SetAddress(&recohiggsinv_phi_);
  recohiggsinv_mass_branch = tree->GetBranch("recohiggsinv_mass");
  if (recohiggsinv_mass_branch) recohiggsinv_mass_branch->SetAddress(&recohiggsinv_mass_);
  recohiggsinv_mt_branch = tree->GetBranch("recohiggsinv_mt");
  if (recohiggsinv_mt_branch) recohiggsinv_mt_branch->SetAddress(&recohiggsinv_mt_);
  recohiggsmin_pt_branch = tree->GetBranch("recohiggsmin_pt");
  if (recohiggsmin_pt_branch) recohiggsmin_pt_branch->SetAddress(&recohiggsmin_pt_);
  recohiggsmin_eta_branch = tree->GetBranch("recohiggsmin_eta");
  if (recohiggsmin_eta_branch) recohiggsmin_eta_branch->SetAddress(&recohiggsmin_eta_);
  recohiggsmin_phi_branch = tree->GetBranch("recohiggsmin_phi");
  if (recohiggsmin_phi_branch) recohiggsmin_phi_branch->SetAddress(&recohiggsmin_phi_);
  recohiggsmin_mass_branch = tree->GetBranch("recohiggsmin_mass");
  if (recohiggsmin_mass_branch) recohiggsmin_mass_branch->SetAddress(&recohiggsmin_mass_);
  recohiggsmin_mt_branch = tree->GetBranch("recohiggsmin_mt");
  if (recohiggsmin_mt_branch) recohiggsmin_mt_branch->SetAddress(&recohiggsmin_mt_);
  recohiggsmin12_pt_branch = tree->GetBranch("recohiggsmin12_pt");
  if (recohiggsmin12_pt_branch) recohiggsmin12_pt_branch->SetAddress(&recohiggsmin12_pt_);
  recohiggsmin12_eta_branch = tree->GetBranch("recohiggsmin12_eta");
  if (recohiggsmin12_eta_branch) recohiggsmin12_eta_branch->SetAddress(&recohiggsmin12_eta_);
  recohiggsmin12_phi_branch = tree->GetBranch("recohiggsmin12_phi");
  if (recohiggsmin12_phi_branch) recohiggsmin12_phi_branch->SetAddress(&recohiggsmin12_phi_);
  recohiggsmin12_mass_branch = tree->GetBranch("recohiggsmin12_mass");
  if (recohiggsmin12_mass_branch) recohiggsmin12_mass_branch->SetAddress(&recohiggsmin12_mass_);
  recohiggsmin12_mt_branch = tree->GetBranch("recohiggsmin12_mt");
  if (recohiggsmin12_mt_branch) recohiggsmin12_mt_branch->SetAddress(&recohiggsmin12_mt_);
  recoisr_pt_branch = tree->GetBranch("recoisr_pt");
  if (recoisr_pt_branch) recoisr_pt_branch->SetAddress(&recoisr_pt_);
  recoisr_eta_branch = tree->GetBranch("recoisr_eta");
  if (recoisr_eta_branch) recoisr_eta_branch->SetAddress(&recoisr_eta_);
  recoisr_phi_branch = tree->GetBranch("recoisr_phi");
  if (recoisr_phi_branch) recoisr_phi_branch->SetAddress(&recoisr_phi_);
  recoisrmegajet_pt_branch = tree->GetBranch("recoisrmegajet_pt");
  if (recoisrmegajet_pt_branch) recoisrmegajet_pt_branch->SetAddress(&recoisrmegajet_pt_);
  recoisrmegajet_eta_branch = tree->GetBranch("recoisrmegajet_eta");
  if (recoisrmegajet_eta_branch) recoisrmegajet_eta_branch->SetAddress(&recoisrmegajet_eta_);
  recoisrmegajet_phi_branch = tree->GetBranch("recoisrmegajet_phi");
  if (recoisrmegajet_phi_branch) recoisrmegajet_phi_branch->SetAddress(&recoisrmegajet_phi_);
  recoisrmegajet_n2_pt_branch = tree->GetBranch("recoisrmegajet_n2_pt");
  if (recoisrmegajet_n2_pt_branch) recoisrmegajet_n2_pt_branch->SetAddress(&recoisrmegajet_n2_pt_);
  recoisrmegajet_n2_eta_branch = tree->GetBranch("recoisrmegajet_n2_eta");
  if (recoisrmegajet_n2_eta_branch) recoisrmegajet_n2_eta_branch->SetAddress(&recoisrmegajet_n2_eta_);
  recoisrmegajet_n2_phi_branch = tree->GetBranch("recoisrmegajet_n2_phi");
  if (recoisrmegajet_n2_phi_branch) recoisrmegajet_n2_phi_branch->SetAddress(&recoisrmegajet_n2_phi_);
  recolepton_id_branch = tree->GetBranch("recolepton_id");
  if (recolepton_id_branch) recolepton_id_branch->SetAddress(&recolepton_id_);
  recolepton_pt_branch = tree->GetBranch("recolepton_pt");
  if (recolepton_pt_branch) recolepton_pt_branch->SetAddress(&recolepton_pt_);
  recolepton_eta_branch = tree->GetBranch("recolepton_eta");
  if (recolepton_eta_branch) recolepton_eta_branch->SetAddress(&recolepton_eta_);
  recolepton_phi_branch = tree->GetBranch("recolepton_phi");
  if (recolepton_phi_branch) recolepton_phi_branch->SetAddress(&recolepton_phi_);
  recolepton_mt_branch = tree->GetBranch("recolepton_mt");
  if (recolepton_mt_branch) recolepton_mt_branch->SetAddress(&recolepton_mt_);
  recolepton_met_dphi_branch = tree->GetBranch("recolepton_met_dphi");
  if (recolepton_met_dphi_branch) recolepton_met_dphi_branch->SetAddress(&recolepton_met_dphi_);
  recoiswleplead_branch = tree->GetBranch("recoiswleplead");
  if (recoiswleplead_branch) recoiswleplead_branch->SetAddress(&recoiswleplead_);
  reconeutrino_det_branch = tree->GetBranch("reconeutrino_det");
  if (reconeutrino_det_branch) reconeutrino_det_branch->SetAddress(&reconeutrino_det_);
  reconeutrino_pt_branch = tree->GetBranch("reconeutrino_pt");
  if (reconeutrino_pt_branch) reconeutrino_pt_branch->SetAddress(&reconeutrino_pt_);
  reconeutrino_eta_branch = tree->GetBranch("reconeutrino_eta");
  if (reconeutrino_eta_branch) reconeutrino_eta_branch->SetAddress(&reconeutrino_eta_);
  reconeutrino_phi_branch = tree->GetBranch("reconeutrino_phi");
  if (reconeutrino_phi_branch) reconeutrino_phi_branch->SetAddress(&reconeutrino_phi_);
  reconeutrino_met_dphi_branch = tree->GetBranch("reconeutrino_met_dphi");
  if (reconeutrino_met_dphi_branch) reconeutrino_met_dphi_branch->SetAddress(&reconeutrino_met_dphi_);
  reconeutrino2_pt_branch = tree->GetBranch("reconeutrino2_pt");
  if (reconeutrino2_pt_branch) reconeutrino2_pt_branch->SetAddress(&reconeutrino2_pt_);
  reconeutrino2_eta_branch = tree->GetBranch("reconeutrino2_eta");
  if (reconeutrino2_eta_branch) reconeutrino2_eta_branch->SetAddress(&reconeutrino2_eta_);
  reconeutrino2_phi_branch = tree->GetBranch("reconeutrino2_phi");
  if (reconeutrino2_phi_branch) reconeutrino2_phi_branch->SetAddress(&reconeutrino2_phi_);
  reconeutrino2_met_dphi_branch = tree->GetBranch("reconeutrino2_met_dphi");
  if (reconeutrino2_met_dphi_branch) reconeutrino2_met_dphi_branch->SetAddress(&reconeutrino2_met_dphi_);
  reconeutrinoinv_pt_branch = tree->GetBranch("reconeutrinoinv_pt");
  if (reconeutrinoinv_pt_branch) reconeutrinoinv_pt_branch->SetAddress(&reconeutrinoinv_pt_);
  reconeutrinoinv_eta_branch = tree->GetBranch("reconeutrinoinv_eta");
  if (reconeutrinoinv_eta_branch) reconeutrinoinv_eta_branch->SetAddress(&reconeutrinoinv_eta_);
  reconeutrinoinv_phi_branch = tree->GetBranch("reconeutrinoinv_phi");
  if (reconeutrinoinv_phi_branch) reconeutrinoinv_phi_branch->SetAddress(&reconeutrinoinv_phi_);
  reconeutrinoinv_met_dphi_branch = tree->GetBranch("reconeutrinoinv_met_dphi");
  if (reconeutrinoinv_met_dphi_branch) reconeutrinoinv_met_dphi_branch->SetAddress(&reconeutrinoinv_met_dphi_);
  recowhad_pt_branch = tree->GetBranch("recowhad_pt");
  if (recowhad_pt_branch) recowhad_pt_branch->SetAddress(&recowhad_pt_);
  recowhad_eta_branch = tree->GetBranch("recowhad_eta");
  if (recowhad_eta_branch) recowhad_eta_branch->SetAddress(&recowhad_eta_);
  recowhad_phi_branch = tree->GetBranch("recowhad_phi");
  if (recowhad_phi_branch) recowhad_phi_branch->SetAddress(&recowhad_phi_);
  recowhad_mass_branch = tree->GetBranch("recowhad_mass");
  if (recowhad_mass_branch) recowhad_mass_branch->SetAddress(&recowhad_mass_);
  recowhad_softdropMass_branch = tree->GetBranch("recowhad_softdropMass");
  if (recowhad_softdropMass_branch) recowhad_softdropMass_branch->SetAddress(&recowhad_softdropMass_);
  recowhad_prunedMass_branch = tree->GetBranch("recowhad_prunedMass");
  if (recowhad_prunedMass_branch) recowhad_prunedMass_branch->SetAddress(&recowhad_prunedMass_);
  recowhad_nJettinessTau1_branch = tree->GetBranch("recowhad_nJettinessTau1");
  if (recowhad_nJettinessTau1_branch) recowhad_nJettinessTau1_branch->SetAddress(&recowhad_nJettinessTau1_);
  recowhad_nJettinessTau2_branch = tree->GetBranch("recowhad_nJettinessTau2");
  if (recowhad_nJettinessTau2_branch) recowhad_nJettinessTau2_branch->SetAddress(&recowhad_nJettinessTau2_);
  recowhad_puppi_softdropMass_branch = tree->GetBranch("recowhad_puppi_softdropMass");
  if (recowhad_puppi_softdropMass_branch) recowhad_puppi_softdropMass_branch->SetAddress(&recowhad_puppi_softdropMass_);
  recowhad_puppi_pt_branch = tree->GetBranch("recowhad_puppi_pt");
  if (recowhad_puppi_pt_branch) recowhad_puppi_pt_branch->SetAddress(&recowhad_puppi_pt_);
  recowhad_puppi_eta_branch = tree->GetBranch("recowhad_puppi_eta");
  if (recowhad_puppi_eta_branch) recowhad_puppi_eta_branch->SetAddress(&recowhad_puppi_eta_);
  recowhad_puppi_phi_branch = tree->GetBranch("recowhad_puppi_phi");
  if (recowhad_puppi_phi_branch) recowhad_puppi_phi_branch->SetAddress(&recowhad_puppi_phi_);
  recowhad_puppi_mass_branch = tree->GetBranch("recowhad_puppi_mass");
  if (recowhad_puppi_mass_branch) recowhad_puppi_mass_branch->SetAddress(&recowhad_puppi_mass_);
  recowhad_puppi_nJettinessTau1_branch = tree->GetBranch("recowhad_puppi_nJettinessTau1");
  if (recowhad_puppi_nJettinessTau1_branch) recowhad_puppi_nJettinessTau1_branch->SetAddress(&recowhad_puppi_nJettinessTau1_);
  recowhad_puppi_nJettinessTau2_branch = tree->GetBranch("recowhad_puppi_nJettinessTau2");
  if (recowhad_puppi_nJettinessTau2_branch) recowhad_puppi_nJettinessTau2_branch->SetAddress(&recowhad_puppi_nJettinessTau2_);
  recowhad_softdropPuppiSubjet1_branch = tree->GetBranch("recowhad_softdropPuppiSubjet1");
  if (recowhad_softdropPuppiSubjet1_branch) recowhad_softdropPuppiSubjet1_branch->SetAddress(&recowhad_softdropPuppiSubjet1_);
  recowhad_softdropPuppiSubjet2_branch = tree->GetBranch("recowhad_softdropPuppiSubjet2");
  if (recowhad_softdropPuppiSubjet2_branch) recowhad_softdropPuppiSubjet2_branch->SetAddress(&recowhad_softdropPuppiSubjet2_);
  recowlep_pt_branch = tree->GetBranch("recowlep_pt");
  if (recowlep_pt_branch) recowlep_pt_branch->SetAddress(&recowlep_pt_);
  recowlep_eta_branch = tree->GetBranch("recowlep_eta");
  if (recowlep_eta_branch) recowlep_eta_branch->SetAddress(&recowlep_eta_);
  recowlep_phi_branch = tree->GetBranch("recowlep_phi");
  if (recowlep_phi_branch) recowlep_phi_branch->SetAddress(&recowlep_phi_);
  recowlep_mass_branch = tree->GetBranch("recowlep_mass");
  if (recowlep_mass_branch) recowlep_mass_branch->SetAddress(&recowlep_mass_);
  recoleadjet_pt_branch = tree->GetBranch("recoleadjet_pt");
  if (recoleadjet_pt_branch) recoleadjet_pt_branch->SetAddress(&recoleadjet_pt_);
  recoleadjet_eta_branch = tree->GetBranch("recoleadjet_eta");
  if (recoleadjet_eta_branch) recoleadjet_eta_branch->SetAddress(&recoleadjet_eta_);
  recoleadjet_phi_branch = tree->GetBranch("recoleadjet_phi");
  if (recoleadjet_phi_branch) recoleadjet_phi_branch->SetAddress(&recoleadjet_phi_);
  recolepton_recowhad_dr_branch = tree->GetBranch("recolepton_recowhad_dr");
  if (recolepton_recowhad_dr_branch) recolepton_recowhad_dr_branch->SetAddress(&recolepton_recowhad_dr_);
  recoleadjet_recolepton_dr_branch = tree->GetBranch("recoleadjet_recolepton_dr");
  if (recoleadjet_recolepton_dr_branch) recoleadjet_recolepton_dr_branch->SetAddress(&recoleadjet_recolepton_dr_);
  recoleadjet_met_dphi_branch = tree->GetBranch("recoleadjet_met_dphi");
  if (recoleadjet_met_dphi_branch) recoleadjet_met_dphi_branch->SetAddress(&recoleadjet_met_dphi_);
  recoleadjet_recowhad_dr_branch = tree->GetBranch("recoleadjet_recowhad_dr");
  if (recoleadjet_recowhad_dr_branch) recoleadjet_recowhad_dr_branch->SetAddress(&recoleadjet_recowhad_dr_);
  recowhad_minus_recolepton_pt_branch = tree->GetBranch("recowhad_minus_recolepton_pt");
  if (recowhad_minus_recolepton_pt_branch) recowhad_minus_recolepton_pt_branch->SetAddress(&recowhad_minus_recolepton_pt_);
  recowhad_minus_recolepton_eta_branch = tree->GetBranch("recowhad_minus_recolepton_eta");
  if (recowhad_minus_recolepton_eta_branch) recowhad_minus_recolepton_eta_branch->SetAddress(&recowhad_minus_recolepton_eta_);
  recowhad_minus_recolepton_phi_branch = tree->GetBranch("recowhad_minus_recolepton_phi");
  if (recowhad_minus_recolepton_phi_branch) recowhad_minus_recolepton_phi_branch->SetAddress(&recowhad_minus_recolepton_phi_);
  recowhad_minus_recolepton_mass_branch = tree->GetBranch("recowhad_minus_recolepton_mass");
  if (recowhad_minus_recolepton_mass_branch) recowhad_minus_recolepton_mass_branch->SetAddress(&recowhad_minus_recolepton_mass_);
  recowhad_minus_recolepton_positive_pt_branch = tree->GetBranch("recowhad_minus_recolepton_positive_pt");
  if (recowhad_minus_recolepton_positive_pt_branch) recowhad_minus_recolepton_positive_pt_branch->SetAddress(&recowhad_minus_recolepton_positive_pt_);
  recowhad_minus_recolepton_positive_eta_branch = tree->GetBranch("recowhad_minus_recolepton_positive_eta");
  if (recowhad_minus_recolepton_positive_eta_branch) recowhad_minus_recolepton_positive_eta_branch->SetAddress(&recowhad_minus_recolepton_positive_eta_);
  recowhad_minus_recolepton_positive_phi_branch = tree->GetBranch("recowhad_minus_recolepton_positive_phi");
  if (recowhad_minus_recolepton_positive_phi_branch) recowhad_minus_recolepton_positive_phi_branch->SetAddress(&recowhad_minus_recolepton_positive_phi_);
  recowhad_minus_recolepton_positive_mass_branch = tree->GetBranch("recowhad_minus_recolepton_positive_mass");
  if (recowhad_minus_recolepton_positive_mass_branch) recowhad_minus_recolepton_positive_mass_branch->SetAddress(&recowhad_minus_recolepton_positive_mass_);
  higgsdecay_branch = tree->GetBranch("higgsdecay");
  if (higgsdecay_branch) higgsdecay_branch->SetAddress(&higgsdecay_);
  wstar_channel_id_branch = tree->GetBranch("wstar_channel_id");
  if (wstar_channel_id_branch) wstar_channel_id_branch->SetAddress(&wstar_channel_id_);
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
  decay_id_branch = tree->GetBranch("decay_id");
  if (decay_id_branch) decay_id_branch->SetAddress(&decay_id_);
  decay_isstar_branch = tree->GetBranch("decay_isstar");
  if (decay_isstar_branch) decay_isstar_branch->SetAddress(&decay_isstar_);
  lepton_id_branch = tree->GetBranch("lepton_id");
  if (lepton_id_branch) lepton_id_branch->SetAddress(&lepton_id_);
  lepton_isstar_branch = tree->GetBranch("lepton_isstar");
  if (lepton_isstar_branch) lepton_isstar_branch->SetAddress(&lepton_isstar_);
  neutrino_id_branch = tree->GetBranch("neutrino_id");
  if (neutrino_id_branch) neutrino_id_branch->SetAddress(&neutrino_id_);
  neutrino_isstar_branch = tree->GetBranch("neutrino_isstar");
  if (neutrino_isstar_branch) neutrino_isstar_branch->SetAddress(&neutrino_isstar_);
  quark_id_branch = tree->GetBranch("quark_id");
  if (quark_id_branch) quark_id_branch->SetAddress(&quark_id_);
  quark_isstar_branch = tree->GetBranch("quark_isstar");
  if (quark_isstar_branch) quark_isstar_branch->SetAddress(&quark_isstar_);
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
  inneriso_branch = tree->GetBranch("inneriso");
  if (inneriso_branch) inneriso_branch->SetAddress(&inneriso_);
  pf_drs_branch = tree->GetBranch("pf_drs");
  if (pf_drs_branch) pf_drs_branch->SetAddress(&pf_drs_);
  sumpt_oppo_r15_branch = tree->GetBranch("sumpt_oppo_r15");
  if (sumpt_oppo_r15_branch) sumpt_oppo_r15_branch->SetAddress(&sumpt_oppo_r15_);
  njet5_oppo_r15_branch = tree->GetBranch("njet5_oppo_r15");
  if (njet5_oppo_r15_branch) njet5_oppo_r15_branch->SetAddress(&njet5_oppo_r15_);
  njet10_oppo_r15_branch = tree->GetBranch("njet10_oppo_r15");
  if (njet10_oppo_r15_branch) njet10_oppo_r15_branch->SetAddress(&njet10_oppo_r15_);
  njet20_oppo_r15_branch = tree->GetBranch("njet20_oppo_r15");
  if (njet20_oppo_r15_branch) njet20_oppo_r15_branch->SetAddress(&njet20_oppo_r15_);
  njet30_oppo_r15_branch = tree->GetBranch("njet30_oppo_r15");
  if (njet30_oppo_r15_branch) njet30_oppo_r15_branch->SetAddress(&njet30_oppo_r15_);
  njet50_oppo_r15_branch = tree->GetBranch("njet50_oppo_r15");
  if (njet50_oppo_r15_branch) njet50_oppo_r15_branch->SetAddress(&njet50_oppo_r15_);
  sumpt_oppo_branch = tree->GetBranch("sumpt_oppo");
  if (sumpt_oppo_branch) sumpt_oppo_branch->SetAddress(&sumpt_oppo_);
  njet5_oppo_branch = tree->GetBranch("njet5_oppo");
  if (njet5_oppo_branch) njet5_oppo_branch->SetAddress(&njet5_oppo_);
  njet10_oppo_branch = tree->GetBranch("njet10_oppo");
  if (njet10_oppo_branch) njet10_oppo_branch->SetAddress(&njet10_oppo_);
  njet20_oppo_branch = tree->GetBranch("njet20_oppo");
  if (njet20_oppo_branch) njet20_oppo_branch->SetAddress(&njet20_oppo_);
  njet30_oppo_branch = tree->GetBranch("njet30_oppo");
  if (njet30_oppo_branch) njet30_oppo_branch->SetAddress(&njet30_oppo_);
  njet50_oppo_branch = tree->GetBranch("njet50_oppo");
  if (njet50_oppo_branch) njet50_oppo_branch->SetAddress(&njet50_oppo_);
  sumpt_in_fatjet_branch = tree->GetBranch("sumpt_in_fatjet");
  if (sumpt_in_fatjet_branch) sumpt_in_fatjet_branch->SetAddress(&sumpt_in_fatjet_);
  njet5_in_fatjet_branch = tree->GetBranch("njet5_in_fatjet");
  if (njet5_in_fatjet_branch) njet5_in_fatjet_branch->SetAddress(&njet5_in_fatjet_);
  lepton_eta_branch = tree->GetBranch("lepton_eta");
  if (lepton_eta_branch) lepton_eta_branch->SetAddress(&lepton_eta_);
  lepton_phi_branch = tree->GetBranch("lepton_phi");
  if (lepton_phi_branch) lepton_phi_branch->SetAddress(&lepton_phi_);
  lepton_pt_branch = tree->GetBranch("lepton_pt");
  if (lepton_pt_branch) lepton_pt_branch->SetAddress(&lepton_pt_);
  lepton_relIso03EA_branch = tree->GetBranch("lepton_relIso03EA");
  if (lepton_relIso03EA_branch) lepton_relIso03EA_branch->SetAddress(&lepton_relIso03EA_);
  lepton_relIso04DB_branch = tree->GetBranch("lepton_relIso04DB");
  if (lepton_relIso04DB_branch) lepton_relIso04DB_branch->SetAddress(&lepton_relIso04DB_);
  lepton_miniIsoEA_branch = tree->GetBranch("lepton_miniIsoEA");
  if (lepton_miniIsoEA_branch) lepton_miniIsoEA_branch->SetAddress(&lepton_miniIsoEA_);
  lepton_chiso_branch = tree->GetBranch("lepton_chiso");
  if (lepton_chiso_branch) lepton_chiso_branch->SetAddress(&lepton_chiso_);
  lepton_nhiso_branch = tree->GetBranch("lepton_nhiso");
  if (lepton_nhiso_branch) lepton_nhiso_branch->SetAddress(&lepton_nhiso_);
  lepton_emiso_branch = tree->GetBranch("lepton_emiso");
  if (lepton_emiso_branch) lepton_emiso_branch->SetAddress(&lepton_emiso_);
  lepton_ncorriso_branch = tree->GetBranch("lepton_ncorriso");
  if (lepton_ncorriso_branch) lepton_ncorriso_branch->SetAddress(&lepton_ncorriso_);
  lepton_nChargedPf_branch = tree->GetBranch("lepton_nChargedPf");
  if (lepton_nChargedPf_branch) lepton_nChargedPf_branch->SetAddress(&lepton_nChargedPf_);
  lepton_nPhotonPf_branch = tree->GetBranch("lepton_nPhotonPf");
  if (lepton_nPhotonPf_branch) lepton_nPhotonPf_branch->SetAddress(&lepton_nPhotonPf_);
  lepton_nNeutralHadPf_branch = tree->GetBranch("lepton_nNeutralHadPf");
  if (lepton_nNeutralHadPf_branch) lepton_nNeutralHadPf_branch->SetAddress(&lepton_nNeutralHadPf_);
  lepton_isFromW_branch = tree->GetBranch("lepton_isFromW");
  if (lepton_isFromW_branch) lepton_isFromW_branch->SetAddress(&lepton_isFromW_);
  lepton_flavor_branch = tree->GetBranch("lepton_flavor");
  if (lepton_flavor_branch) lepton_flavor_branch->SetAddress(&lepton_flavor_);
  nvtx_branch = tree->GetBranch("nvtx");
  if (nvtx_branch) nvtx_branch->SetAddress(&nvtx_);
  pf_annuli_energy_branch = tree->GetBranch("pf_annuli_energy");
  if (pf_annuli_energy_branch) pf_annuli_energy_branch->SetAddress(&pf_annuli_energy_);
  pf_pt_branch = tree->GetBranch("pf_pt");
  if (pf_pt_branch) pf_pt_branch->SetAddress(&pf_pt_);
  pf_id_branch = tree->GetBranch("pf_id");
  if (pf_id_branch) pf_id_branch->SetAddress(&pf_id_);
  pf_reta_branch = tree->GetBranch("pf_reta");
  if (pf_reta_branch) pf_reta_branch->SetAddress(&pf_reta_);
  pf_rphi_branch = tree->GetBranch("pf_rphi");
  if (pf_rphi_branch) pf_rphi_branch->SetAddress(&pf_rphi_);
  HLT_Ele27_WPLoose_Gsf_branch = tree->GetBranch("HLT_Ele27_WPLoose_Gsf");
  if (HLT_Ele27_WPLoose_Gsf_branch) HLT_Ele27_WPLoose_Gsf_branch->SetAddress(&HLT_Ele27_WPLoose_Gsf_);
  HLT_Ele30_WPLoose_Gsf_branch = tree->GetBranch("HLT_Ele30_WPLoose_Gsf");
  if (HLT_Ele30_WPLoose_Gsf_branch) HLT_Ele30_WPLoose_Gsf_branch->SetAddress(&HLT_Ele30_WPLoose_Gsf_);
  HLT_Ele45_WPLoose_Gsf_branch = tree->GetBranch("HLT_Ele45_WPLoose_Gsf");
  if (HLT_Ele45_WPLoose_Gsf_branch) HLT_Ele45_WPLoose_Gsf_branch->SetAddress(&HLT_Ele45_WPLoose_Gsf_);
  HLT_Ele105_CaloIdVT_GsfTrkIdT_branch = tree->GetBranch("HLT_Ele105_CaloIdVT_GsfTrkIdT");
  if (HLT_Ele105_CaloIdVT_GsfTrkIdT_branch) HLT_Ele105_CaloIdVT_GsfTrkIdT_branch->SetAddress(&HLT_Ele105_CaloIdVT_GsfTrkIdT_);
  HLT_Ele115_CaloIdVT_GsfTrkIdT_branch = tree->GetBranch("HLT_Ele115_CaloIdVT_GsfTrkIdT");
  if (HLT_Ele115_CaloIdVT_GsfTrkIdT_branch) HLT_Ele115_CaloIdVT_GsfTrkIdT_branch->SetAddress(&HLT_Ele115_CaloIdVT_GsfTrkIdT_);
  HLT_IsoTkMu24_branch = tree->GetBranch("HLT_IsoTkMu24");
  if (HLT_IsoTkMu24_branch) HLT_IsoTkMu24_branch->SetAddress(&HLT_IsoTkMu24_);
  HLT_IsoMu24_branch = tree->GetBranch("HLT_IsoMu24");
  if (HLT_IsoMu24_branch) HLT_IsoMu24_branch->SetAddress(&HLT_IsoMu24_);
  HLT_SingleMu50_branch = tree->GetBranch("HLT_SingleMu50");
  if (HLT_SingleMu50_branch) HLT_SingleMu50_branch->SetAddress(&HLT_SingleMu50_);
  HLT_SingleEl40_branch = tree->GetBranch("HLT_SingleEl40");
  if (HLT_SingleEl40_branch) HLT_SingleEl40_branch->SetAddress(&HLT_SingleEl40_);
  HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch = tree->GetBranch("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165");
  if (HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch) HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch->SetAddress(&HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_);
  HLT_Mu50_branch = tree->GetBranch("HLT_Mu50");
  if (HLT_Mu50_branch) HLT_Mu50_branch->SetAddress(&HLT_Mu50_);
  HLT_TkMu50_branch = tree->GetBranch("HLT_TkMu50");
  if (HLT_TkMu50_branch) HLT_TkMu50_branch->SetAddress(&HLT_TkMu50_);
  HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch = tree->GetBranch("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50");
  if (HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch) HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch->SetAddress(&HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_);
  HLT_AK8PFJet360_TrimMass30_branch = tree->GetBranch("HLT_AK8PFJet360_TrimMass30");
  if (HLT_AK8PFJet360_TrimMass30_branch) HLT_AK8PFJet360_TrimMass30_branch->SetAddress(&HLT_AK8PFJet360_TrimMass30_);
  HLT_PFHT800_branch = tree->GetBranch("HLT_PFHT800");
  if (HLT_PFHT800_branch) HLT_PFHT800_branch->SetAddress(&HLT_PFHT800_);
  HLT_PFHT900_branch = tree->GetBranch("HLT_PFHT900");
  if (HLT_PFHT900_branch) HLT_PFHT900_branch->SetAddress(&HLT_PFHT900_);
  HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch = tree->GetBranch("HLT_PFHT650_WideJetMJJ900DEtaJJ1p5");
  if (HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch) HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch->SetAddress(&HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_);
  HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch = tree->GetBranch("HLT_PFHT650_WideJetMJJ950DEtaJJ1p5");
  if (HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch) HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch->SetAddress(&HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_);
  HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch = tree->GetBranch("HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20");
  if (HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch) HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch->SetAddress(&HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_);
  pass_duplicate_se_sm_branch = tree->GetBranch("pass_duplicate_se_sm");
  if (pass_duplicate_se_sm_branch) pass_duplicate_se_sm_branch->SetAddress(&pass_duplicate_se_sm_);
  pass_duplicate_sm_se_branch = tree->GetBranch("pass_duplicate_sm_se");
  if (pass_duplicate_sm_se_branch) pass_duplicate_sm_se_branch->SetAddress(&pass_duplicate_sm_se_);
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
  htOR_branch = tree->GetBranch("htOR");
  if (htOR_branch) htOR_branch->SetAddress(&htOR_);
  htOR40_branch = tree->GetBranch("htOR40");
  if (htOR40_branch) htOR40_branch->SetAddress(&htOR40_);
  htOR50_branch = tree->GetBranch("htOR50");
  if (htOR50_branch) htOR50_branch->SetAddress(&htOR50_);
  mhOR_branch = tree->GetBranch("mhOR");
  if (mhOR_branch) mhOR_branch->SetAddress(&mhOR_);
  mhOR40_branch = tree->GetBranch("mhOR40");
  if (mhOR40_branch) mhOR40_branch->SetAddress(&mhOR40_);
  mhOR50_branch = tree->GetBranch("mhOR50");
  if (mhOR50_branch) mhOR50_branch->SetAddress(&mhOR50_);

  tree->SetMakeClass(0);
}

void hwwtree::GetEntry(unsigned int idx) {
  // this only marks branches as not loaded, saving a lot of time
  index = idx;
  run_isLoaded = false;
  lumi_isLoaded = false;
  evt_isLoaded = false;
  isData_isLoaded = false;
  evt_scale1fb_isLoaded = false;
  genps_weight_isLoaded = false;
  xsec_br_isLoaded = false;
  evt_passgoodrunlist_isLoaded = false;
  CMS4path_isLoaded = false;
  CMS4index_isLoaded = false;
  weight_fr_r1_f1_isLoaded = false;
  weight_fr_r1_f2_isLoaded = false;
  weight_fr_r1_f0p5_isLoaded = false;
  weight_fr_r2_f1_isLoaded = false;
  weight_fr_r2_f2_isLoaded = false;
  weight_fr_r2_f0p5_isLoaded = false;
  weight_fr_r0p5_f1_isLoaded = false;
  weight_fr_r0p5_f2_isLoaded = false;
  weight_fr_r0p5_f0p5_isLoaded = false;
  weight_pdf_up_isLoaded = false;
  weight_pdf_down_isLoaded = false;
  weight_alphas_down_isLoaded = false;
  weight_alphas_up_isLoaded = false;
  weight_isr_isLoaded = false;
  weight_isr_up_isLoaded = false;
  weight_isr_down_isLoaded = false;
  lep_p4_isLoaded = false;
  lep_id_isLoaded = false;
  lep_idx_isLoaded = false;
  lep_pt_isLoaded = false;
  lep_eta_isLoaded = false;
  lep_phi_isLoaded = false;
  lep_miniIsoEA_isLoaded = false;
  lep_relIso03EA_isLoaded = false;
  lep_relIso04DB_isLoaded = false;
  lep_customrelIso005EA_isLoaded = false;
  lep_customrelIso01EA_isLoaded = false;
  lep_customrelIso015EA_isLoaded = false;
  lep_customrelIso02EA_isLoaded = false;
  lep_customrelIso025EA_isLoaded = false;
  lep_customrelIso03EA_isLoaded = false;
  lep_customrelIso035EA_isLoaded = false;
  lep_customrelIso04EA_isLoaded = false;
  lep_customrelIso045EA_isLoaded = false;
  lep_customrelIso05EA_isLoaded = false;
  lep_customrelIso055EA_isLoaded = false;
  lep_customrelIso06EA_isLoaded = false;
  lep_customrelIso065EA_isLoaded = false;
  lep_customrelIso07EA_isLoaded = false;
  lep_customrelIso075EA_isLoaded = false;
  lep_customrelIso08EA_isLoaded = false;
  nrecolep_isLoaded = false;
  lep_p4_0_isLoaded = false;
  lep_p4_1_isLoaded = false;
  lep_p4_2_isLoaded = false;
  lep_pt_0_isLoaded = false;
  lep_pt_1_isLoaded = false;
  lep_pt_2_isLoaded = false;
  lep_eta_0_isLoaded = false;
  lep_eta_1_isLoaded = false;
  lep_eta_2_isLoaded = false;
  lep_phi_0_isLoaded = false;
  lep_phi_1_isLoaded = false;
  lep_phi_2_isLoaded = false;
  lep_miniIsoEA_0_isLoaded = false;
  lep_miniIsoEA_1_isLoaded = false;
  lep_miniIsoEA_2_isLoaded = false;
  lep_relIso03EA_0_isLoaded = false;
  lep_relIso03EA_1_isLoaded = false;
  lep_relIso03EA_2_isLoaded = false;
  lep_relIso04DB_0_isLoaded = false;
  lep_relIso04DB_1_isLoaded = false;
  lep_relIso04DB_2_isLoaded = false;
  lep_id_0_isLoaded = false;
  lep_id_1_isLoaded = false;
  lep_id_2_isLoaded = false;
  lep_idx_0_isLoaded = false;
  lep_idx_1_isLoaded = false;
  lep_idx_2_isLoaded = false;
  nj_isLoaded = false;
  nb_isLoaded = false;
  nbmed_isLoaded = false;
  nbtight_isLoaded = false;
  nj50_isLoaded = false;
  nb50_isLoaded = false;
  nb50med_isLoaded = false;
  nb50tight_isLoaded = false;
  nb30_isLoaded = false;
  nb30med_isLoaded = false;
  nb30tight_isLoaded = false;
  nb40_isLoaded = false;
  nb40med_isLoaded = false;
  nb40tight_isLoaded = false;
  ht_isLoaded = false;
  ht40_isLoaded = false;
  ht50_isLoaded = false;
  mh_isLoaded = false;
  mh40_isLoaded = false;
  mh50_isLoaded = false;
  alljets_p4_isLoaded = false;
  alljets_pt_isLoaded = false;
  alljets_eta_isLoaded = false;
  alljets_phi_isLoaded = false;
  alljets_csv_isLoaded = false;
  jets_p4_isLoaded = false;
  jets_pt_isLoaded = false;
  jets_eta_isLoaded = false;
  jets_phi_isLoaded = false;
  jets_csv_isLoaded = false;
  jets_up_p4_isLoaded = false;
  jets_up_pt_isLoaded = false;
  jets_up_eta_isLoaded = false;
  jets_up_phi_isLoaded = false;
  jets_up_csv_isLoaded = false;
  jets_dn_p4_isLoaded = false;
  jets_dn_pt_isLoaded = false;
  jets_dn_eta_isLoaded = false;
  jets_dn_phi_isLoaded = false;
  jets_dn_csv_isLoaded = false;
  nak8jets_isLoaded = false;
  ak8jets_p4_isLoaded = false;
  ak8jets_pt_isLoaded = false;
  ak8jets_eta_isLoaded = false;
  ak8jets_phi_isLoaded = false;
  ak8jets_softdropMass_isLoaded = false;
  ak8jets_prunedMass_isLoaded = false;
  ak8jets_trimmedMass_isLoaded = false;
  ak8jets_mass_isLoaded = false;
  ak8jets_nJettinessTau1_isLoaded = false;
  ak8jets_nJettinessTau2_isLoaded = false;
  ak8jets_softdropPuppiSubjet1_isLoaded = false;
  ak8jets_softdropPuppiSubjet2_isLoaded = false;
  ak8jets_puppi_softdropMass_isLoaded = false;
  ak8jets_puppi_nJettinessTau1_isLoaded = false;
  ak8jets_puppi_nJettinessTau2_isLoaded = false;
  ak8jets_puppi_eta_isLoaded = false;
  ak8jets_puppi_phi_isLoaded = false;
  ak8jets_puppi_pt_isLoaded = false;
  ak8jets_puppi_mass_isLoaded = false;
  jets_p4_0_isLoaded = false;
  jets_p4_1_isLoaded = false;
  jets_p4_2_isLoaded = false;
  jets_up_p4_0_isLoaded = false;
  jets_up_p4_1_isLoaded = false;
  jets_up_p4_2_isLoaded = false;
  jets_dn_p4_0_isLoaded = false;
  jets_dn_p4_1_isLoaded = false;
  jets_dn_p4_2_isLoaded = false;
  ak8jets_p4_0_isLoaded = false;
  ak8jets_p4_1_isLoaded = false;
  ak8jets_p4_2_isLoaded = false;
  jets_pt_0_isLoaded = false;
  jets_pt_1_isLoaded = false;
  jets_pt_2_isLoaded = false;
  jets_eta_0_isLoaded = false;
  jets_eta_1_isLoaded = false;
  jets_eta_2_isLoaded = false;
  jets_phi_0_isLoaded = false;
  jets_phi_1_isLoaded = false;
  jets_phi_2_isLoaded = false;
  jets_csv_0_isLoaded = false;
  jets_csv_1_isLoaded = false;
  jets_csv_2_isLoaded = false;
  jets_up_pt_0_isLoaded = false;
  jets_up_pt_1_isLoaded = false;
  jets_up_pt_2_isLoaded = false;
  jets_up_eta_0_isLoaded = false;
  jets_up_eta_1_isLoaded = false;
  jets_up_eta_2_isLoaded = false;
  jets_up_phi_0_isLoaded = false;
  jets_up_phi_1_isLoaded = false;
  jets_up_phi_2_isLoaded = false;
  jets_up_csv_0_isLoaded = false;
  jets_up_csv_1_isLoaded = false;
  jets_up_csv_2_isLoaded = false;
  jets_dn_pt_0_isLoaded = false;
  jets_dn_pt_1_isLoaded = false;
  jets_dn_pt_2_isLoaded = false;
  jets_dn_eta_0_isLoaded = false;
  jets_dn_eta_1_isLoaded = false;
  jets_dn_eta_2_isLoaded = false;
  jets_dn_phi_0_isLoaded = false;
  jets_dn_phi_1_isLoaded = false;
  jets_dn_phi_2_isLoaded = false;
  jets_dn_csv_0_isLoaded = false;
  jets_dn_csv_1_isLoaded = false;
  jets_dn_csv_2_isLoaded = false;
  ak8jets_pt_0_isLoaded = false;
  ak8jets_pt_1_isLoaded = false;
  ak8jets_pt_2_isLoaded = false;
  ak8jets_eta_0_isLoaded = false;
  ak8jets_eta_1_isLoaded = false;
  ak8jets_eta_2_isLoaded = false;
  ak8jets_phi_0_isLoaded = false;
  ak8jets_phi_1_isLoaded = false;
  ak8jets_phi_2_isLoaded = false;
  ak8jets_softdropMass_0_isLoaded = false;
  ak8jets_softdropMass_1_isLoaded = false;
  ak8jets_softdropMass_2_isLoaded = false;
  ak8jets_prunedMass_0_isLoaded = false;
  ak8jets_prunedMass_1_isLoaded = false;
  ak8jets_prunedMass_2_isLoaded = false;
  ak8jets_trimmedMass_0_isLoaded = false;
  ak8jets_trimmedMass_1_isLoaded = false;
  ak8jets_trimmedMass_2_isLoaded = false;
  ak8jets_mass_0_isLoaded = false;
  ak8jets_mass_1_isLoaded = false;
  ak8jets_mass_2_isLoaded = false;
  ak8jets_nJettinessTau1_0_isLoaded = false;
  ak8jets_nJettinessTau1_1_isLoaded = false;
  ak8jets_nJettinessTau1_2_isLoaded = false;
  ak8jets_nJettinessTau2_0_isLoaded = false;
  ak8jets_nJettinessTau2_1_isLoaded = false;
  ak8jets_nJettinessTau2_2_isLoaded = false;
  ak8jets_softdropPuppiSubjet1_0_isLoaded = false;
  ak8jets_softdropPuppiSubjet1_1_isLoaded = false;
  ak8jets_softdropPuppiSubjet1_2_isLoaded = false;
  ak8jets_softdropPuppiSubjet2_0_isLoaded = false;
  ak8jets_softdropPuppiSubjet2_1_isLoaded = false;
  ak8jets_softdropPuppiSubjet2_2_isLoaded = false;
  ak8jets_puppi_softdropMass_0_isLoaded = false;
  ak8jets_puppi_softdropMass_1_isLoaded = false;
  ak8jets_puppi_softdropMass_2_isLoaded = false;
  ak8jets_puppi_nJettinessTau1_0_isLoaded = false;
  ak8jets_puppi_nJettinessTau1_1_isLoaded = false;
  ak8jets_puppi_nJettinessTau1_2_isLoaded = false;
  ak8jets_puppi_nJettinessTau2_0_isLoaded = false;
  ak8jets_puppi_nJettinessTau2_1_isLoaded = false;
  ak8jets_puppi_nJettinessTau2_2_isLoaded = false;
  ak8jets_puppi_eta_0_isLoaded = false;
  ak8jets_puppi_eta_1_isLoaded = false;
  ak8jets_puppi_eta_2_isLoaded = false;
  ak8jets_puppi_phi_0_isLoaded = false;
  ak8jets_puppi_phi_1_isLoaded = false;
  ak8jets_puppi_phi_2_isLoaded = false;
  ak8jets_puppi_pt_0_isLoaded = false;
  ak8jets_puppi_pt_1_isLoaded = false;
  ak8jets_puppi_pt_2_isLoaded = false;
  ak8jets_puppi_mass_0_isLoaded = false;
  ak8jets_puppi_mass_1_isLoaded = false;
  ak8jets_puppi_mass_2_isLoaded = false;
  weight_btagsf_isLoaded = false;
  weight_btagsf_heavy_DN_isLoaded = false;
  weight_btagsf_heavy_UP_isLoaded = false;
  weight_btagsf_light_DN_isLoaded = false;
  weight_btagsf_light_UP_isLoaded = false;
  met_pt_isLoaded = false;
  met_phi_isLoaded = false;
  met_up_pt_isLoaded = false;
  met_up_phi_isLoaded = false;
  met_dn_pt_isLoaded = false;
  met_dn_phi_isLoaded = false;
  met_gen_pt_isLoaded = false;
  met_gen_phi_isLoaded = false;
  gen_ht_isLoaded = false;
  isr_leadjet_dr_isLoaded = false;
  higgs_met_dphi_isLoaded = false;
  isr_recoisr_dr_isLoaded = false;
  isr_recoisrmegajet_dr_isLoaded = false;
  lepton_met_dphi_isLoaded = false;
  quark0_met_dphi_isLoaded = false;
  quark1_met_dphi_isLoaded = false;
  wlep_met_dphi_isLoaded = false;
  whad_met_dphi_isLoaded = false;
  whad_recowhad_dr_isLoaded = false;
  whad_recowhad_dphi_isLoaded = false;
  whad_recowhad_deta_isLoaded = false;
  whad_recowhad_ptratio_isLoaded = false;
  higgs_recowhad_dr_isLoaded = false;
  higgs_recowhad_dphi_isLoaded = false;
  higgs_recowhad_deta_isLoaded = false;
  higgs_recowhad_ptratio_isLoaded = false;
  whad_leadak8_dr_isLoaded = false;
  whad_leadak8_dphi_isLoaded = false;
  whad_leadak8_deta_isLoaded = false;
  whad_leadak8_ptratio_isLoaded = false;
  higgs_leadak8_dr_isLoaded = false;
  higgs_leadak8_dphi_isLoaded = false;
  higgs_leadak8_deta_isLoaded = false;
  higgs_leadak8_ptratio_isLoaded = false;
  lepton_recolep_dr_isLoaded = false;
  lepton_recolep_deta_isLoaded = false;
  lepton_recolep_dphi_isLoaded = false;
  lepton_recolep_ptratio_isLoaded = false;
  neutrino_reconeutrino_dr_isLoaded = false;
  neutrino_reconeutrino_deta_isLoaded = false;
  neutrino_reconeutrino_dphi_isLoaded = false;
  neutrino_reconeutrino_dpz_isLoaded = false;
  neutrino_reconeutrino_dabspz_isLoaded = false;
  neutrino_reconeutrino_ptratio_isLoaded = false;
  recohiggs_p4_isLoaded = false;
  recohiggs_pt_isLoaded = false;
  recohiggs_eta_isLoaded = false;
  recohiggs_phi_isLoaded = false;
  recohiggs_mass_isLoaded = false;
  recohiggs_mt_isLoaded = false;
  recohiggs2_p4_isLoaded = false;
  recohiggs2_pt_isLoaded = false;
  recohiggs2_eta_isLoaded = false;
  recohiggs2_phi_isLoaded = false;
  recohiggs2_mass_isLoaded = false;
  recohiggs2_mt_isLoaded = false;
  recohiggsinv_p4_isLoaded = false;
  recohiggsinv_pt_isLoaded = false;
  recohiggsinv_eta_isLoaded = false;
  recohiggsinv_phi_isLoaded = false;
  recohiggsinv_mass_isLoaded = false;
  recohiggsinv_mt_isLoaded = false;
  recohiggsmin_p4_isLoaded = false;
  recohiggsmin_pt_isLoaded = false;
  recohiggsmin_eta_isLoaded = false;
  recohiggsmin_phi_isLoaded = false;
  recohiggsmin_mass_isLoaded = false;
  recohiggsmin_mt_isLoaded = false;
  recohiggsmin12_p4_isLoaded = false;
  recohiggsmin12_pt_isLoaded = false;
  recohiggsmin12_eta_isLoaded = false;
  recohiggsmin12_phi_isLoaded = false;
  recohiggsmin12_mass_isLoaded = false;
  recohiggsmin12_mt_isLoaded = false;
  recoisr_p4_isLoaded = false;
  recoisr_pt_isLoaded = false;
  recoisr_eta_isLoaded = false;
  recoisr_phi_isLoaded = false;
  recoisrmegajet_p4_isLoaded = false;
  recoisrmegajet_pt_isLoaded = false;
  recoisrmegajet_eta_isLoaded = false;
  recoisrmegajet_phi_isLoaded = false;
  recoisrmegajet_n2_p4_isLoaded = false;
  recoisrmegajet_n2_pt_isLoaded = false;
  recoisrmegajet_n2_eta_isLoaded = false;
  recoisrmegajet_n2_phi_isLoaded = false;
  recolepton_p4_isLoaded = false;
  recolepton_id_isLoaded = false;
  recolepton_pt_isLoaded = false;
  recolepton_eta_isLoaded = false;
  recolepton_phi_isLoaded = false;
  recolepton_mt_isLoaded = false;
  recolepton_met_dphi_isLoaded = false;
  recoiswleplead_isLoaded = false;
  reconeutrino_det_isLoaded = false;
  reconeutrino_p4_isLoaded = false;
  reconeutrino_pt_isLoaded = false;
  reconeutrino_eta_isLoaded = false;
  reconeutrino_phi_isLoaded = false;
  reconeutrino_met_dphi_isLoaded = false;
  reconeutrino2_p4_isLoaded = false;
  reconeutrino2_pt_isLoaded = false;
  reconeutrino2_eta_isLoaded = false;
  reconeutrino2_phi_isLoaded = false;
  reconeutrino2_met_dphi_isLoaded = false;
  reconeutrinoinv_p4_isLoaded = false;
  reconeutrinoinv_pt_isLoaded = false;
  reconeutrinoinv_eta_isLoaded = false;
  reconeutrinoinv_phi_isLoaded = false;
  reconeutrinoinv_met_dphi_isLoaded = false;
  recowhad_p4_isLoaded = false;
  recowhad_pt_isLoaded = false;
  recowhad_eta_isLoaded = false;
  recowhad_phi_isLoaded = false;
  recowhad_mass_isLoaded = false;
  recowhad_softdropMass_isLoaded = false;
  recowhad_prunedMass_isLoaded = false;
  recowhad_nJettinessTau1_isLoaded = false;
  recowhad_nJettinessTau2_isLoaded = false;
  recowhad_puppi_softdropMass_isLoaded = false;
  recowhad_puppi_pt_isLoaded = false;
  recowhad_puppi_eta_isLoaded = false;
  recowhad_puppi_phi_isLoaded = false;
  recowhad_puppi_mass_isLoaded = false;
  recowhad_puppi_nJettinessTau1_isLoaded = false;
  recowhad_puppi_nJettinessTau2_isLoaded = false;
  recowhad_softdropPuppiSubjet1_isLoaded = false;
  recowhad_softdropPuppiSubjet2_isLoaded = false;
  recowlep_p4_isLoaded = false;
  recowlep_pt_isLoaded = false;
  recowlep_eta_isLoaded = false;
  recowlep_phi_isLoaded = false;
  recowlep_mass_isLoaded = false;
  recoleadjet_p4_isLoaded = false;
  recoleadjet_pt_isLoaded = false;
  recoleadjet_eta_isLoaded = false;
  recoleadjet_phi_isLoaded = false;
  recolepton_recowhad_dr_isLoaded = false;
  recoleadjet_recolepton_dr_isLoaded = false;
  recoleadjet_met_dphi_isLoaded = false;
  recoleadjet_recowhad_dr_isLoaded = false;
  recowhad_minus_recolepton_p4_isLoaded = false;
  recowhad_minus_recolepton_pt_isLoaded = false;
  recowhad_minus_recolepton_eta_isLoaded = false;
  recowhad_minus_recolepton_phi_isLoaded = false;
  recowhad_minus_recolepton_mass_isLoaded = false;
  recowhad_minus_recolepton_positive_p4_isLoaded = false;
  recowhad_minus_recolepton_positive_pt_isLoaded = false;
  recowhad_minus_recolepton_positive_eta_isLoaded = false;
  recowhad_minus_recolepton_positive_phi_isLoaded = false;
  recowhad_minus_recolepton_positive_mass_isLoaded = false;
  higgsdecay_isLoaded = false;
  wstar_channel_id_isLoaded = false;
  nlep_isLoaded = false;
  nquark_isLoaded = false;
  wa_id_isLoaded = false;
  isr_p4_isLoaded = false;
  isr_pt_isLoaded = false;
  isr_eta_isLoaded = false;
  isr_phi_isLoaded = false;
  higgs_p4_isLoaded = false;
  decay_p4_isLoaded = false;
  decay_id_isLoaded = false;
  decay_isstar_isLoaded = false;
  lepton_p4_isLoaded = false;
  lepton_id_isLoaded = false;
  lepton_isstar_isLoaded = false;
  neutrino_p4_isLoaded = false;
  neutrino_id_isLoaded = false;
  neutrino_isstar_isLoaded = false;
  quark_p4_isLoaded = false;
  quark_id_isLoaded = false;
  quark_isstar_isLoaded = false;
  lqq_max_dr_isLoaded = false;
  lq0_dr_isLoaded = false;
  lq1_dr_isLoaded = false;
  qq_dr_isLoaded = false;
  decay_dr_isLoaded = false;
  l_qq_dr_isLoaded = false;
  lqq_mass_isLoaded = false;
  lvqq_mt_isLoaded = false;
  inneriso_isLoaded = false;
  pf_p4s_isLoaded = false;
  pf_drs_isLoaded = false;
  sumpt_oppo_r15_isLoaded = false;
  njet5_oppo_r15_isLoaded = false;
  njet10_oppo_r15_isLoaded = false;
  njet20_oppo_r15_isLoaded = false;
  njet30_oppo_r15_isLoaded = false;
  njet50_oppo_r15_isLoaded = false;
  sumpt_oppo_isLoaded = false;
  njet5_oppo_isLoaded = false;
  njet10_oppo_isLoaded = false;
  njet20_oppo_isLoaded = false;
  njet30_oppo_isLoaded = false;
  njet50_oppo_isLoaded = false;
  sumpt_in_fatjet_isLoaded = false;
  njet5_in_fatjet_isLoaded = false;
  lepton_eta_isLoaded = false;
  lepton_phi_isLoaded = false;
  lepton_pt_isLoaded = false;
  lepton_relIso03EA_isLoaded = false;
  lepton_relIso04DB_isLoaded = false;
  lepton_miniIsoEA_isLoaded = false;
  lepton_chiso_isLoaded = false;
  lepton_nhiso_isLoaded = false;
  lepton_emiso_isLoaded = false;
  lepton_ncorriso_isLoaded = false;
  lepton_nChargedPf_isLoaded = false;
  lepton_nPhotonPf_isLoaded = false;
  lepton_nNeutralHadPf_isLoaded = false;
  lepton_isFromW_isLoaded = false;
  lepton_flavor_isLoaded = false;
  nvtx_isLoaded = false;
  pf_annuli_energy_isLoaded = false;
  pf_pt_isLoaded = false;
  pf_id_isLoaded = false;
  pf_reta_isLoaded = false;
  pf_rphi_isLoaded = false;
  HLT_Ele27_WPLoose_Gsf_isLoaded = false;
  HLT_Ele30_WPLoose_Gsf_isLoaded = false;
  HLT_Ele45_WPLoose_Gsf_isLoaded = false;
  HLT_Ele105_CaloIdVT_GsfTrkIdT_isLoaded = false;
  HLT_Ele115_CaloIdVT_GsfTrkIdT_isLoaded = false;
  HLT_IsoTkMu24_isLoaded = false;
  HLT_IsoMu24_isLoaded = false;
  HLT_SingleMu50_isLoaded = false;
  HLT_SingleEl40_isLoaded = false;
  HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_isLoaded = false;
  HLT_Mu50_isLoaded = false;
  HLT_TkMu50_isLoaded = false;
  HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_isLoaded = false;
  HLT_AK8PFJet360_TrimMass30_isLoaded = false;
  HLT_PFHT800_isLoaded = false;
  HLT_PFHT900_isLoaded = false;
  HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_isLoaded = false;
  HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_isLoaded = false;
  HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_isLoaded = false;
  pass_duplicate_se_sm_isLoaded = false;
  pass_duplicate_sm_se_isLoaded = false;
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
  htOR_isLoaded = false;
  htOR40_isLoaded = false;
  htOR50_isLoaded = false;
  mhOR_isLoaded = false;
  mhOR40_isLoaded = false;
  mhOR50_isLoaded = false;
}

void hwwtree::LoadAllBranches() {
  // load all branches
  if (run_branch != 0) run();
  if (lumi_branch != 0) lumi();
  if (evt_branch != 0) evt();
  if (isData_branch != 0) isData();
  if (evt_scale1fb_branch != 0) evt_scale1fb();
  if (genps_weight_branch != 0) genps_weight();
  if (xsec_br_branch != 0) xsec_br();
  if (evt_passgoodrunlist_branch != 0) evt_passgoodrunlist();
  if (CMS4path_branch != 0) CMS4path();
  if (CMS4index_branch != 0) CMS4index();
  if (weight_fr_r1_f1_branch != 0) weight_fr_r1_f1();
  if (weight_fr_r1_f2_branch != 0) weight_fr_r1_f2();
  if (weight_fr_r1_f0p5_branch != 0) weight_fr_r1_f0p5();
  if (weight_fr_r2_f1_branch != 0) weight_fr_r2_f1();
  if (weight_fr_r2_f2_branch != 0) weight_fr_r2_f2();
  if (weight_fr_r2_f0p5_branch != 0) weight_fr_r2_f0p5();
  if (weight_fr_r0p5_f1_branch != 0) weight_fr_r0p5_f1();
  if (weight_fr_r0p5_f2_branch != 0) weight_fr_r0p5_f2();
  if (weight_fr_r0p5_f0p5_branch != 0) weight_fr_r0p5_f0p5();
  if (weight_pdf_up_branch != 0) weight_pdf_up();
  if (weight_pdf_down_branch != 0) weight_pdf_down();
  if (weight_alphas_down_branch != 0) weight_alphas_down();
  if (weight_alphas_up_branch != 0) weight_alphas_up();
  if (weight_isr_branch != 0) weight_isr();
  if (weight_isr_up_branch != 0) weight_isr_up();
  if (weight_isr_down_branch != 0) weight_isr_down();
  if (lep_p4_branch != 0) lep_p4();
  if (lep_id_branch != 0) lep_id();
  if (lep_idx_branch != 0) lep_idx();
  if (lep_pt_branch != 0) lep_pt();
  if (lep_eta_branch != 0) lep_eta();
  if (lep_phi_branch != 0) lep_phi();
  if (lep_miniIsoEA_branch != 0) lep_miniIsoEA();
  if (lep_relIso03EA_branch != 0) lep_relIso03EA();
  if (lep_relIso04DB_branch != 0) lep_relIso04DB();
  if (lep_customrelIso005EA_branch != 0) lep_customrelIso005EA();
  if (lep_customrelIso01EA_branch != 0) lep_customrelIso01EA();
  if (lep_customrelIso015EA_branch != 0) lep_customrelIso015EA();
  if (lep_customrelIso02EA_branch != 0) lep_customrelIso02EA();
  if (lep_customrelIso025EA_branch != 0) lep_customrelIso025EA();
  if (lep_customrelIso03EA_branch != 0) lep_customrelIso03EA();
  if (lep_customrelIso035EA_branch != 0) lep_customrelIso035EA();
  if (lep_customrelIso04EA_branch != 0) lep_customrelIso04EA();
  if (lep_customrelIso045EA_branch != 0) lep_customrelIso045EA();
  if (lep_customrelIso05EA_branch != 0) lep_customrelIso05EA();
  if (lep_customrelIso055EA_branch != 0) lep_customrelIso055EA();
  if (lep_customrelIso06EA_branch != 0) lep_customrelIso06EA();
  if (lep_customrelIso065EA_branch != 0) lep_customrelIso065EA();
  if (lep_customrelIso07EA_branch != 0) lep_customrelIso07EA();
  if (lep_customrelIso075EA_branch != 0) lep_customrelIso075EA();
  if (lep_customrelIso08EA_branch != 0) lep_customrelIso08EA();
  if (nrecolep_branch != 0) nrecolep();
  if (lep_p4_0_branch != 0) lep_p4_0();
  if (lep_p4_1_branch != 0) lep_p4_1();
  if (lep_p4_2_branch != 0) lep_p4_2();
  if (lep_pt_0_branch != 0) lep_pt_0();
  if (lep_pt_1_branch != 0) lep_pt_1();
  if (lep_pt_2_branch != 0) lep_pt_2();
  if (lep_eta_0_branch != 0) lep_eta_0();
  if (lep_eta_1_branch != 0) lep_eta_1();
  if (lep_eta_2_branch != 0) lep_eta_2();
  if (lep_phi_0_branch != 0) lep_phi_0();
  if (lep_phi_1_branch != 0) lep_phi_1();
  if (lep_phi_2_branch != 0) lep_phi_2();
  if (lep_miniIsoEA_0_branch != 0) lep_miniIsoEA_0();
  if (lep_miniIsoEA_1_branch != 0) lep_miniIsoEA_1();
  if (lep_miniIsoEA_2_branch != 0) lep_miniIsoEA_2();
  if (lep_relIso03EA_0_branch != 0) lep_relIso03EA_0();
  if (lep_relIso03EA_1_branch != 0) lep_relIso03EA_1();
  if (lep_relIso03EA_2_branch != 0) lep_relIso03EA_2();
  if (lep_relIso04DB_0_branch != 0) lep_relIso04DB_0();
  if (lep_relIso04DB_1_branch != 0) lep_relIso04DB_1();
  if (lep_relIso04DB_2_branch != 0) lep_relIso04DB_2();
  if (lep_id_0_branch != 0) lep_id_0();
  if (lep_id_1_branch != 0) lep_id_1();
  if (lep_id_2_branch != 0) lep_id_2();
  if (lep_idx_0_branch != 0) lep_idx_0();
  if (lep_idx_1_branch != 0) lep_idx_1();
  if (lep_idx_2_branch != 0) lep_idx_2();
  if (nj_branch != 0) nj();
  if (nb_branch != 0) nb();
  if (nbmed_branch != 0) nbmed();
  if (nbtight_branch != 0) nbtight();
  if (nj50_branch != 0) nj50();
  if (nb50_branch != 0) nb50();
  if (nb50med_branch != 0) nb50med();
  if (nb50tight_branch != 0) nb50tight();
  if (nb30_branch != 0) nb30();
  if (nb30med_branch != 0) nb30med();
  if (nb30tight_branch != 0) nb30tight();
  if (nb40_branch != 0) nb40();
  if (nb40med_branch != 0) nb40med();
  if (nb40tight_branch != 0) nb40tight();
  if (ht_branch != 0) ht();
  if (ht40_branch != 0) ht40();
  if (ht50_branch != 0) ht50();
  if (mh_branch != 0) mh();
  if (mh40_branch != 0) mh40();
  if (mh50_branch != 0) mh50();
  if (alljets_p4_branch != 0) alljets_p4();
  if (alljets_pt_branch != 0) alljets_pt();
  if (alljets_eta_branch != 0) alljets_eta();
  if (alljets_phi_branch != 0) alljets_phi();
  if (alljets_csv_branch != 0) alljets_csv();
  if (jets_p4_branch != 0) jets_p4();
  if (jets_pt_branch != 0) jets_pt();
  if (jets_eta_branch != 0) jets_eta();
  if (jets_phi_branch != 0) jets_phi();
  if (jets_csv_branch != 0) jets_csv();
  if (jets_up_p4_branch != 0) jets_up_p4();
  if (jets_up_pt_branch != 0) jets_up_pt();
  if (jets_up_eta_branch != 0) jets_up_eta();
  if (jets_up_phi_branch != 0) jets_up_phi();
  if (jets_up_csv_branch != 0) jets_up_csv();
  if (jets_dn_p4_branch != 0) jets_dn_p4();
  if (jets_dn_pt_branch != 0) jets_dn_pt();
  if (jets_dn_eta_branch != 0) jets_dn_eta();
  if (jets_dn_phi_branch != 0) jets_dn_phi();
  if (jets_dn_csv_branch != 0) jets_dn_csv();
  if (nak8jets_branch != 0) nak8jets();
  if (ak8jets_p4_branch != 0) ak8jets_p4();
  if (ak8jets_pt_branch != 0) ak8jets_pt();
  if (ak8jets_eta_branch != 0) ak8jets_eta();
  if (ak8jets_phi_branch != 0) ak8jets_phi();
  if (ak8jets_softdropMass_branch != 0) ak8jets_softdropMass();
  if (ak8jets_prunedMass_branch != 0) ak8jets_prunedMass();
  if (ak8jets_trimmedMass_branch != 0) ak8jets_trimmedMass();
  if (ak8jets_mass_branch != 0) ak8jets_mass();
  if (ak8jets_nJettinessTau1_branch != 0) ak8jets_nJettinessTau1();
  if (ak8jets_nJettinessTau2_branch != 0) ak8jets_nJettinessTau2();
  if (ak8jets_softdropPuppiSubjet1_branch != 0) ak8jets_softdropPuppiSubjet1();
  if (ak8jets_softdropPuppiSubjet2_branch != 0) ak8jets_softdropPuppiSubjet2();
  if (ak8jets_puppi_softdropMass_branch != 0) ak8jets_puppi_softdropMass();
  if (ak8jets_puppi_nJettinessTau1_branch != 0) ak8jets_puppi_nJettinessTau1();
  if (ak8jets_puppi_nJettinessTau2_branch != 0) ak8jets_puppi_nJettinessTau2();
  if (ak8jets_puppi_eta_branch != 0) ak8jets_puppi_eta();
  if (ak8jets_puppi_phi_branch != 0) ak8jets_puppi_phi();
  if (ak8jets_puppi_pt_branch != 0) ak8jets_puppi_pt();
  if (ak8jets_puppi_mass_branch != 0) ak8jets_puppi_mass();
  if (jets_p4_0_branch != 0) jets_p4_0();
  if (jets_p4_1_branch != 0) jets_p4_1();
  if (jets_p4_2_branch != 0) jets_p4_2();
  if (jets_up_p4_0_branch != 0) jets_up_p4_0();
  if (jets_up_p4_1_branch != 0) jets_up_p4_1();
  if (jets_up_p4_2_branch != 0) jets_up_p4_2();
  if (jets_dn_p4_0_branch != 0) jets_dn_p4_0();
  if (jets_dn_p4_1_branch != 0) jets_dn_p4_1();
  if (jets_dn_p4_2_branch != 0) jets_dn_p4_2();
  if (ak8jets_p4_0_branch != 0) ak8jets_p4_0();
  if (ak8jets_p4_1_branch != 0) ak8jets_p4_1();
  if (ak8jets_p4_2_branch != 0) ak8jets_p4_2();
  if (jets_pt_0_branch != 0) jets_pt_0();
  if (jets_pt_1_branch != 0) jets_pt_1();
  if (jets_pt_2_branch != 0) jets_pt_2();
  if (jets_eta_0_branch != 0) jets_eta_0();
  if (jets_eta_1_branch != 0) jets_eta_1();
  if (jets_eta_2_branch != 0) jets_eta_2();
  if (jets_phi_0_branch != 0) jets_phi_0();
  if (jets_phi_1_branch != 0) jets_phi_1();
  if (jets_phi_2_branch != 0) jets_phi_2();
  if (jets_csv_0_branch != 0) jets_csv_0();
  if (jets_csv_1_branch != 0) jets_csv_1();
  if (jets_csv_2_branch != 0) jets_csv_2();
  if (jets_up_pt_0_branch != 0) jets_up_pt_0();
  if (jets_up_pt_1_branch != 0) jets_up_pt_1();
  if (jets_up_pt_2_branch != 0) jets_up_pt_2();
  if (jets_up_eta_0_branch != 0) jets_up_eta_0();
  if (jets_up_eta_1_branch != 0) jets_up_eta_1();
  if (jets_up_eta_2_branch != 0) jets_up_eta_2();
  if (jets_up_phi_0_branch != 0) jets_up_phi_0();
  if (jets_up_phi_1_branch != 0) jets_up_phi_1();
  if (jets_up_phi_2_branch != 0) jets_up_phi_2();
  if (jets_up_csv_0_branch != 0) jets_up_csv_0();
  if (jets_up_csv_1_branch != 0) jets_up_csv_1();
  if (jets_up_csv_2_branch != 0) jets_up_csv_2();
  if (jets_dn_pt_0_branch != 0) jets_dn_pt_0();
  if (jets_dn_pt_1_branch != 0) jets_dn_pt_1();
  if (jets_dn_pt_2_branch != 0) jets_dn_pt_2();
  if (jets_dn_eta_0_branch != 0) jets_dn_eta_0();
  if (jets_dn_eta_1_branch != 0) jets_dn_eta_1();
  if (jets_dn_eta_2_branch != 0) jets_dn_eta_2();
  if (jets_dn_phi_0_branch != 0) jets_dn_phi_0();
  if (jets_dn_phi_1_branch != 0) jets_dn_phi_1();
  if (jets_dn_phi_2_branch != 0) jets_dn_phi_2();
  if (jets_dn_csv_0_branch != 0) jets_dn_csv_0();
  if (jets_dn_csv_1_branch != 0) jets_dn_csv_1();
  if (jets_dn_csv_2_branch != 0) jets_dn_csv_2();
  if (ak8jets_pt_0_branch != 0) ak8jets_pt_0();
  if (ak8jets_pt_1_branch != 0) ak8jets_pt_1();
  if (ak8jets_pt_2_branch != 0) ak8jets_pt_2();
  if (ak8jets_eta_0_branch != 0) ak8jets_eta_0();
  if (ak8jets_eta_1_branch != 0) ak8jets_eta_1();
  if (ak8jets_eta_2_branch != 0) ak8jets_eta_2();
  if (ak8jets_phi_0_branch != 0) ak8jets_phi_0();
  if (ak8jets_phi_1_branch != 0) ak8jets_phi_1();
  if (ak8jets_phi_2_branch != 0) ak8jets_phi_2();
  if (ak8jets_softdropMass_0_branch != 0) ak8jets_softdropMass_0();
  if (ak8jets_softdropMass_1_branch != 0) ak8jets_softdropMass_1();
  if (ak8jets_softdropMass_2_branch != 0) ak8jets_softdropMass_2();
  if (ak8jets_prunedMass_0_branch != 0) ak8jets_prunedMass_0();
  if (ak8jets_prunedMass_1_branch != 0) ak8jets_prunedMass_1();
  if (ak8jets_prunedMass_2_branch != 0) ak8jets_prunedMass_2();
  if (ak8jets_trimmedMass_0_branch != 0) ak8jets_trimmedMass_0();
  if (ak8jets_trimmedMass_1_branch != 0) ak8jets_trimmedMass_1();
  if (ak8jets_trimmedMass_2_branch != 0) ak8jets_trimmedMass_2();
  if (ak8jets_mass_0_branch != 0) ak8jets_mass_0();
  if (ak8jets_mass_1_branch != 0) ak8jets_mass_1();
  if (ak8jets_mass_2_branch != 0) ak8jets_mass_2();
  if (ak8jets_nJettinessTau1_0_branch != 0) ak8jets_nJettinessTau1_0();
  if (ak8jets_nJettinessTau1_1_branch != 0) ak8jets_nJettinessTau1_1();
  if (ak8jets_nJettinessTau1_2_branch != 0) ak8jets_nJettinessTau1_2();
  if (ak8jets_nJettinessTau2_0_branch != 0) ak8jets_nJettinessTau2_0();
  if (ak8jets_nJettinessTau2_1_branch != 0) ak8jets_nJettinessTau2_1();
  if (ak8jets_nJettinessTau2_2_branch != 0) ak8jets_nJettinessTau2_2();
  if (ak8jets_softdropPuppiSubjet1_0_branch != 0) ak8jets_softdropPuppiSubjet1_0();
  if (ak8jets_softdropPuppiSubjet1_1_branch != 0) ak8jets_softdropPuppiSubjet1_1();
  if (ak8jets_softdropPuppiSubjet1_2_branch != 0) ak8jets_softdropPuppiSubjet1_2();
  if (ak8jets_softdropPuppiSubjet2_0_branch != 0) ak8jets_softdropPuppiSubjet2_0();
  if (ak8jets_softdropPuppiSubjet2_1_branch != 0) ak8jets_softdropPuppiSubjet2_1();
  if (ak8jets_softdropPuppiSubjet2_2_branch != 0) ak8jets_softdropPuppiSubjet2_2();
  if (ak8jets_puppi_softdropMass_0_branch != 0) ak8jets_puppi_softdropMass_0();
  if (ak8jets_puppi_softdropMass_1_branch != 0) ak8jets_puppi_softdropMass_1();
  if (ak8jets_puppi_softdropMass_2_branch != 0) ak8jets_puppi_softdropMass_2();
  if (ak8jets_puppi_nJettinessTau1_0_branch != 0) ak8jets_puppi_nJettinessTau1_0();
  if (ak8jets_puppi_nJettinessTau1_1_branch != 0) ak8jets_puppi_nJettinessTau1_1();
  if (ak8jets_puppi_nJettinessTau1_2_branch != 0) ak8jets_puppi_nJettinessTau1_2();
  if (ak8jets_puppi_nJettinessTau2_0_branch != 0) ak8jets_puppi_nJettinessTau2_0();
  if (ak8jets_puppi_nJettinessTau2_1_branch != 0) ak8jets_puppi_nJettinessTau2_1();
  if (ak8jets_puppi_nJettinessTau2_2_branch != 0) ak8jets_puppi_nJettinessTau2_2();
  if (ak8jets_puppi_eta_0_branch != 0) ak8jets_puppi_eta_0();
  if (ak8jets_puppi_eta_1_branch != 0) ak8jets_puppi_eta_1();
  if (ak8jets_puppi_eta_2_branch != 0) ak8jets_puppi_eta_2();
  if (ak8jets_puppi_phi_0_branch != 0) ak8jets_puppi_phi_0();
  if (ak8jets_puppi_phi_1_branch != 0) ak8jets_puppi_phi_1();
  if (ak8jets_puppi_phi_2_branch != 0) ak8jets_puppi_phi_2();
  if (ak8jets_puppi_pt_0_branch != 0) ak8jets_puppi_pt_0();
  if (ak8jets_puppi_pt_1_branch != 0) ak8jets_puppi_pt_1();
  if (ak8jets_puppi_pt_2_branch != 0) ak8jets_puppi_pt_2();
  if (ak8jets_puppi_mass_0_branch != 0) ak8jets_puppi_mass_0();
  if (ak8jets_puppi_mass_1_branch != 0) ak8jets_puppi_mass_1();
  if (ak8jets_puppi_mass_2_branch != 0) ak8jets_puppi_mass_2();
  if (weight_btagsf_branch != 0) weight_btagsf();
  if (weight_btagsf_heavy_DN_branch != 0) weight_btagsf_heavy_DN();
  if (weight_btagsf_heavy_UP_branch != 0) weight_btagsf_heavy_UP();
  if (weight_btagsf_light_DN_branch != 0) weight_btagsf_light_DN();
  if (weight_btagsf_light_UP_branch != 0) weight_btagsf_light_UP();
  if (met_pt_branch != 0) met_pt();
  if (met_phi_branch != 0) met_phi();
  if (met_up_pt_branch != 0) met_up_pt();
  if (met_up_phi_branch != 0) met_up_phi();
  if (met_dn_pt_branch != 0) met_dn_pt();
  if (met_dn_phi_branch != 0) met_dn_phi();
  if (met_gen_pt_branch != 0) met_gen_pt();
  if (met_gen_phi_branch != 0) met_gen_phi();
  if (gen_ht_branch != 0) gen_ht();
  if (isr_leadjet_dr_branch != 0) isr_leadjet_dr();
  if (higgs_met_dphi_branch != 0) higgs_met_dphi();
  if (isr_recoisr_dr_branch != 0) isr_recoisr_dr();
  if (isr_recoisrmegajet_dr_branch != 0) isr_recoisrmegajet_dr();
  if (lepton_met_dphi_branch != 0) lepton_met_dphi();
  if (quark0_met_dphi_branch != 0) quark0_met_dphi();
  if (quark1_met_dphi_branch != 0) quark1_met_dphi();
  if (wlep_met_dphi_branch != 0) wlep_met_dphi();
  if (whad_met_dphi_branch != 0) whad_met_dphi();
  if (whad_recowhad_dr_branch != 0) whad_recowhad_dr();
  if (whad_recowhad_dphi_branch != 0) whad_recowhad_dphi();
  if (whad_recowhad_deta_branch != 0) whad_recowhad_deta();
  if (whad_recowhad_ptratio_branch != 0) whad_recowhad_ptratio();
  if (higgs_recowhad_dr_branch != 0) higgs_recowhad_dr();
  if (higgs_recowhad_dphi_branch != 0) higgs_recowhad_dphi();
  if (higgs_recowhad_deta_branch != 0) higgs_recowhad_deta();
  if (higgs_recowhad_ptratio_branch != 0) higgs_recowhad_ptratio();
  if (whad_leadak8_dr_branch != 0) whad_leadak8_dr();
  if (whad_leadak8_dphi_branch != 0) whad_leadak8_dphi();
  if (whad_leadak8_deta_branch != 0) whad_leadak8_deta();
  if (whad_leadak8_ptratio_branch != 0) whad_leadak8_ptratio();
  if (higgs_leadak8_dr_branch != 0) higgs_leadak8_dr();
  if (higgs_leadak8_dphi_branch != 0) higgs_leadak8_dphi();
  if (higgs_leadak8_deta_branch != 0) higgs_leadak8_deta();
  if (higgs_leadak8_ptratio_branch != 0) higgs_leadak8_ptratio();
  if (lepton_recolep_dr_branch != 0) lepton_recolep_dr();
  if (lepton_recolep_deta_branch != 0) lepton_recolep_deta();
  if (lepton_recolep_dphi_branch != 0) lepton_recolep_dphi();
  if (lepton_recolep_ptratio_branch != 0) lepton_recolep_ptratio();
  if (neutrino_reconeutrino_dr_branch != 0) neutrino_reconeutrino_dr();
  if (neutrino_reconeutrino_deta_branch != 0) neutrino_reconeutrino_deta();
  if (neutrino_reconeutrino_dphi_branch != 0) neutrino_reconeutrino_dphi();
  if (neutrino_reconeutrino_dpz_branch != 0) neutrino_reconeutrino_dpz();
  if (neutrino_reconeutrino_dabspz_branch != 0) neutrino_reconeutrino_dabspz();
  if (neutrino_reconeutrino_ptratio_branch != 0) neutrino_reconeutrino_ptratio();
  if (recohiggs_p4_branch != 0) recohiggs_p4();
  if (recohiggs_pt_branch != 0) recohiggs_pt();
  if (recohiggs_eta_branch != 0) recohiggs_eta();
  if (recohiggs_phi_branch != 0) recohiggs_phi();
  if (recohiggs_mass_branch != 0) recohiggs_mass();
  if (recohiggs_mt_branch != 0) recohiggs_mt();
  if (recohiggs2_p4_branch != 0) recohiggs2_p4();
  if (recohiggs2_pt_branch != 0) recohiggs2_pt();
  if (recohiggs2_eta_branch != 0) recohiggs2_eta();
  if (recohiggs2_phi_branch != 0) recohiggs2_phi();
  if (recohiggs2_mass_branch != 0) recohiggs2_mass();
  if (recohiggs2_mt_branch != 0) recohiggs2_mt();
  if (recohiggsinv_p4_branch != 0) recohiggsinv_p4();
  if (recohiggsinv_pt_branch != 0) recohiggsinv_pt();
  if (recohiggsinv_eta_branch != 0) recohiggsinv_eta();
  if (recohiggsinv_phi_branch != 0) recohiggsinv_phi();
  if (recohiggsinv_mass_branch != 0) recohiggsinv_mass();
  if (recohiggsinv_mt_branch != 0) recohiggsinv_mt();
  if (recohiggsmin_p4_branch != 0) recohiggsmin_p4();
  if (recohiggsmin_pt_branch != 0) recohiggsmin_pt();
  if (recohiggsmin_eta_branch != 0) recohiggsmin_eta();
  if (recohiggsmin_phi_branch != 0) recohiggsmin_phi();
  if (recohiggsmin_mass_branch != 0) recohiggsmin_mass();
  if (recohiggsmin_mt_branch != 0) recohiggsmin_mt();
  if (recohiggsmin12_p4_branch != 0) recohiggsmin12_p4();
  if (recohiggsmin12_pt_branch != 0) recohiggsmin12_pt();
  if (recohiggsmin12_eta_branch != 0) recohiggsmin12_eta();
  if (recohiggsmin12_phi_branch != 0) recohiggsmin12_phi();
  if (recohiggsmin12_mass_branch != 0) recohiggsmin12_mass();
  if (recohiggsmin12_mt_branch != 0) recohiggsmin12_mt();
  if (recoisr_p4_branch != 0) recoisr_p4();
  if (recoisr_pt_branch != 0) recoisr_pt();
  if (recoisr_eta_branch != 0) recoisr_eta();
  if (recoisr_phi_branch != 0) recoisr_phi();
  if (recoisrmegajet_p4_branch != 0) recoisrmegajet_p4();
  if (recoisrmegajet_pt_branch != 0) recoisrmegajet_pt();
  if (recoisrmegajet_eta_branch != 0) recoisrmegajet_eta();
  if (recoisrmegajet_phi_branch != 0) recoisrmegajet_phi();
  if (recoisrmegajet_n2_p4_branch != 0) recoisrmegajet_n2_p4();
  if (recoisrmegajet_n2_pt_branch != 0) recoisrmegajet_n2_pt();
  if (recoisrmegajet_n2_eta_branch != 0) recoisrmegajet_n2_eta();
  if (recoisrmegajet_n2_phi_branch != 0) recoisrmegajet_n2_phi();
  if (recolepton_p4_branch != 0) recolepton_p4();
  if (recolepton_id_branch != 0) recolepton_id();
  if (recolepton_pt_branch != 0) recolepton_pt();
  if (recolepton_eta_branch != 0) recolepton_eta();
  if (recolepton_phi_branch != 0) recolepton_phi();
  if (recolepton_mt_branch != 0) recolepton_mt();
  if (recolepton_met_dphi_branch != 0) recolepton_met_dphi();
  if (recoiswleplead_branch != 0) recoiswleplead();
  if (reconeutrino_det_branch != 0) reconeutrino_det();
  if (reconeutrino_p4_branch != 0) reconeutrino_p4();
  if (reconeutrino_pt_branch != 0) reconeutrino_pt();
  if (reconeutrino_eta_branch != 0) reconeutrino_eta();
  if (reconeutrino_phi_branch != 0) reconeutrino_phi();
  if (reconeutrino_met_dphi_branch != 0) reconeutrino_met_dphi();
  if (reconeutrino2_p4_branch != 0) reconeutrino2_p4();
  if (reconeutrino2_pt_branch != 0) reconeutrino2_pt();
  if (reconeutrino2_eta_branch != 0) reconeutrino2_eta();
  if (reconeutrino2_phi_branch != 0) reconeutrino2_phi();
  if (reconeutrino2_met_dphi_branch != 0) reconeutrino2_met_dphi();
  if (reconeutrinoinv_p4_branch != 0) reconeutrinoinv_p4();
  if (reconeutrinoinv_pt_branch != 0) reconeutrinoinv_pt();
  if (reconeutrinoinv_eta_branch != 0) reconeutrinoinv_eta();
  if (reconeutrinoinv_phi_branch != 0) reconeutrinoinv_phi();
  if (reconeutrinoinv_met_dphi_branch != 0) reconeutrinoinv_met_dphi();
  if (recowhad_p4_branch != 0) recowhad_p4();
  if (recowhad_pt_branch != 0) recowhad_pt();
  if (recowhad_eta_branch != 0) recowhad_eta();
  if (recowhad_phi_branch != 0) recowhad_phi();
  if (recowhad_mass_branch != 0) recowhad_mass();
  if (recowhad_softdropMass_branch != 0) recowhad_softdropMass();
  if (recowhad_prunedMass_branch != 0) recowhad_prunedMass();
  if (recowhad_nJettinessTau1_branch != 0) recowhad_nJettinessTau1();
  if (recowhad_nJettinessTau2_branch != 0) recowhad_nJettinessTau2();
  if (recowhad_puppi_softdropMass_branch != 0) recowhad_puppi_softdropMass();
  if (recowhad_puppi_pt_branch != 0) recowhad_puppi_pt();
  if (recowhad_puppi_eta_branch != 0) recowhad_puppi_eta();
  if (recowhad_puppi_phi_branch != 0) recowhad_puppi_phi();
  if (recowhad_puppi_mass_branch != 0) recowhad_puppi_mass();
  if (recowhad_puppi_nJettinessTau1_branch != 0) recowhad_puppi_nJettinessTau1();
  if (recowhad_puppi_nJettinessTau2_branch != 0) recowhad_puppi_nJettinessTau2();
  if (recowhad_softdropPuppiSubjet1_branch != 0) recowhad_softdropPuppiSubjet1();
  if (recowhad_softdropPuppiSubjet2_branch != 0) recowhad_softdropPuppiSubjet2();
  if (recowlep_p4_branch != 0) recowlep_p4();
  if (recowlep_pt_branch != 0) recowlep_pt();
  if (recowlep_eta_branch != 0) recowlep_eta();
  if (recowlep_phi_branch != 0) recowlep_phi();
  if (recowlep_mass_branch != 0) recowlep_mass();
  if (recoleadjet_p4_branch != 0) recoleadjet_p4();
  if (recoleadjet_pt_branch != 0) recoleadjet_pt();
  if (recoleadjet_eta_branch != 0) recoleadjet_eta();
  if (recoleadjet_phi_branch != 0) recoleadjet_phi();
  if (recolepton_recowhad_dr_branch != 0) recolepton_recowhad_dr();
  if (recoleadjet_recolepton_dr_branch != 0) recoleadjet_recolepton_dr();
  if (recoleadjet_met_dphi_branch != 0) recoleadjet_met_dphi();
  if (recoleadjet_recowhad_dr_branch != 0) recoleadjet_recowhad_dr();
  if (recowhad_minus_recolepton_p4_branch != 0) recowhad_minus_recolepton_p4();
  if (recowhad_minus_recolepton_pt_branch != 0) recowhad_minus_recolepton_pt();
  if (recowhad_minus_recolepton_eta_branch != 0) recowhad_minus_recolepton_eta();
  if (recowhad_minus_recolepton_phi_branch != 0) recowhad_minus_recolepton_phi();
  if (recowhad_minus_recolepton_mass_branch != 0) recowhad_minus_recolepton_mass();
  if (recowhad_minus_recolepton_positive_p4_branch != 0) recowhad_minus_recolepton_positive_p4();
  if (recowhad_minus_recolepton_positive_pt_branch != 0) recowhad_minus_recolepton_positive_pt();
  if (recowhad_minus_recolepton_positive_eta_branch != 0) recowhad_minus_recolepton_positive_eta();
  if (recowhad_minus_recolepton_positive_phi_branch != 0) recowhad_minus_recolepton_positive_phi();
  if (recowhad_minus_recolepton_positive_mass_branch != 0) recowhad_minus_recolepton_positive_mass();
  if (higgsdecay_branch != 0) higgsdecay();
  if (wstar_channel_id_branch != 0) wstar_channel_id();
  if (nlep_branch != 0) nlep();
  if (nquark_branch != 0) nquark();
  if (wa_id_branch != 0) wa_id();
  if (isr_p4_branch != 0) isr_p4();
  if (isr_pt_branch != 0) isr_pt();
  if (isr_eta_branch != 0) isr_eta();
  if (isr_phi_branch != 0) isr_phi();
  if (higgs_p4_branch != 0) higgs_p4();
  if (decay_p4_branch != 0) decay_p4();
  if (decay_id_branch != 0) decay_id();
  if (decay_isstar_branch != 0) decay_isstar();
  if (lepton_p4_branch != 0) lepton_p4();
  if (lepton_id_branch != 0) lepton_id();
  if (lepton_isstar_branch != 0) lepton_isstar();
  if (neutrino_p4_branch != 0) neutrino_p4();
  if (neutrino_id_branch != 0) neutrino_id();
  if (neutrino_isstar_branch != 0) neutrino_isstar();
  if (quark_p4_branch != 0) quark_p4();
  if (quark_id_branch != 0) quark_id();
  if (quark_isstar_branch != 0) quark_isstar();
  if (lqq_max_dr_branch != 0) lqq_max_dr();
  if (lq0_dr_branch != 0) lq0_dr();
  if (lq1_dr_branch != 0) lq1_dr();
  if (qq_dr_branch != 0) qq_dr();
  if (decay_dr_branch != 0) decay_dr();
  if (l_qq_dr_branch != 0) l_qq_dr();
  if (lqq_mass_branch != 0) lqq_mass();
  if (lvqq_mt_branch != 0) lvqq_mt();
  if (inneriso_branch != 0) inneriso();
  if (pf_p4s_branch != 0) pf_p4s();
  if (pf_drs_branch != 0) pf_drs();
  if (sumpt_oppo_r15_branch != 0) sumpt_oppo_r15();
  if (njet5_oppo_r15_branch != 0) njet5_oppo_r15();
  if (njet10_oppo_r15_branch != 0) njet10_oppo_r15();
  if (njet20_oppo_r15_branch != 0) njet20_oppo_r15();
  if (njet30_oppo_r15_branch != 0) njet30_oppo_r15();
  if (njet50_oppo_r15_branch != 0) njet50_oppo_r15();
  if (sumpt_oppo_branch != 0) sumpt_oppo();
  if (njet5_oppo_branch != 0) njet5_oppo();
  if (njet10_oppo_branch != 0) njet10_oppo();
  if (njet20_oppo_branch != 0) njet20_oppo();
  if (njet30_oppo_branch != 0) njet30_oppo();
  if (njet50_oppo_branch != 0) njet50_oppo();
  if (sumpt_in_fatjet_branch != 0) sumpt_in_fatjet();
  if (njet5_in_fatjet_branch != 0) njet5_in_fatjet();
  if (lepton_eta_branch != 0) lepton_eta();
  if (lepton_phi_branch != 0) lepton_phi();
  if (lepton_pt_branch != 0) lepton_pt();
  if (lepton_relIso03EA_branch != 0) lepton_relIso03EA();
  if (lepton_relIso04DB_branch != 0) lepton_relIso04DB();
  if (lepton_miniIsoEA_branch != 0) lepton_miniIsoEA();
  if (lepton_chiso_branch != 0) lepton_chiso();
  if (lepton_nhiso_branch != 0) lepton_nhiso();
  if (lepton_emiso_branch != 0) lepton_emiso();
  if (lepton_ncorriso_branch != 0) lepton_ncorriso();
  if (lepton_nChargedPf_branch != 0) lepton_nChargedPf();
  if (lepton_nPhotonPf_branch != 0) lepton_nPhotonPf();
  if (lepton_nNeutralHadPf_branch != 0) lepton_nNeutralHadPf();
  if (lepton_isFromW_branch != 0) lepton_isFromW();
  if (lepton_flavor_branch != 0) lepton_flavor();
  if (nvtx_branch != 0) nvtx();
  if (pf_annuli_energy_branch != 0) pf_annuli_energy();
  if (pf_pt_branch != 0) pf_pt();
  if (pf_id_branch != 0) pf_id();
  if (pf_reta_branch != 0) pf_reta();
  if (pf_rphi_branch != 0) pf_rphi();
  if (HLT_Ele27_WPLoose_Gsf_branch != 0) HLT_Ele27_WPLoose_Gsf();
  if (HLT_Ele30_WPLoose_Gsf_branch != 0) HLT_Ele30_WPLoose_Gsf();
  if (HLT_Ele45_WPLoose_Gsf_branch != 0) HLT_Ele45_WPLoose_Gsf();
  if (HLT_Ele105_CaloIdVT_GsfTrkIdT_branch != 0) HLT_Ele105_CaloIdVT_GsfTrkIdT();
  if (HLT_Ele115_CaloIdVT_GsfTrkIdT_branch != 0) HLT_Ele115_CaloIdVT_GsfTrkIdT();
  if (HLT_IsoTkMu24_branch != 0) HLT_IsoTkMu24();
  if (HLT_IsoMu24_branch != 0) HLT_IsoMu24();
  if (HLT_SingleMu50_branch != 0) HLT_SingleMu50();
  if (HLT_SingleEl40_branch != 0) HLT_SingleEl40();
  if (HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch != 0) HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165();
  if (HLT_Mu50_branch != 0) HLT_Mu50();
  if (HLT_TkMu50_branch != 0) HLT_TkMu50();
  if (HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch != 0) HLT_AK8PFHT700_TrimR0p1PT0p03Mass50();
  if (HLT_AK8PFJet360_TrimMass30_branch != 0) HLT_AK8PFJet360_TrimMass30();
  if (HLT_PFHT800_branch != 0) HLT_PFHT800();
  if (HLT_PFHT900_branch != 0) HLT_PFHT900();
  if (HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch != 0) HLT_PFHT650_WideJetMJJ900DEtaJJ1p5();
  if (HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch != 0) HLT_PFHT650_WideJetMJJ950DEtaJJ1p5();
  if (HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch != 0) HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20();
  if (pass_duplicate_se_sm_branch != 0) pass_duplicate_se_sm();
  if (pass_duplicate_sm_se_branch != 0) pass_duplicate_sm_se();
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
  if (htOR_branch != 0) htOR();
  if (htOR40_branch != 0) htOR40();
  if (htOR50_branch != 0) htOR50();
  if (mhOR_branch != 0) mhOR();
  if (mhOR40_branch != 0) mhOR40();
  if (mhOR50_branch != 0) mhOR50();
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

const int &hwwtree::isData() {
  if (not isData_isLoaded) {
    if (isData_branch != 0) {
      isData_branch->GetEntry(index);
    } else {
      printf("branch isData_branch does not exist!\n");
      exit(1);
    }
    isData_isLoaded = true;
  }
  return isData_;
}

const float &hwwtree::evt_scale1fb() {
  if (not evt_scale1fb_isLoaded) {
    if (evt_scale1fb_branch != 0) {
      evt_scale1fb_branch->GetEntry(index);
    } else {
      printf("branch evt_scale1fb_branch does not exist!\n");
      exit(1);
    }
    evt_scale1fb_isLoaded = true;
  }
  return evt_scale1fb_;
}

const float &hwwtree::genps_weight() {
  if (not genps_weight_isLoaded) {
    if (genps_weight_branch != 0) {
      genps_weight_branch->GetEntry(index);
    } else {
      printf("branch genps_weight_branch does not exist!\n");
      exit(1);
    }
    genps_weight_isLoaded = true;
  }
  return genps_weight_;
}

const float &hwwtree::xsec_br() {
  if (not xsec_br_isLoaded) {
    if (xsec_br_branch != 0) {
      xsec_br_branch->GetEntry(index);
    } else {
      printf("branch xsec_br_branch does not exist!\n");
      exit(1);
    }
    xsec_br_isLoaded = true;
  }
  return xsec_br_;
}

const int &hwwtree::evt_passgoodrunlist() {
  if (not evt_passgoodrunlist_isLoaded) {
    if (evt_passgoodrunlist_branch != 0) {
      evt_passgoodrunlist_branch->GetEntry(index);
    } else {
      printf("branch evt_passgoodrunlist_branch does not exist!\n");
      exit(1);
    }
    evt_passgoodrunlist_isLoaded = true;
  }
  return evt_passgoodrunlist_;
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

const float &hwwtree::weight_fr_r1_f1() {
  if (not weight_fr_r1_f1_isLoaded) {
    if (weight_fr_r1_f1_branch != 0) {
      weight_fr_r1_f1_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r1_f1_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r1_f1_isLoaded = true;
  }
  return weight_fr_r1_f1_;
}

const float &hwwtree::weight_fr_r1_f2() {
  if (not weight_fr_r1_f2_isLoaded) {
    if (weight_fr_r1_f2_branch != 0) {
      weight_fr_r1_f2_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r1_f2_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r1_f2_isLoaded = true;
  }
  return weight_fr_r1_f2_;
}

const float &hwwtree::weight_fr_r1_f0p5() {
  if (not weight_fr_r1_f0p5_isLoaded) {
    if (weight_fr_r1_f0p5_branch != 0) {
      weight_fr_r1_f0p5_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r1_f0p5_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r1_f0p5_isLoaded = true;
  }
  return weight_fr_r1_f0p5_;
}

const float &hwwtree::weight_fr_r2_f1() {
  if (not weight_fr_r2_f1_isLoaded) {
    if (weight_fr_r2_f1_branch != 0) {
      weight_fr_r2_f1_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r2_f1_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r2_f1_isLoaded = true;
  }
  return weight_fr_r2_f1_;
}

const float &hwwtree::weight_fr_r2_f2() {
  if (not weight_fr_r2_f2_isLoaded) {
    if (weight_fr_r2_f2_branch != 0) {
      weight_fr_r2_f2_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r2_f2_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r2_f2_isLoaded = true;
  }
  return weight_fr_r2_f2_;
}

const float &hwwtree::weight_fr_r2_f0p5() {
  if (not weight_fr_r2_f0p5_isLoaded) {
    if (weight_fr_r2_f0p5_branch != 0) {
      weight_fr_r2_f0p5_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r2_f0p5_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r2_f0p5_isLoaded = true;
  }
  return weight_fr_r2_f0p5_;
}

const float &hwwtree::weight_fr_r0p5_f1() {
  if (not weight_fr_r0p5_f1_isLoaded) {
    if (weight_fr_r0p5_f1_branch != 0) {
      weight_fr_r0p5_f1_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r0p5_f1_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r0p5_f1_isLoaded = true;
  }
  return weight_fr_r0p5_f1_;
}

const float &hwwtree::weight_fr_r0p5_f2() {
  if (not weight_fr_r0p5_f2_isLoaded) {
    if (weight_fr_r0p5_f2_branch != 0) {
      weight_fr_r0p5_f2_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r0p5_f2_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r0p5_f2_isLoaded = true;
  }
  return weight_fr_r0p5_f2_;
}

const float &hwwtree::weight_fr_r0p5_f0p5() {
  if (not weight_fr_r0p5_f0p5_isLoaded) {
    if (weight_fr_r0p5_f0p5_branch != 0) {
      weight_fr_r0p5_f0p5_branch->GetEntry(index);
    } else {
      printf("branch weight_fr_r0p5_f0p5_branch does not exist!\n");
      exit(1);
    }
    weight_fr_r0p5_f0p5_isLoaded = true;
  }
  return weight_fr_r0p5_f0p5_;
}

const float &hwwtree::weight_pdf_up() {
  if (not weight_pdf_up_isLoaded) {
    if (weight_pdf_up_branch != 0) {
      weight_pdf_up_branch->GetEntry(index);
    } else {
      printf("branch weight_pdf_up_branch does not exist!\n");
      exit(1);
    }
    weight_pdf_up_isLoaded = true;
  }
  return weight_pdf_up_;
}

const float &hwwtree::weight_pdf_down() {
  if (not weight_pdf_down_isLoaded) {
    if (weight_pdf_down_branch != 0) {
      weight_pdf_down_branch->GetEntry(index);
    } else {
      printf("branch weight_pdf_down_branch does not exist!\n");
      exit(1);
    }
    weight_pdf_down_isLoaded = true;
  }
  return weight_pdf_down_;
}

const float &hwwtree::weight_alphas_down() {
  if (not weight_alphas_down_isLoaded) {
    if (weight_alphas_down_branch != 0) {
      weight_alphas_down_branch->GetEntry(index);
    } else {
      printf("branch weight_alphas_down_branch does not exist!\n");
      exit(1);
    }
    weight_alphas_down_isLoaded = true;
  }
  return weight_alphas_down_;
}

const float &hwwtree::weight_alphas_up() {
  if (not weight_alphas_up_isLoaded) {
    if (weight_alphas_up_branch != 0) {
      weight_alphas_up_branch->GetEntry(index);
    } else {
      printf("branch weight_alphas_up_branch does not exist!\n");
      exit(1);
    }
    weight_alphas_up_isLoaded = true;
  }
  return weight_alphas_up_;
}

const float &hwwtree::weight_isr() {
  if (not weight_isr_isLoaded) {
    if (weight_isr_branch != 0) {
      weight_isr_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_branch does not exist!\n");
      exit(1);
    }
    weight_isr_isLoaded = true;
  }
  return weight_isr_;
}

const float &hwwtree::weight_isr_up() {
  if (not weight_isr_up_isLoaded) {
    if (weight_isr_up_branch != 0) {
      weight_isr_up_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_up_branch does not exist!\n");
      exit(1);
    }
    weight_isr_up_isLoaded = true;
  }
  return weight_isr_up_;
}

const float &hwwtree::weight_isr_down() {
  if (not weight_isr_down_isLoaded) {
    if (weight_isr_down_branch != 0) {
      weight_isr_down_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_down_branch does not exist!\n");
      exit(1);
    }
    weight_isr_down_isLoaded = true;
  }
  return weight_isr_down_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::lep_p4() {
  if (not lep_p4_isLoaded) {
    if (lep_p4_branch != 0) {
      lep_p4_branch->GetEntry(index);
    } else {
      printf("branch lep_p4_branch does not exist!\n");
      exit(1);
    }
    lep_p4_isLoaded = true;
  }
  return *lep_p4_;
}

const vector<int> &hwwtree::lep_id() {
  if (not lep_id_isLoaded) {
    if (lep_id_branch != 0) {
      lep_id_branch->GetEntry(index);
    } else {
      printf("branch lep_id_branch does not exist!\n");
      exit(1);
    }
    lep_id_isLoaded = true;
  }
  return *lep_id_;
}

const vector<int> &hwwtree::lep_idx() {
  if (not lep_idx_isLoaded) {
    if (lep_idx_branch != 0) {
      lep_idx_branch->GetEntry(index);
    } else {
      printf("branch lep_idx_branch does not exist!\n");
      exit(1);
    }
    lep_idx_isLoaded = true;
  }
  return *lep_idx_;
}

const vector<float> &hwwtree::lep_pt() {
  if (not lep_pt_isLoaded) {
    if (lep_pt_branch != 0) {
      lep_pt_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_branch does not exist!\n");
      exit(1);
    }
    lep_pt_isLoaded = true;
  }
  return *lep_pt_;
}

const vector<float> &hwwtree::lep_eta() {
  if (not lep_eta_isLoaded) {
    if (lep_eta_branch != 0) {
      lep_eta_branch->GetEntry(index);
    } else {
      printf("branch lep_eta_branch does not exist!\n");
      exit(1);
    }
    lep_eta_isLoaded = true;
  }
  return *lep_eta_;
}

const vector<float> &hwwtree::lep_phi() {
  if (not lep_phi_isLoaded) {
    if (lep_phi_branch != 0) {
      lep_phi_branch->GetEntry(index);
    } else {
      printf("branch lep_phi_branch does not exist!\n");
      exit(1);
    }
    lep_phi_isLoaded = true;
  }
  return *lep_phi_;
}

const vector<float> &hwwtree::lep_miniIsoEA() {
  if (not lep_miniIsoEA_isLoaded) {
    if (lep_miniIsoEA_branch != 0) {
      lep_miniIsoEA_branch->GetEntry(index);
    } else {
      printf("branch lep_miniIsoEA_branch does not exist!\n");
      exit(1);
    }
    lep_miniIsoEA_isLoaded = true;
  }
  return *lep_miniIsoEA_;
}

const vector<float> &hwwtree::lep_relIso03EA() {
  if (not lep_relIso03EA_isLoaded) {
    if (lep_relIso03EA_branch != 0) {
      lep_relIso03EA_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EA_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EA_isLoaded = true;
  }
  return *lep_relIso03EA_;
}

const vector<float> &hwwtree::lep_relIso04DB() {
  if (not lep_relIso04DB_isLoaded) {
    if (lep_relIso04DB_branch != 0) {
      lep_relIso04DB_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04DB_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04DB_isLoaded = true;
  }
  return *lep_relIso04DB_;
}

const vector<float> &hwwtree::lep_customrelIso005EA() {
  if (not lep_customrelIso005EA_isLoaded) {
    if (lep_customrelIso005EA_branch != 0) {
      lep_customrelIso005EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso005EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso005EA_isLoaded = true;
  }
  return *lep_customrelIso005EA_;
}

const vector<float> &hwwtree::lep_customrelIso01EA() {
  if (not lep_customrelIso01EA_isLoaded) {
    if (lep_customrelIso01EA_branch != 0) {
      lep_customrelIso01EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso01EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso01EA_isLoaded = true;
  }
  return *lep_customrelIso01EA_;
}

const vector<float> &hwwtree::lep_customrelIso015EA() {
  if (not lep_customrelIso015EA_isLoaded) {
    if (lep_customrelIso015EA_branch != 0) {
      lep_customrelIso015EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso015EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso015EA_isLoaded = true;
  }
  return *lep_customrelIso015EA_;
}

const vector<float> &hwwtree::lep_customrelIso02EA() {
  if (not lep_customrelIso02EA_isLoaded) {
    if (lep_customrelIso02EA_branch != 0) {
      lep_customrelIso02EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso02EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso02EA_isLoaded = true;
  }
  return *lep_customrelIso02EA_;
}

const vector<float> &hwwtree::lep_customrelIso025EA() {
  if (not lep_customrelIso025EA_isLoaded) {
    if (lep_customrelIso025EA_branch != 0) {
      lep_customrelIso025EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso025EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso025EA_isLoaded = true;
  }
  return *lep_customrelIso025EA_;
}

const vector<float> &hwwtree::lep_customrelIso03EA() {
  if (not lep_customrelIso03EA_isLoaded) {
    if (lep_customrelIso03EA_branch != 0) {
      lep_customrelIso03EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso03EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso03EA_isLoaded = true;
  }
  return *lep_customrelIso03EA_;
}

const vector<float> &hwwtree::lep_customrelIso035EA() {
  if (not lep_customrelIso035EA_isLoaded) {
    if (lep_customrelIso035EA_branch != 0) {
      lep_customrelIso035EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso035EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso035EA_isLoaded = true;
  }
  return *lep_customrelIso035EA_;
}

const vector<float> &hwwtree::lep_customrelIso04EA() {
  if (not lep_customrelIso04EA_isLoaded) {
    if (lep_customrelIso04EA_branch != 0) {
      lep_customrelIso04EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso04EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso04EA_isLoaded = true;
  }
  return *lep_customrelIso04EA_;
}

const vector<float> &hwwtree::lep_customrelIso045EA() {
  if (not lep_customrelIso045EA_isLoaded) {
    if (lep_customrelIso045EA_branch != 0) {
      lep_customrelIso045EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso045EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso045EA_isLoaded = true;
  }
  return *lep_customrelIso045EA_;
}

const vector<float> &hwwtree::lep_customrelIso05EA() {
  if (not lep_customrelIso05EA_isLoaded) {
    if (lep_customrelIso05EA_branch != 0) {
      lep_customrelIso05EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso05EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso05EA_isLoaded = true;
  }
  return *lep_customrelIso05EA_;
}

const vector<float> &hwwtree::lep_customrelIso055EA() {
  if (not lep_customrelIso055EA_isLoaded) {
    if (lep_customrelIso055EA_branch != 0) {
      lep_customrelIso055EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso055EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso055EA_isLoaded = true;
  }
  return *lep_customrelIso055EA_;
}

const vector<float> &hwwtree::lep_customrelIso06EA() {
  if (not lep_customrelIso06EA_isLoaded) {
    if (lep_customrelIso06EA_branch != 0) {
      lep_customrelIso06EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso06EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso06EA_isLoaded = true;
  }
  return *lep_customrelIso06EA_;
}

const vector<float> &hwwtree::lep_customrelIso065EA() {
  if (not lep_customrelIso065EA_isLoaded) {
    if (lep_customrelIso065EA_branch != 0) {
      lep_customrelIso065EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso065EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso065EA_isLoaded = true;
  }
  return *lep_customrelIso065EA_;
}

const vector<float> &hwwtree::lep_customrelIso07EA() {
  if (not lep_customrelIso07EA_isLoaded) {
    if (lep_customrelIso07EA_branch != 0) {
      lep_customrelIso07EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso07EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso07EA_isLoaded = true;
  }
  return *lep_customrelIso07EA_;
}

const vector<float> &hwwtree::lep_customrelIso075EA() {
  if (not lep_customrelIso075EA_isLoaded) {
    if (lep_customrelIso075EA_branch != 0) {
      lep_customrelIso075EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso075EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso075EA_isLoaded = true;
  }
  return *lep_customrelIso075EA_;
}

const vector<float> &hwwtree::lep_customrelIso08EA() {
  if (not lep_customrelIso08EA_isLoaded) {
    if (lep_customrelIso08EA_branch != 0) {
      lep_customrelIso08EA_branch->GetEntry(index);
    } else {
      printf("branch lep_customrelIso08EA_branch does not exist!\n");
      exit(1);
    }
    lep_customrelIso08EA_isLoaded = true;
  }
  return *lep_customrelIso08EA_;
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

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::lep_p4_0() {
  if (not lep_p4_0_isLoaded) {
    if (lep_p4_0_branch != 0) {
      lep_p4_0_branch->GetEntry(index);
    } else {
      printf("branch lep_p4_0_branch does not exist!\n");
      exit(1);
    }
    lep_p4_0_isLoaded = true;
  }
  return *lep_p4_0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::lep_p4_1() {
  if (not lep_p4_1_isLoaded) {
    if (lep_p4_1_branch != 0) {
      lep_p4_1_branch->GetEntry(index);
    } else {
      printf("branch lep_p4_1_branch does not exist!\n");
      exit(1);
    }
    lep_p4_1_isLoaded = true;
  }
  return *lep_p4_1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::lep_p4_2() {
  if (not lep_p4_2_isLoaded) {
    if (lep_p4_2_branch != 0) {
      lep_p4_2_branch->GetEntry(index);
    } else {
      printf("branch lep_p4_2_branch does not exist!\n");
      exit(1);
    }
    lep_p4_2_isLoaded = true;
  }
  return *lep_p4_2_;
}

const float &hwwtree::lep_pt_0() {
  if (not lep_pt_0_isLoaded) {
    if (lep_pt_0_branch != 0) {
      lep_pt_0_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_0_branch does not exist!\n");
      exit(1);
    }
    lep_pt_0_isLoaded = true;
  }
  return lep_pt_0_;
}

const float &hwwtree::lep_pt_1() {
  if (not lep_pt_1_isLoaded) {
    if (lep_pt_1_branch != 0) {
      lep_pt_1_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_1_branch does not exist!\n");
      exit(1);
    }
    lep_pt_1_isLoaded = true;
  }
  return lep_pt_1_;
}

const float &hwwtree::lep_pt_2() {
  if (not lep_pt_2_isLoaded) {
    if (lep_pt_2_branch != 0) {
      lep_pt_2_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_2_branch does not exist!\n");
      exit(1);
    }
    lep_pt_2_isLoaded = true;
  }
  return lep_pt_2_;
}

const float &hwwtree::lep_eta_0() {
  if (not lep_eta_0_isLoaded) {
    if (lep_eta_0_branch != 0) {
      lep_eta_0_branch->GetEntry(index);
    } else {
      printf("branch lep_eta_0_branch does not exist!\n");
      exit(1);
    }
    lep_eta_0_isLoaded = true;
  }
  return lep_eta_0_;
}

const float &hwwtree::lep_eta_1() {
  if (not lep_eta_1_isLoaded) {
    if (lep_eta_1_branch != 0) {
      lep_eta_1_branch->GetEntry(index);
    } else {
      printf("branch lep_eta_1_branch does not exist!\n");
      exit(1);
    }
    lep_eta_1_isLoaded = true;
  }
  return lep_eta_1_;
}

const float &hwwtree::lep_eta_2() {
  if (not lep_eta_2_isLoaded) {
    if (lep_eta_2_branch != 0) {
      lep_eta_2_branch->GetEntry(index);
    } else {
      printf("branch lep_eta_2_branch does not exist!\n");
      exit(1);
    }
    lep_eta_2_isLoaded = true;
  }
  return lep_eta_2_;
}

const float &hwwtree::lep_phi_0() {
  if (not lep_phi_0_isLoaded) {
    if (lep_phi_0_branch != 0) {
      lep_phi_0_branch->GetEntry(index);
    } else {
      printf("branch lep_phi_0_branch does not exist!\n");
      exit(1);
    }
    lep_phi_0_isLoaded = true;
  }
  return lep_phi_0_;
}

const float &hwwtree::lep_phi_1() {
  if (not lep_phi_1_isLoaded) {
    if (lep_phi_1_branch != 0) {
      lep_phi_1_branch->GetEntry(index);
    } else {
      printf("branch lep_phi_1_branch does not exist!\n");
      exit(1);
    }
    lep_phi_1_isLoaded = true;
  }
  return lep_phi_1_;
}

const float &hwwtree::lep_phi_2() {
  if (not lep_phi_2_isLoaded) {
    if (lep_phi_2_branch != 0) {
      lep_phi_2_branch->GetEntry(index);
    } else {
      printf("branch lep_phi_2_branch does not exist!\n");
      exit(1);
    }
    lep_phi_2_isLoaded = true;
  }
  return lep_phi_2_;
}

const float &hwwtree::lep_miniIsoEA_0() {
  if (not lep_miniIsoEA_0_isLoaded) {
    if (lep_miniIsoEA_0_branch != 0) {
      lep_miniIsoEA_0_branch->GetEntry(index);
    } else {
      printf("branch lep_miniIsoEA_0_branch does not exist!\n");
      exit(1);
    }
    lep_miniIsoEA_0_isLoaded = true;
  }
  return lep_miniIsoEA_0_;
}

const float &hwwtree::lep_miniIsoEA_1() {
  if (not lep_miniIsoEA_1_isLoaded) {
    if (lep_miniIsoEA_1_branch != 0) {
      lep_miniIsoEA_1_branch->GetEntry(index);
    } else {
      printf("branch lep_miniIsoEA_1_branch does not exist!\n");
      exit(1);
    }
    lep_miniIsoEA_1_isLoaded = true;
  }
  return lep_miniIsoEA_1_;
}

const float &hwwtree::lep_miniIsoEA_2() {
  if (not lep_miniIsoEA_2_isLoaded) {
    if (lep_miniIsoEA_2_branch != 0) {
      lep_miniIsoEA_2_branch->GetEntry(index);
    } else {
      printf("branch lep_miniIsoEA_2_branch does not exist!\n");
      exit(1);
    }
    lep_miniIsoEA_2_isLoaded = true;
  }
  return lep_miniIsoEA_2_;
}

const float &hwwtree::lep_relIso03EA_0() {
  if (not lep_relIso03EA_0_isLoaded) {
    if (lep_relIso03EA_0_branch != 0) {
      lep_relIso03EA_0_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EA_0_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EA_0_isLoaded = true;
  }
  return lep_relIso03EA_0_;
}

const float &hwwtree::lep_relIso03EA_1() {
  if (not lep_relIso03EA_1_isLoaded) {
    if (lep_relIso03EA_1_branch != 0) {
      lep_relIso03EA_1_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EA_1_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EA_1_isLoaded = true;
  }
  return lep_relIso03EA_1_;
}

const float &hwwtree::lep_relIso03EA_2() {
  if (not lep_relIso03EA_2_isLoaded) {
    if (lep_relIso03EA_2_branch != 0) {
      lep_relIso03EA_2_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EA_2_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EA_2_isLoaded = true;
  }
  return lep_relIso03EA_2_;
}

const float &hwwtree::lep_relIso04DB_0() {
  if (not lep_relIso04DB_0_isLoaded) {
    if (lep_relIso04DB_0_branch != 0) {
      lep_relIso04DB_0_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04DB_0_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04DB_0_isLoaded = true;
  }
  return lep_relIso04DB_0_;
}

const float &hwwtree::lep_relIso04DB_1() {
  if (not lep_relIso04DB_1_isLoaded) {
    if (lep_relIso04DB_1_branch != 0) {
      lep_relIso04DB_1_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04DB_1_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04DB_1_isLoaded = true;
  }
  return lep_relIso04DB_1_;
}

const float &hwwtree::lep_relIso04DB_2() {
  if (not lep_relIso04DB_2_isLoaded) {
    if (lep_relIso04DB_2_branch != 0) {
      lep_relIso04DB_2_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04DB_2_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04DB_2_isLoaded = true;
  }
  return lep_relIso04DB_2_;
}

const int &hwwtree::lep_id_0() {
  if (not lep_id_0_isLoaded) {
    if (lep_id_0_branch != 0) {
      lep_id_0_branch->GetEntry(index);
    } else {
      printf("branch lep_id_0_branch does not exist!\n");
      exit(1);
    }
    lep_id_0_isLoaded = true;
  }
  return lep_id_0_;
}

const int &hwwtree::lep_id_1() {
  if (not lep_id_1_isLoaded) {
    if (lep_id_1_branch != 0) {
      lep_id_1_branch->GetEntry(index);
    } else {
      printf("branch lep_id_1_branch does not exist!\n");
      exit(1);
    }
    lep_id_1_isLoaded = true;
  }
  return lep_id_1_;
}

const int &hwwtree::lep_id_2() {
  if (not lep_id_2_isLoaded) {
    if (lep_id_2_branch != 0) {
      lep_id_2_branch->GetEntry(index);
    } else {
      printf("branch lep_id_2_branch does not exist!\n");
      exit(1);
    }
    lep_id_2_isLoaded = true;
  }
  return lep_id_2_;
}

const int &hwwtree::lep_idx_0() {
  if (not lep_idx_0_isLoaded) {
    if (lep_idx_0_branch != 0) {
      lep_idx_0_branch->GetEntry(index);
    } else {
      printf("branch lep_idx_0_branch does not exist!\n");
      exit(1);
    }
    lep_idx_0_isLoaded = true;
  }
  return lep_idx_0_;
}

const int &hwwtree::lep_idx_1() {
  if (not lep_idx_1_isLoaded) {
    if (lep_idx_1_branch != 0) {
      lep_idx_1_branch->GetEntry(index);
    } else {
      printf("branch lep_idx_1_branch does not exist!\n");
      exit(1);
    }
    lep_idx_1_isLoaded = true;
  }
  return lep_idx_1_;
}

const int &hwwtree::lep_idx_2() {
  if (not lep_idx_2_isLoaded) {
    if (lep_idx_2_branch != 0) {
      lep_idx_2_branch->GetEntry(index);
    } else {
      printf("branch lep_idx_2_branch does not exist!\n");
      exit(1);
    }
    lep_idx_2_isLoaded = true;
  }
  return lep_idx_2_;
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

const float &hwwtree::ht() {
  if (not ht_isLoaded) {
    if (ht_branch != 0) {
      ht_branch->GetEntry(index);
    } else {
      printf("branch ht_branch does not exist!\n");
      exit(1);
    }
    ht_isLoaded = true;
  }
  return ht_;
}

const float &hwwtree::ht40() {
  if (not ht40_isLoaded) {
    if (ht40_branch != 0) {
      ht40_branch->GetEntry(index);
    } else {
      printf("branch ht40_branch does not exist!\n");
      exit(1);
    }
    ht40_isLoaded = true;
  }
  return ht40_;
}

const float &hwwtree::ht50() {
  if (not ht50_isLoaded) {
    if (ht50_branch != 0) {
      ht50_branch->GetEntry(index);
    } else {
      printf("branch ht50_branch does not exist!\n");
      exit(1);
    }
    ht50_isLoaded = true;
  }
  return ht50_;
}

const float &hwwtree::mh() {
  if (not mh_isLoaded) {
    if (mh_branch != 0) {
      mh_branch->GetEntry(index);
    } else {
      printf("branch mh_branch does not exist!\n");
      exit(1);
    }
    mh_isLoaded = true;
  }
  return mh_;
}

const float &hwwtree::mh40() {
  if (not mh40_isLoaded) {
    if (mh40_branch != 0) {
      mh40_branch->GetEntry(index);
    } else {
      printf("branch mh40_branch does not exist!\n");
      exit(1);
    }
    mh40_isLoaded = true;
  }
  return mh40_;
}

const float &hwwtree::mh50() {
  if (not mh50_isLoaded) {
    if (mh50_branch != 0) {
      mh50_branch->GetEntry(index);
    } else {
      printf("branch mh50_branch does not exist!\n");
      exit(1);
    }
    mh50_isLoaded = true;
  }
  return mh50_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::alljets_p4() {
  if (not alljets_p4_isLoaded) {
    if (alljets_p4_branch != 0) {
      alljets_p4_branch->GetEntry(index);
    } else {
      printf("branch alljets_p4_branch does not exist!\n");
      exit(1);
    }
    alljets_p4_isLoaded = true;
  }
  return *alljets_p4_;
}

const vector<float> &hwwtree::alljets_pt() {
  if (not alljets_pt_isLoaded) {
    if (alljets_pt_branch != 0) {
      alljets_pt_branch->GetEntry(index);
    } else {
      printf("branch alljets_pt_branch does not exist!\n");
      exit(1);
    }
    alljets_pt_isLoaded = true;
  }
  return *alljets_pt_;
}

const vector<float> &hwwtree::alljets_eta() {
  if (not alljets_eta_isLoaded) {
    if (alljets_eta_branch != 0) {
      alljets_eta_branch->GetEntry(index);
    } else {
      printf("branch alljets_eta_branch does not exist!\n");
      exit(1);
    }
    alljets_eta_isLoaded = true;
  }
  return *alljets_eta_;
}

const vector<float> &hwwtree::alljets_phi() {
  if (not alljets_phi_isLoaded) {
    if (alljets_phi_branch != 0) {
      alljets_phi_branch->GetEntry(index);
    } else {
      printf("branch alljets_phi_branch does not exist!\n");
      exit(1);
    }
    alljets_phi_isLoaded = true;
  }
  return *alljets_phi_;
}

const vector<float> &hwwtree::alljets_csv() {
  if (not alljets_csv_isLoaded) {
    if (alljets_csv_branch != 0) {
      alljets_csv_branch->GetEntry(index);
    } else {
      printf("branch alljets_csv_branch does not exist!\n");
      exit(1);
    }
    alljets_csv_isLoaded = true;
  }
  return *alljets_csv_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::jets_p4() {
  if (not jets_p4_isLoaded) {
    if (jets_p4_branch != 0) {
      jets_p4_branch->GetEntry(index);
    } else {
      printf("branch jets_p4_branch does not exist!\n");
      exit(1);
    }
    jets_p4_isLoaded = true;
  }
  return *jets_p4_;
}

const vector<float> &hwwtree::jets_pt() {
  if (not jets_pt_isLoaded) {
    if (jets_pt_branch != 0) {
      jets_pt_branch->GetEntry(index);
    } else {
      printf("branch jets_pt_branch does not exist!\n");
      exit(1);
    }
    jets_pt_isLoaded = true;
  }
  return *jets_pt_;
}

const vector<float> &hwwtree::jets_eta() {
  if (not jets_eta_isLoaded) {
    if (jets_eta_branch != 0) {
      jets_eta_branch->GetEntry(index);
    } else {
      printf("branch jets_eta_branch does not exist!\n");
      exit(1);
    }
    jets_eta_isLoaded = true;
  }
  return *jets_eta_;
}

const vector<float> &hwwtree::jets_phi() {
  if (not jets_phi_isLoaded) {
    if (jets_phi_branch != 0) {
      jets_phi_branch->GetEntry(index);
    } else {
      printf("branch jets_phi_branch does not exist!\n");
      exit(1);
    }
    jets_phi_isLoaded = true;
  }
  return *jets_phi_;
}

const vector<float> &hwwtree::jets_csv() {
  if (not jets_csv_isLoaded) {
    if (jets_csv_branch != 0) {
      jets_csv_branch->GetEntry(index);
    } else {
      printf("branch jets_csv_branch does not exist!\n");
      exit(1);
    }
    jets_csv_isLoaded = true;
  }
  return *jets_csv_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::jets_up_p4() {
  if (not jets_up_p4_isLoaded) {
    if (jets_up_p4_branch != 0) {
      jets_up_p4_branch->GetEntry(index);
    } else {
      printf("branch jets_up_p4_branch does not exist!\n");
      exit(1);
    }
    jets_up_p4_isLoaded = true;
  }
  return *jets_up_p4_;
}

const vector<float> &hwwtree::jets_up_pt() {
  if (not jets_up_pt_isLoaded) {
    if (jets_up_pt_branch != 0) {
      jets_up_pt_branch->GetEntry(index);
    } else {
      printf("branch jets_up_pt_branch does not exist!\n");
      exit(1);
    }
    jets_up_pt_isLoaded = true;
  }
  return *jets_up_pt_;
}

const vector<float> &hwwtree::jets_up_eta() {
  if (not jets_up_eta_isLoaded) {
    if (jets_up_eta_branch != 0) {
      jets_up_eta_branch->GetEntry(index);
    } else {
      printf("branch jets_up_eta_branch does not exist!\n");
      exit(1);
    }
    jets_up_eta_isLoaded = true;
  }
  return *jets_up_eta_;
}

const vector<float> &hwwtree::jets_up_phi() {
  if (not jets_up_phi_isLoaded) {
    if (jets_up_phi_branch != 0) {
      jets_up_phi_branch->GetEntry(index);
    } else {
      printf("branch jets_up_phi_branch does not exist!\n");
      exit(1);
    }
    jets_up_phi_isLoaded = true;
  }
  return *jets_up_phi_;
}

const vector<float> &hwwtree::jets_up_csv() {
  if (not jets_up_csv_isLoaded) {
    if (jets_up_csv_branch != 0) {
      jets_up_csv_branch->GetEntry(index);
    } else {
      printf("branch jets_up_csv_branch does not exist!\n");
      exit(1);
    }
    jets_up_csv_isLoaded = true;
  }
  return *jets_up_csv_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::jets_dn_p4() {
  if (not jets_dn_p4_isLoaded) {
    if (jets_dn_p4_branch != 0) {
      jets_dn_p4_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_p4_branch does not exist!\n");
      exit(1);
    }
    jets_dn_p4_isLoaded = true;
  }
  return *jets_dn_p4_;
}

const vector<float> &hwwtree::jets_dn_pt() {
  if (not jets_dn_pt_isLoaded) {
    if (jets_dn_pt_branch != 0) {
      jets_dn_pt_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_pt_branch does not exist!\n");
      exit(1);
    }
    jets_dn_pt_isLoaded = true;
  }
  return *jets_dn_pt_;
}

const vector<float> &hwwtree::jets_dn_eta() {
  if (not jets_dn_eta_isLoaded) {
    if (jets_dn_eta_branch != 0) {
      jets_dn_eta_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_eta_branch does not exist!\n");
      exit(1);
    }
    jets_dn_eta_isLoaded = true;
  }
  return *jets_dn_eta_;
}

const vector<float> &hwwtree::jets_dn_phi() {
  if (not jets_dn_phi_isLoaded) {
    if (jets_dn_phi_branch != 0) {
      jets_dn_phi_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_phi_branch does not exist!\n");
      exit(1);
    }
    jets_dn_phi_isLoaded = true;
  }
  return *jets_dn_phi_;
}

const vector<float> &hwwtree::jets_dn_csv() {
  if (not jets_dn_csv_isLoaded) {
    if (jets_dn_csv_branch != 0) {
      jets_dn_csv_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_csv_branch does not exist!\n");
      exit(1);
    }
    jets_dn_csv_isLoaded = true;
  }
  return *jets_dn_csv_;
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

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::ak8jets_p4() {
  if (not ak8jets_p4_isLoaded) {
    if (ak8jets_p4_branch != 0) {
      ak8jets_p4_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_p4_branch does not exist!\n");
      exit(1);
    }
    ak8jets_p4_isLoaded = true;
  }
  return *ak8jets_p4_;
}

const vector<float> &hwwtree::ak8jets_pt() {
  if (not ak8jets_pt_isLoaded) {
    if (ak8jets_pt_branch != 0) {
      ak8jets_pt_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_isLoaded = true;
  }
  return *ak8jets_pt_;
}

const vector<float> &hwwtree::ak8jets_eta() {
  if (not ak8jets_eta_isLoaded) {
    if (ak8jets_eta_branch != 0) {
      ak8jets_eta_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_eta_branch does not exist!\n");
      exit(1);
    }
    ak8jets_eta_isLoaded = true;
  }
  return *ak8jets_eta_;
}

const vector<float> &hwwtree::ak8jets_phi() {
  if (not ak8jets_phi_isLoaded) {
    if (ak8jets_phi_branch != 0) {
      ak8jets_phi_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_phi_branch does not exist!\n");
      exit(1);
    }
    ak8jets_phi_isLoaded = true;
  }
  return *ak8jets_phi_;
}

const vector<float> &hwwtree::ak8jets_softdropMass() {
  if (not ak8jets_softdropMass_isLoaded) {
    if (ak8jets_softdropMass_branch != 0) {
      ak8jets_softdropMass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropMass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropMass_isLoaded = true;
  }
  return *ak8jets_softdropMass_;
}

const vector<float> &hwwtree::ak8jets_prunedMass() {
  if (not ak8jets_prunedMass_isLoaded) {
    if (ak8jets_prunedMass_branch != 0) {
      ak8jets_prunedMass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_prunedMass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_prunedMass_isLoaded = true;
  }
  return *ak8jets_prunedMass_;
}

const vector<float> &hwwtree::ak8jets_trimmedMass() {
  if (not ak8jets_trimmedMass_isLoaded) {
    if (ak8jets_trimmedMass_branch != 0) {
      ak8jets_trimmedMass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_trimmedMass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_trimmedMass_isLoaded = true;
  }
  return *ak8jets_trimmedMass_;
}

const vector<float> &hwwtree::ak8jets_mass() {
  if (not ak8jets_mass_isLoaded) {
    if (ak8jets_mass_branch != 0) {
      ak8jets_mass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_mass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_mass_isLoaded = true;
  }
  return *ak8jets_mass_;
}

const vector<float> &hwwtree::ak8jets_nJettinessTau1() {
  if (not ak8jets_nJettinessTau1_isLoaded) {
    if (ak8jets_nJettinessTau1_branch != 0) {
      ak8jets_nJettinessTau1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau1_isLoaded = true;
  }
  return *ak8jets_nJettinessTau1_;
}

const vector<float> &hwwtree::ak8jets_nJettinessTau2() {
  if (not ak8jets_nJettinessTau2_isLoaded) {
    if (ak8jets_nJettinessTau2_branch != 0) {
      ak8jets_nJettinessTau2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau2_isLoaded = true;
  }
  return *ak8jets_nJettinessTau2_;
}

const vector<float> &hwwtree::ak8jets_softdropPuppiSubjet1() {
  if (not ak8jets_softdropPuppiSubjet1_isLoaded) {
    if (ak8jets_softdropPuppiSubjet1_branch != 0) {
      ak8jets_softdropPuppiSubjet1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet1_isLoaded = true;
  }
  return *ak8jets_softdropPuppiSubjet1_;
}

const vector<float> &hwwtree::ak8jets_softdropPuppiSubjet2() {
  if (not ak8jets_softdropPuppiSubjet2_isLoaded) {
    if (ak8jets_softdropPuppiSubjet2_branch != 0) {
      ak8jets_softdropPuppiSubjet2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet2_isLoaded = true;
  }
  return *ak8jets_softdropPuppiSubjet2_;
}

const vector<float> &hwwtree::ak8jets_puppi_softdropMass() {
  if (not ak8jets_puppi_softdropMass_isLoaded) {
    if (ak8jets_puppi_softdropMass_branch != 0) {
      ak8jets_puppi_softdropMass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_softdropMass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_softdropMass_isLoaded = true;
  }
  return *ak8jets_puppi_softdropMass_;
}

const vector<float> &hwwtree::ak8jets_puppi_nJettinessTau1() {
  if (not ak8jets_puppi_nJettinessTau1_isLoaded) {
    if (ak8jets_puppi_nJettinessTau1_branch != 0) {
      ak8jets_puppi_nJettinessTau1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau1_isLoaded = true;
  }
  return *ak8jets_puppi_nJettinessTau1_;
}

const vector<float> &hwwtree::ak8jets_puppi_nJettinessTau2() {
  if (not ak8jets_puppi_nJettinessTau2_isLoaded) {
    if (ak8jets_puppi_nJettinessTau2_branch != 0) {
      ak8jets_puppi_nJettinessTau2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau2_isLoaded = true;
  }
  return *ak8jets_puppi_nJettinessTau2_;
}

const vector<float> &hwwtree::ak8jets_puppi_eta() {
  if (not ak8jets_puppi_eta_isLoaded) {
    if (ak8jets_puppi_eta_branch != 0) {
      ak8jets_puppi_eta_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_eta_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_eta_isLoaded = true;
  }
  return *ak8jets_puppi_eta_;
}

const vector<float> &hwwtree::ak8jets_puppi_phi() {
  if (not ak8jets_puppi_phi_isLoaded) {
    if (ak8jets_puppi_phi_branch != 0) {
      ak8jets_puppi_phi_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_phi_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_phi_isLoaded = true;
  }
  return *ak8jets_puppi_phi_;
}

const vector<float> &hwwtree::ak8jets_puppi_pt() {
  if (not ak8jets_puppi_pt_isLoaded) {
    if (ak8jets_puppi_pt_branch != 0) {
      ak8jets_puppi_pt_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_pt_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_pt_isLoaded = true;
  }
  return *ak8jets_puppi_pt_;
}

const vector<float> &hwwtree::ak8jets_puppi_mass() {
  if (not ak8jets_puppi_mass_isLoaded) {
    if (ak8jets_puppi_mass_branch != 0) {
      ak8jets_puppi_mass_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_mass_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_mass_isLoaded = true;
  }
  return *ak8jets_puppi_mass_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_p4_0() {
  if (not jets_p4_0_isLoaded) {
    if (jets_p4_0_branch != 0) {
      jets_p4_0_branch->GetEntry(index);
    } else {
      printf("branch jets_p4_0_branch does not exist!\n");
      exit(1);
    }
    jets_p4_0_isLoaded = true;
  }
  return *jets_p4_0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_p4_1() {
  if (not jets_p4_1_isLoaded) {
    if (jets_p4_1_branch != 0) {
      jets_p4_1_branch->GetEntry(index);
    } else {
      printf("branch jets_p4_1_branch does not exist!\n");
      exit(1);
    }
    jets_p4_1_isLoaded = true;
  }
  return *jets_p4_1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_p4_2() {
  if (not jets_p4_2_isLoaded) {
    if (jets_p4_2_branch != 0) {
      jets_p4_2_branch->GetEntry(index);
    } else {
      printf("branch jets_p4_2_branch does not exist!\n");
      exit(1);
    }
    jets_p4_2_isLoaded = true;
  }
  return *jets_p4_2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_up_p4_0() {
  if (not jets_up_p4_0_isLoaded) {
    if (jets_up_p4_0_branch != 0) {
      jets_up_p4_0_branch->GetEntry(index);
    } else {
      printf("branch jets_up_p4_0_branch does not exist!\n");
      exit(1);
    }
    jets_up_p4_0_isLoaded = true;
  }
  return *jets_up_p4_0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_up_p4_1() {
  if (not jets_up_p4_1_isLoaded) {
    if (jets_up_p4_1_branch != 0) {
      jets_up_p4_1_branch->GetEntry(index);
    } else {
      printf("branch jets_up_p4_1_branch does not exist!\n");
      exit(1);
    }
    jets_up_p4_1_isLoaded = true;
  }
  return *jets_up_p4_1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_up_p4_2() {
  if (not jets_up_p4_2_isLoaded) {
    if (jets_up_p4_2_branch != 0) {
      jets_up_p4_2_branch->GetEntry(index);
    } else {
      printf("branch jets_up_p4_2_branch does not exist!\n");
      exit(1);
    }
    jets_up_p4_2_isLoaded = true;
  }
  return *jets_up_p4_2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_dn_p4_0() {
  if (not jets_dn_p4_0_isLoaded) {
    if (jets_dn_p4_0_branch != 0) {
      jets_dn_p4_0_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_p4_0_branch does not exist!\n");
      exit(1);
    }
    jets_dn_p4_0_isLoaded = true;
  }
  return *jets_dn_p4_0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_dn_p4_1() {
  if (not jets_dn_p4_1_isLoaded) {
    if (jets_dn_p4_1_branch != 0) {
      jets_dn_p4_1_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_p4_1_branch does not exist!\n");
      exit(1);
    }
    jets_dn_p4_1_isLoaded = true;
  }
  return *jets_dn_p4_1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::jets_dn_p4_2() {
  if (not jets_dn_p4_2_isLoaded) {
    if (jets_dn_p4_2_branch != 0) {
      jets_dn_p4_2_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_p4_2_branch does not exist!\n");
      exit(1);
    }
    jets_dn_p4_2_isLoaded = true;
  }
  return *jets_dn_p4_2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::ak8jets_p4_0() {
  if (not ak8jets_p4_0_isLoaded) {
    if (ak8jets_p4_0_branch != 0) {
      ak8jets_p4_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_p4_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_p4_0_isLoaded = true;
  }
  return *ak8jets_p4_0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::ak8jets_p4_1() {
  if (not ak8jets_p4_1_isLoaded) {
    if (ak8jets_p4_1_branch != 0) {
      ak8jets_p4_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_p4_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_p4_1_isLoaded = true;
  }
  return *ak8jets_p4_1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::ak8jets_p4_2() {
  if (not ak8jets_p4_2_isLoaded) {
    if (ak8jets_p4_2_branch != 0) {
      ak8jets_p4_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_p4_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_p4_2_isLoaded = true;
  }
  return *ak8jets_p4_2_;
}

const float &hwwtree::jets_pt_0() {
  if (not jets_pt_0_isLoaded) {
    if (jets_pt_0_branch != 0) {
      jets_pt_0_branch->GetEntry(index);
    } else {
      printf("branch jets_pt_0_branch does not exist!\n");
      exit(1);
    }
    jets_pt_0_isLoaded = true;
  }
  return jets_pt_0_;
}

const float &hwwtree::jets_pt_1() {
  if (not jets_pt_1_isLoaded) {
    if (jets_pt_1_branch != 0) {
      jets_pt_1_branch->GetEntry(index);
    } else {
      printf("branch jets_pt_1_branch does not exist!\n");
      exit(1);
    }
    jets_pt_1_isLoaded = true;
  }
  return jets_pt_1_;
}

const float &hwwtree::jets_pt_2() {
  if (not jets_pt_2_isLoaded) {
    if (jets_pt_2_branch != 0) {
      jets_pt_2_branch->GetEntry(index);
    } else {
      printf("branch jets_pt_2_branch does not exist!\n");
      exit(1);
    }
    jets_pt_2_isLoaded = true;
  }
  return jets_pt_2_;
}

const float &hwwtree::jets_eta_0() {
  if (not jets_eta_0_isLoaded) {
    if (jets_eta_0_branch != 0) {
      jets_eta_0_branch->GetEntry(index);
    } else {
      printf("branch jets_eta_0_branch does not exist!\n");
      exit(1);
    }
    jets_eta_0_isLoaded = true;
  }
  return jets_eta_0_;
}

const float &hwwtree::jets_eta_1() {
  if (not jets_eta_1_isLoaded) {
    if (jets_eta_1_branch != 0) {
      jets_eta_1_branch->GetEntry(index);
    } else {
      printf("branch jets_eta_1_branch does not exist!\n");
      exit(1);
    }
    jets_eta_1_isLoaded = true;
  }
  return jets_eta_1_;
}

const float &hwwtree::jets_eta_2() {
  if (not jets_eta_2_isLoaded) {
    if (jets_eta_2_branch != 0) {
      jets_eta_2_branch->GetEntry(index);
    } else {
      printf("branch jets_eta_2_branch does not exist!\n");
      exit(1);
    }
    jets_eta_2_isLoaded = true;
  }
  return jets_eta_2_;
}

const float &hwwtree::jets_phi_0() {
  if (not jets_phi_0_isLoaded) {
    if (jets_phi_0_branch != 0) {
      jets_phi_0_branch->GetEntry(index);
    } else {
      printf("branch jets_phi_0_branch does not exist!\n");
      exit(1);
    }
    jets_phi_0_isLoaded = true;
  }
  return jets_phi_0_;
}

const float &hwwtree::jets_phi_1() {
  if (not jets_phi_1_isLoaded) {
    if (jets_phi_1_branch != 0) {
      jets_phi_1_branch->GetEntry(index);
    } else {
      printf("branch jets_phi_1_branch does not exist!\n");
      exit(1);
    }
    jets_phi_1_isLoaded = true;
  }
  return jets_phi_1_;
}

const float &hwwtree::jets_phi_2() {
  if (not jets_phi_2_isLoaded) {
    if (jets_phi_2_branch != 0) {
      jets_phi_2_branch->GetEntry(index);
    } else {
      printf("branch jets_phi_2_branch does not exist!\n");
      exit(1);
    }
    jets_phi_2_isLoaded = true;
  }
  return jets_phi_2_;
}

const float &hwwtree::jets_csv_0() {
  if (not jets_csv_0_isLoaded) {
    if (jets_csv_0_branch != 0) {
      jets_csv_0_branch->GetEntry(index);
    } else {
      printf("branch jets_csv_0_branch does not exist!\n");
      exit(1);
    }
    jets_csv_0_isLoaded = true;
  }
  return jets_csv_0_;
}

const float &hwwtree::jets_csv_1() {
  if (not jets_csv_1_isLoaded) {
    if (jets_csv_1_branch != 0) {
      jets_csv_1_branch->GetEntry(index);
    } else {
      printf("branch jets_csv_1_branch does not exist!\n");
      exit(1);
    }
    jets_csv_1_isLoaded = true;
  }
  return jets_csv_1_;
}

const float &hwwtree::jets_csv_2() {
  if (not jets_csv_2_isLoaded) {
    if (jets_csv_2_branch != 0) {
      jets_csv_2_branch->GetEntry(index);
    } else {
      printf("branch jets_csv_2_branch does not exist!\n");
      exit(1);
    }
    jets_csv_2_isLoaded = true;
  }
  return jets_csv_2_;
}

const float &hwwtree::jets_up_pt_0() {
  if (not jets_up_pt_0_isLoaded) {
    if (jets_up_pt_0_branch != 0) {
      jets_up_pt_0_branch->GetEntry(index);
    } else {
      printf("branch jets_up_pt_0_branch does not exist!\n");
      exit(1);
    }
    jets_up_pt_0_isLoaded = true;
  }
  return jets_up_pt_0_;
}

const float &hwwtree::jets_up_pt_1() {
  if (not jets_up_pt_1_isLoaded) {
    if (jets_up_pt_1_branch != 0) {
      jets_up_pt_1_branch->GetEntry(index);
    } else {
      printf("branch jets_up_pt_1_branch does not exist!\n");
      exit(1);
    }
    jets_up_pt_1_isLoaded = true;
  }
  return jets_up_pt_1_;
}

const float &hwwtree::jets_up_pt_2() {
  if (not jets_up_pt_2_isLoaded) {
    if (jets_up_pt_2_branch != 0) {
      jets_up_pt_2_branch->GetEntry(index);
    } else {
      printf("branch jets_up_pt_2_branch does not exist!\n");
      exit(1);
    }
    jets_up_pt_2_isLoaded = true;
  }
  return jets_up_pt_2_;
}

const float &hwwtree::jets_up_eta_0() {
  if (not jets_up_eta_0_isLoaded) {
    if (jets_up_eta_0_branch != 0) {
      jets_up_eta_0_branch->GetEntry(index);
    } else {
      printf("branch jets_up_eta_0_branch does not exist!\n");
      exit(1);
    }
    jets_up_eta_0_isLoaded = true;
  }
  return jets_up_eta_0_;
}

const float &hwwtree::jets_up_eta_1() {
  if (not jets_up_eta_1_isLoaded) {
    if (jets_up_eta_1_branch != 0) {
      jets_up_eta_1_branch->GetEntry(index);
    } else {
      printf("branch jets_up_eta_1_branch does not exist!\n");
      exit(1);
    }
    jets_up_eta_1_isLoaded = true;
  }
  return jets_up_eta_1_;
}

const float &hwwtree::jets_up_eta_2() {
  if (not jets_up_eta_2_isLoaded) {
    if (jets_up_eta_2_branch != 0) {
      jets_up_eta_2_branch->GetEntry(index);
    } else {
      printf("branch jets_up_eta_2_branch does not exist!\n");
      exit(1);
    }
    jets_up_eta_2_isLoaded = true;
  }
  return jets_up_eta_2_;
}

const float &hwwtree::jets_up_phi_0() {
  if (not jets_up_phi_0_isLoaded) {
    if (jets_up_phi_0_branch != 0) {
      jets_up_phi_0_branch->GetEntry(index);
    } else {
      printf("branch jets_up_phi_0_branch does not exist!\n");
      exit(1);
    }
    jets_up_phi_0_isLoaded = true;
  }
  return jets_up_phi_0_;
}

const float &hwwtree::jets_up_phi_1() {
  if (not jets_up_phi_1_isLoaded) {
    if (jets_up_phi_1_branch != 0) {
      jets_up_phi_1_branch->GetEntry(index);
    } else {
      printf("branch jets_up_phi_1_branch does not exist!\n");
      exit(1);
    }
    jets_up_phi_1_isLoaded = true;
  }
  return jets_up_phi_1_;
}

const float &hwwtree::jets_up_phi_2() {
  if (not jets_up_phi_2_isLoaded) {
    if (jets_up_phi_2_branch != 0) {
      jets_up_phi_2_branch->GetEntry(index);
    } else {
      printf("branch jets_up_phi_2_branch does not exist!\n");
      exit(1);
    }
    jets_up_phi_2_isLoaded = true;
  }
  return jets_up_phi_2_;
}

const float &hwwtree::jets_up_csv_0() {
  if (not jets_up_csv_0_isLoaded) {
    if (jets_up_csv_0_branch != 0) {
      jets_up_csv_0_branch->GetEntry(index);
    } else {
      printf("branch jets_up_csv_0_branch does not exist!\n");
      exit(1);
    }
    jets_up_csv_0_isLoaded = true;
  }
  return jets_up_csv_0_;
}

const float &hwwtree::jets_up_csv_1() {
  if (not jets_up_csv_1_isLoaded) {
    if (jets_up_csv_1_branch != 0) {
      jets_up_csv_1_branch->GetEntry(index);
    } else {
      printf("branch jets_up_csv_1_branch does not exist!\n");
      exit(1);
    }
    jets_up_csv_1_isLoaded = true;
  }
  return jets_up_csv_1_;
}

const float &hwwtree::jets_up_csv_2() {
  if (not jets_up_csv_2_isLoaded) {
    if (jets_up_csv_2_branch != 0) {
      jets_up_csv_2_branch->GetEntry(index);
    } else {
      printf("branch jets_up_csv_2_branch does not exist!\n");
      exit(1);
    }
    jets_up_csv_2_isLoaded = true;
  }
  return jets_up_csv_2_;
}

const float &hwwtree::jets_dn_pt_0() {
  if (not jets_dn_pt_0_isLoaded) {
    if (jets_dn_pt_0_branch != 0) {
      jets_dn_pt_0_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_pt_0_branch does not exist!\n");
      exit(1);
    }
    jets_dn_pt_0_isLoaded = true;
  }
  return jets_dn_pt_0_;
}

const float &hwwtree::jets_dn_pt_1() {
  if (not jets_dn_pt_1_isLoaded) {
    if (jets_dn_pt_1_branch != 0) {
      jets_dn_pt_1_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_pt_1_branch does not exist!\n");
      exit(1);
    }
    jets_dn_pt_1_isLoaded = true;
  }
  return jets_dn_pt_1_;
}

const float &hwwtree::jets_dn_pt_2() {
  if (not jets_dn_pt_2_isLoaded) {
    if (jets_dn_pt_2_branch != 0) {
      jets_dn_pt_2_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_pt_2_branch does not exist!\n");
      exit(1);
    }
    jets_dn_pt_2_isLoaded = true;
  }
  return jets_dn_pt_2_;
}

const float &hwwtree::jets_dn_eta_0() {
  if (not jets_dn_eta_0_isLoaded) {
    if (jets_dn_eta_0_branch != 0) {
      jets_dn_eta_0_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_eta_0_branch does not exist!\n");
      exit(1);
    }
    jets_dn_eta_0_isLoaded = true;
  }
  return jets_dn_eta_0_;
}

const float &hwwtree::jets_dn_eta_1() {
  if (not jets_dn_eta_1_isLoaded) {
    if (jets_dn_eta_1_branch != 0) {
      jets_dn_eta_1_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_eta_1_branch does not exist!\n");
      exit(1);
    }
    jets_dn_eta_1_isLoaded = true;
  }
  return jets_dn_eta_1_;
}

const float &hwwtree::jets_dn_eta_2() {
  if (not jets_dn_eta_2_isLoaded) {
    if (jets_dn_eta_2_branch != 0) {
      jets_dn_eta_2_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_eta_2_branch does not exist!\n");
      exit(1);
    }
    jets_dn_eta_2_isLoaded = true;
  }
  return jets_dn_eta_2_;
}

const float &hwwtree::jets_dn_phi_0() {
  if (not jets_dn_phi_0_isLoaded) {
    if (jets_dn_phi_0_branch != 0) {
      jets_dn_phi_0_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_phi_0_branch does not exist!\n");
      exit(1);
    }
    jets_dn_phi_0_isLoaded = true;
  }
  return jets_dn_phi_0_;
}

const float &hwwtree::jets_dn_phi_1() {
  if (not jets_dn_phi_1_isLoaded) {
    if (jets_dn_phi_1_branch != 0) {
      jets_dn_phi_1_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_phi_1_branch does not exist!\n");
      exit(1);
    }
    jets_dn_phi_1_isLoaded = true;
  }
  return jets_dn_phi_1_;
}

const float &hwwtree::jets_dn_phi_2() {
  if (not jets_dn_phi_2_isLoaded) {
    if (jets_dn_phi_2_branch != 0) {
      jets_dn_phi_2_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_phi_2_branch does not exist!\n");
      exit(1);
    }
    jets_dn_phi_2_isLoaded = true;
  }
  return jets_dn_phi_2_;
}

const float &hwwtree::jets_dn_csv_0() {
  if (not jets_dn_csv_0_isLoaded) {
    if (jets_dn_csv_0_branch != 0) {
      jets_dn_csv_0_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_csv_0_branch does not exist!\n");
      exit(1);
    }
    jets_dn_csv_0_isLoaded = true;
  }
  return jets_dn_csv_0_;
}

const float &hwwtree::jets_dn_csv_1() {
  if (not jets_dn_csv_1_isLoaded) {
    if (jets_dn_csv_1_branch != 0) {
      jets_dn_csv_1_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_csv_1_branch does not exist!\n");
      exit(1);
    }
    jets_dn_csv_1_isLoaded = true;
  }
  return jets_dn_csv_1_;
}

const float &hwwtree::jets_dn_csv_2() {
  if (not jets_dn_csv_2_isLoaded) {
    if (jets_dn_csv_2_branch != 0) {
      jets_dn_csv_2_branch->GetEntry(index);
    } else {
      printf("branch jets_dn_csv_2_branch does not exist!\n");
      exit(1);
    }
    jets_dn_csv_2_isLoaded = true;
  }
  return jets_dn_csv_2_;
}

const float &hwwtree::ak8jets_pt_0() {
  if (not ak8jets_pt_0_isLoaded) {
    if (ak8jets_pt_0_branch != 0) {
      ak8jets_pt_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_0_isLoaded = true;
  }
  return ak8jets_pt_0_;
}

const float &hwwtree::ak8jets_pt_1() {
  if (not ak8jets_pt_1_isLoaded) {
    if (ak8jets_pt_1_branch != 0) {
      ak8jets_pt_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_1_isLoaded = true;
  }
  return ak8jets_pt_1_;
}

const float &hwwtree::ak8jets_pt_2() {
  if (not ak8jets_pt_2_isLoaded) {
    if (ak8jets_pt_2_branch != 0) {
      ak8jets_pt_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_pt_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_pt_2_isLoaded = true;
  }
  return ak8jets_pt_2_;
}

const float &hwwtree::ak8jets_eta_0() {
  if (not ak8jets_eta_0_isLoaded) {
    if (ak8jets_eta_0_branch != 0) {
      ak8jets_eta_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_eta_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_eta_0_isLoaded = true;
  }
  return ak8jets_eta_0_;
}

const float &hwwtree::ak8jets_eta_1() {
  if (not ak8jets_eta_1_isLoaded) {
    if (ak8jets_eta_1_branch != 0) {
      ak8jets_eta_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_eta_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_eta_1_isLoaded = true;
  }
  return ak8jets_eta_1_;
}

const float &hwwtree::ak8jets_eta_2() {
  if (not ak8jets_eta_2_isLoaded) {
    if (ak8jets_eta_2_branch != 0) {
      ak8jets_eta_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_eta_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_eta_2_isLoaded = true;
  }
  return ak8jets_eta_2_;
}

const float &hwwtree::ak8jets_phi_0() {
  if (not ak8jets_phi_0_isLoaded) {
    if (ak8jets_phi_0_branch != 0) {
      ak8jets_phi_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_phi_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_phi_0_isLoaded = true;
  }
  return ak8jets_phi_0_;
}

const float &hwwtree::ak8jets_phi_1() {
  if (not ak8jets_phi_1_isLoaded) {
    if (ak8jets_phi_1_branch != 0) {
      ak8jets_phi_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_phi_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_phi_1_isLoaded = true;
  }
  return ak8jets_phi_1_;
}

const float &hwwtree::ak8jets_phi_2() {
  if (not ak8jets_phi_2_isLoaded) {
    if (ak8jets_phi_2_branch != 0) {
      ak8jets_phi_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_phi_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_phi_2_isLoaded = true;
  }
  return ak8jets_phi_2_;
}

const float &hwwtree::ak8jets_softdropMass_0() {
  if (not ak8jets_softdropMass_0_isLoaded) {
    if (ak8jets_softdropMass_0_branch != 0) {
      ak8jets_softdropMass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropMass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropMass_0_isLoaded = true;
  }
  return ak8jets_softdropMass_0_;
}

const float &hwwtree::ak8jets_softdropMass_1() {
  if (not ak8jets_softdropMass_1_isLoaded) {
    if (ak8jets_softdropMass_1_branch != 0) {
      ak8jets_softdropMass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropMass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropMass_1_isLoaded = true;
  }
  return ak8jets_softdropMass_1_;
}

const float &hwwtree::ak8jets_softdropMass_2() {
  if (not ak8jets_softdropMass_2_isLoaded) {
    if (ak8jets_softdropMass_2_branch != 0) {
      ak8jets_softdropMass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropMass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropMass_2_isLoaded = true;
  }
  return ak8jets_softdropMass_2_;
}

const float &hwwtree::ak8jets_prunedMass_0() {
  if (not ak8jets_prunedMass_0_isLoaded) {
    if (ak8jets_prunedMass_0_branch != 0) {
      ak8jets_prunedMass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_prunedMass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_prunedMass_0_isLoaded = true;
  }
  return ak8jets_prunedMass_0_;
}

const float &hwwtree::ak8jets_prunedMass_1() {
  if (not ak8jets_prunedMass_1_isLoaded) {
    if (ak8jets_prunedMass_1_branch != 0) {
      ak8jets_prunedMass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_prunedMass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_prunedMass_1_isLoaded = true;
  }
  return ak8jets_prunedMass_1_;
}

const float &hwwtree::ak8jets_prunedMass_2() {
  if (not ak8jets_prunedMass_2_isLoaded) {
    if (ak8jets_prunedMass_2_branch != 0) {
      ak8jets_prunedMass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_prunedMass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_prunedMass_2_isLoaded = true;
  }
  return ak8jets_prunedMass_2_;
}

const float &hwwtree::ak8jets_trimmedMass_0() {
  if (not ak8jets_trimmedMass_0_isLoaded) {
    if (ak8jets_trimmedMass_0_branch != 0) {
      ak8jets_trimmedMass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_trimmedMass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_trimmedMass_0_isLoaded = true;
  }
  return ak8jets_trimmedMass_0_;
}

const float &hwwtree::ak8jets_trimmedMass_1() {
  if (not ak8jets_trimmedMass_1_isLoaded) {
    if (ak8jets_trimmedMass_1_branch != 0) {
      ak8jets_trimmedMass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_trimmedMass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_trimmedMass_1_isLoaded = true;
  }
  return ak8jets_trimmedMass_1_;
}

const float &hwwtree::ak8jets_trimmedMass_2() {
  if (not ak8jets_trimmedMass_2_isLoaded) {
    if (ak8jets_trimmedMass_2_branch != 0) {
      ak8jets_trimmedMass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_trimmedMass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_trimmedMass_2_isLoaded = true;
  }
  return ak8jets_trimmedMass_2_;
}

const float &hwwtree::ak8jets_mass_0() {
  if (not ak8jets_mass_0_isLoaded) {
    if (ak8jets_mass_0_branch != 0) {
      ak8jets_mass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_mass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_mass_0_isLoaded = true;
  }
  return ak8jets_mass_0_;
}

const float &hwwtree::ak8jets_mass_1() {
  if (not ak8jets_mass_1_isLoaded) {
    if (ak8jets_mass_1_branch != 0) {
      ak8jets_mass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_mass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_mass_1_isLoaded = true;
  }
  return ak8jets_mass_1_;
}

const float &hwwtree::ak8jets_mass_2() {
  if (not ak8jets_mass_2_isLoaded) {
    if (ak8jets_mass_2_branch != 0) {
      ak8jets_mass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_mass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_mass_2_isLoaded = true;
  }
  return ak8jets_mass_2_;
}

const float &hwwtree::ak8jets_nJettinessTau1_0() {
  if (not ak8jets_nJettinessTau1_0_isLoaded) {
    if (ak8jets_nJettinessTau1_0_branch != 0) {
      ak8jets_nJettinessTau1_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau1_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau1_0_isLoaded = true;
  }
  return ak8jets_nJettinessTau1_0_;
}

const float &hwwtree::ak8jets_nJettinessTau1_1() {
  if (not ak8jets_nJettinessTau1_1_isLoaded) {
    if (ak8jets_nJettinessTau1_1_branch != 0) {
      ak8jets_nJettinessTau1_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau1_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau1_1_isLoaded = true;
  }
  return ak8jets_nJettinessTau1_1_;
}

const float &hwwtree::ak8jets_nJettinessTau1_2() {
  if (not ak8jets_nJettinessTau1_2_isLoaded) {
    if (ak8jets_nJettinessTau1_2_branch != 0) {
      ak8jets_nJettinessTau1_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau1_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau1_2_isLoaded = true;
  }
  return ak8jets_nJettinessTau1_2_;
}

const float &hwwtree::ak8jets_nJettinessTau2_0() {
  if (not ak8jets_nJettinessTau2_0_isLoaded) {
    if (ak8jets_nJettinessTau2_0_branch != 0) {
      ak8jets_nJettinessTau2_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau2_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau2_0_isLoaded = true;
  }
  return ak8jets_nJettinessTau2_0_;
}

const float &hwwtree::ak8jets_nJettinessTau2_1() {
  if (not ak8jets_nJettinessTau2_1_isLoaded) {
    if (ak8jets_nJettinessTau2_1_branch != 0) {
      ak8jets_nJettinessTau2_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau2_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau2_1_isLoaded = true;
  }
  return ak8jets_nJettinessTau2_1_;
}

const float &hwwtree::ak8jets_nJettinessTau2_2() {
  if (not ak8jets_nJettinessTau2_2_isLoaded) {
    if (ak8jets_nJettinessTau2_2_branch != 0) {
      ak8jets_nJettinessTau2_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_nJettinessTau2_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_nJettinessTau2_2_isLoaded = true;
  }
  return ak8jets_nJettinessTau2_2_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet1_0() {
  if (not ak8jets_softdropPuppiSubjet1_0_isLoaded) {
    if (ak8jets_softdropPuppiSubjet1_0_branch != 0) {
      ak8jets_softdropPuppiSubjet1_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet1_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet1_0_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet1_0_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet1_1() {
  if (not ak8jets_softdropPuppiSubjet1_1_isLoaded) {
    if (ak8jets_softdropPuppiSubjet1_1_branch != 0) {
      ak8jets_softdropPuppiSubjet1_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet1_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet1_1_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet1_1_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet1_2() {
  if (not ak8jets_softdropPuppiSubjet1_2_isLoaded) {
    if (ak8jets_softdropPuppiSubjet1_2_branch != 0) {
      ak8jets_softdropPuppiSubjet1_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet1_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet1_2_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet1_2_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet2_0() {
  if (not ak8jets_softdropPuppiSubjet2_0_isLoaded) {
    if (ak8jets_softdropPuppiSubjet2_0_branch != 0) {
      ak8jets_softdropPuppiSubjet2_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet2_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet2_0_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet2_0_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet2_1() {
  if (not ak8jets_softdropPuppiSubjet2_1_isLoaded) {
    if (ak8jets_softdropPuppiSubjet2_1_branch != 0) {
      ak8jets_softdropPuppiSubjet2_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet2_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet2_1_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet2_1_;
}

const float &hwwtree::ak8jets_softdropPuppiSubjet2_2() {
  if (not ak8jets_softdropPuppiSubjet2_2_isLoaded) {
    if (ak8jets_softdropPuppiSubjet2_2_branch != 0) {
      ak8jets_softdropPuppiSubjet2_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_softdropPuppiSubjet2_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_softdropPuppiSubjet2_2_isLoaded = true;
  }
  return ak8jets_softdropPuppiSubjet2_2_;
}

const float &hwwtree::ak8jets_puppi_softdropMass_0() {
  if (not ak8jets_puppi_softdropMass_0_isLoaded) {
    if (ak8jets_puppi_softdropMass_0_branch != 0) {
      ak8jets_puppi_softdropMass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_softdropMass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_softdropMass_0_isLoaded = true;
  }
  return ak8jets_puppi_softdropMass_0_;
}

const float &hwwtree::ak8jets_puppi_softdropMass_1() {
  if (not ak8jets_puppi_softdropMass_1_isLoaded) {
    if (ak8jets_puppi_softdropMass_1_branch != 0) {
      ak8jets_puppi_softdropMass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_softdropMass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_softdropMass_1_isLoaded = true;
  }
  return ak8jets_puppi_softdropMass_1_;
}

const float &hwwtree::ak8jets_puppi_softdropMass_2() {
  if (not ak8jets_puppi_softdropMass_2_isLoaded) {
    if (ak8jets_puppi_softdropMass_2_branch != 0) {
      ak8jets_puppi_softdropMass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_softdropMass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_softdropMass_2_isLoaded = true;
  }
  return ak8jets_puppi_softdropMass_2_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau1_0() {
  if (not ak8jets_puppi_nJettinessTau1_0_isLoaded) {
    if (ak8jets_puppi_nJettinessTau1_0_branch != 0) {
      ak8jets_puppi_nJettinessTau1_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau1_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau1_0_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau1_0_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau1_1() {
  if (not ak8jets_puppi_nJettinessTau1_1_isLoaded) {
    if (ak8jets_puppi_nJettinessTau1_1_branch != 0) {
      ak8jets_puppi_nJettinessTau1_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau1_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau1_1_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau1_1_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau1_2() {
  if (not ak8jets_puppi_nJettinessTau1_2_isLoaded) {
    if (ak8jets_puppi_nJettinessTau1_2_branch != 0) {
      ak8jets_puppi_nJettinessTau1_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau1_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau1_2_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau1_2_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau2_0() {
  if (not ak8jets_puppi_nJettinessTau2_0_isLoaded) {
    if (ak8jets_puppi_nJettinessTau2_0_branch != 0) {
      ak8jets_puppi_nJettinessTau2_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau2_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau2_0_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau2_0_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau2_1() {
  if (not ak8jets_puppi_nJettinessTau2_1_isLoaded) {
    if (ak8jets_puppi_nJettinessTau2_1_branch != 0) {
      ak8jets_puppi_nJettinessTau2_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau2_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau2_1_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau2_1_;
}

const float &hwwtree::ak8jets_puppi_nJettinessTau2_2() {
  if (not ak8jets_puppi_nJettinessTau2_2_isLoaded) {
    if (ak8jets_puppi_nJettinessTau2_2_branch != 0) {
      ak8jets_puppi_nJettinessTau2_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_nJettinessTau2_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_nJettinessTau2_2_isLoaded = true;
  }
  return ak8jets_puppi_nJettinessTau2_2_;
}

const float &hwwtree::ak8jets_puppi_eta_0() {
  if (not ak8jets_puppi_eta_0_isLoaded) {
    if (ak8jets_puppi_eta_0_branch != 0) {
      ak8jets_puppi_eta_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_eta_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_eta_0_isLoaded = true;
  }
  return ak8jets_puppi_eta_0_;
}

const float &hwwtree::ak8jets_puppi_eta_1() {
  if (not ak8jets_puppi_eta_1_isLoaded) {
    if (ak8jets_puppi_eta_1_branch != 0) {
      ak8jets_puppi_eta_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_eta_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_eta_1_isLoaded = true;
  }
  return ak8jets_puppi_eta_1_;
}

const float &hwwtree::ak8jets_puppi_eta_2() {
  if (not ak8jets_puppi_eta_2_isLoaded) {
    if (ak8jets_puppi_eta_2_branch != 0) {
      ak8jets_puppi_eta_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_eta_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_eta_2_isLoaded = true;
  }
  return ak8jets_puppi_eta_2_;
}

const float &hwwtree::ak8jets_puppi_phi_0() {
  if (not ak8jets_puppi_phi_0_isLoaded) {
    if (ak8jets_puppi_phi_0_branch != 0) {
      ak8jets_puppi_phi_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_phi_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_phi_0_isLoaded = true;
  }
  return ak8jets_puppi_phi_0_;
}

const float &hwwtree::ak8jets_puppi_phi_1() {
  if (not ak8jets_puppi_phi_1_isLoaded) {
    if (ak8jets_puppi_phi_1_branch != 0) {
      ak8jets_puppi_phi_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_phi_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_phi_1_isLoaded = true;
  }
  return ak8jets_puppi_phi_1_;
}

const float &hwwtree::ak8jets_puppi_phi_2() {
  if (not ak8jets_puppi_phi_2_isLoaded) {
    if (ak8jets_puppi_phi_2_branch != 0) {
      ak8jets_puppi_phi_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_phi_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_phi_2_isLoaded = true;
  }
  return ak8jets_puppi_phi_2_;
}

const float &hwwtree::ak8jets_puppi_pt_0() {
  if (not ak8jets_puppi_pt_0_isLoaded) {
    if (ak8jets_puppi_pt_0_branch != 0) {
      ak8jets_puppi_pt_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_pt_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_pt_0_isLoaded = true;
  }
  return ak8jets_puppi_pt_0_;
}

const float &hwwtree::ak8jets_puppi_pt_1() {
  if (not ak8jets_puppi_pt_1_isLoaded) {
    if (ak8jets_puppi_pt_1_branch != 0) {
      ak8jets_puppi_pt_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_pt_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_pt_1_isLoaded = true;
  }
  return ak8jets_puppi_pt_1_;
}

const float &hwwtree::ak8jets_puppi_pt_2() {
  if (not ak8jets_puppi_pt_2_isLoaded) {
    if (ak8jets_puppi_pt_2_branch != 0) {
      ak8jets_puppi_pt_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_pt_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_pt_2_isLoaded = true;
  }
  return ak8jets_puppi_pt_2_;
}

const float &hwwtree::ak8jets_puppi_mass_0() {
  if (not ak8jets_puppi_mass_0_isLoaded) {
    if (ak8jets_puppi_mass_0_branch != 0) {
      ak8jets_puppi_mass_0_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_mass_0_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_mass_0_isLoaded = true;
  }
  return ak8jets_puppi_mass_0_;
}

const float &hwwtree::ak8jets_puppi_mass_1() {
  if (not ak8jets_puppi_mass_1_isLoaded) {
    if (ak8jets_puppi_mass_1_branch != 0) {
      ak8jets_puppi_mass_1_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_mass_1_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_mass_1_isLoaded = true;
  }
  return ak8jets_puppi_mass_1_;
}

const float &hwwtree::ak8jets_puppi_mass_2() {
  if (not ak8jets_puppi_mass_2_isLoaded) {
    if (ak8jets_puppi_mass_2_branch != 0) {
      ak8jets_puppi_mass_2_branch->GetEntry(index);
    } else {
      printf("branch ak8jets_puppi_mass_2_branch does not exist!\n");
      exit(1);
    }
    ak8jets_puppi_mass_2_isLoaded = true;
  }
  return ak8jets_puppi_mass_2_;
}

const float &hwwtree::weight_btagsf() {
  if (not weight_btagsf_isLoaded) {
    if (weight_btagsf_branch != 0) {
      weight_btagsf_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_isLoaded = true;
  }
  return weight_btagsf_;
}

const float &hwwtree::weight_btagsf_heavy_DN() {
  if (not weight_btagsf_heavy_DN_isLoaded) {
    if (weight_btagsf_heavy_DN_branch != 0) {
      weight_btagsf_heavy_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_heavy_DN_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_heavy_DN_isLoaded = true;
  }
  return weight_btagsf_heavy_DN_;
}

const float &hwwtree::weight_btagsf_heavy_UP() {
  if (not weight_btagsf_heavy_UP_isLoaded) {
    if (weight_btagsf_heavy_UP_branch != 0) {
      weight_btagsf_heavy_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_heavy_UP_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_heavy_UP_isLoaded = true;
  }
  return weight_btagsf_heavy_UP_;
}

const float &hwwtree::weight_btagsf_light_DN() {
  if (not weight_btagsf_light_DN_isLoaded) {
    if (weight_btagsf_light_DN_branch != 0) {
      weight_btagsf_light_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_light_DN_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_light_DN_isLoaded = true;
  }
  return weight_btagsf_light_DN_;
}

const float &hwwtree::weight_btagsf_light_UP() {
  if (not weight_btagsf_light_UP_isLoaded) {
    if (weight_btagsf_light_UP_branch != 0) {
      weight_btagsf_light_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_light_UP_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_light_UP_isLoaded = true;
  }
  return weight_btagsf_light_UP_;
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

const float &hwwtree::met_phi() {
  if (not met_phi_isLoaded) {
    if (met_phi_branch != 0) {
      met_phi_branch->GetEntry(index);
    } else {
      printf("branch met_phi_branch does not exist!\n");
      exit(1);
    }
    met_phi_isLoaded = true;
  }
  return met_phi_;
}

const float &hwwtree::met_up_pt() {
  if (not met_up_pt_isLoaded) {
    if (met_up_pt_branch != 0) {
      met_up_pt_branch->GetEntry(index);
    } else {
      printf("branch met_up_pt_branch does not exist!\n");
      exit(1);
    }
    met_up_pt_isLoaded = true;
  }
  return met_up_pt_;
}

const float &hwwtree::met_up_phi() {
  if (not met_up_phi_isLoaded) {
    if (met_up_phi_branch != 0) {
      met_up_phi_branch->GetEntry(index);
    } else {
      printf("branch met_up_phi_branch does not exist!\n");
      exit(1);
    }
    met_up_phi_isLoaded = true;
  }
  return met_up_phi_;
}

const float &hwwtree::met_dn_pt() {
  if (not met_dn_pt_isLoaded) {
    if (met_dn_pt_branch != 0) {
      met_dn_pt_branch->GetEntry(index);
    } else {
      printf("branch met_dn_pt_branch does not exist!\n");
      exit(1);
    }
    met_dn_pt_isLoaded = true;
  }
  return met_dn_pt_;
}

const float &hwwtree::met_dn_phi() {
  if (not met_dn_phi_isLoaded) {
    if (met_dn_phi_branch != 0) {
      met_dn_phi_branch->GetEntry(index);
    } else {
      printf("branch met_dn_phi_branch does not exist!\n");
      exit(1);
    }
    met_dn_phi_isLoaded = true;
  }
  return met_dn_phi_;
}

const float &hwwtree::met_gen_pt() {
  if (not met_gen_pt_isLoaded) {
    if (met_gen_pt_branch != 0) {
      met_gen_pt_branch->GetEntry(index);
    } else {
      printf("branch met_gen_pt_branch does not exist!\n");
      exit(1);
    }
    met_gen_pt_isLoaded = true;
  }
  return met_gen_pt_;
}

const float &hwwtree::met_gen_phi() {
  if (not met_gen_phi_isLoaded) {
    if (met_gen_phi_branch != 0) {
      met_gen_phi_branch->GetEntry(index);
    } else {
      printf("branch met_gen_phi_branch does not exist!\n");
      exit(1);
    }
    met_gen_phi_isLoaded = true;
  }
  return met_gen_phi_;
}

const float &hwwtree::gen_ht() {
  if (not gen_ht_isLoaded) {
    if (gen_ht_branch != 0) {
      gen_ht_branch->GetEntry(index);
    } else {
      printf("branch gen_ht_branch does not exist!\n");
      exit(1);
    }
    gen_ht_isLoaded = true;
  }
  return gen_ht_;
}

const float &hwwtree::isr_leadjet_dr() {
  if (not isr_leadjet_dr_isLoaded) {
    if (isr_leadjet_dr_branch != 0) {
      isr_leadjet_dr_branch->GetEntry(index);
    } else {
      printf("branch isr_leadjet_dr_branch does not exist!\n");
      exit(1);
    }
    isr_leadjet_dr_isLoaded = true;
  }
  return isr_leadjet_dr_;
}

const float &hwwtree::higgs_met_dphi() {
  if (not higgs_met_dphi_isLoaded) {
    if (higgs_met_dphi_branch != 0) {
      higgs_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch higgs_met_dphi_branch does not exist!\n");
      exit(1);
    }
    higgs_met_dphi_isLoaded = true;
  }
  return higgs_met_dphi_;
}

const float &hwwtree::isr_recoisr_dr() {
  if (not isr_recoisr_dr_isLoaded) {
    if (isr_recoisr_dr_branch != 0) {
      isr_recoisr_dr_branch->GetEntry(index);
    } else {
      printf("branch isr_recoisr_dr_branch does not exist!\n");
      exit(1);
    }
    isr_recoisr_dr_isLoaded = true;
  }
  return isr_recoisr_dr_;
}

const float &hwwtree::isr_recoisrmegajet_dr() {
  if (not isr_recoisrmegajet_dr_isLoaded) {
    if (isr_recoisrmegajet_dr_branch != 0) {
      isr_recoisrmegajet_dr_branch->GetEntry(index);
    } else {
      printf("branch isr_recoisrmegajet_dr_branch does not exist!\n");
      exit(1);
    }
    isr_recoisrmegajet_dr_isLoaded = true;
  }
  return isr_recoisrmegajet_dr_;
}

const float &hwwtree::lepton_met_dphi() {
  if (not lepton_met_dphi_isLoaded) {
    if (lepton_met_dphi_branch != 0) {
      lepton_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch lepton_met_dphi_branch does not exist!\n");
      exit(1);
    }
    lepton_met_dphi_isLoaded = true;
  }
  return lepton_met_dphi_;
}

const float &hwwtree::quark0_met_dphi() {
  if (not quark0_met_dphi_isLoaded) {
    if (quark0_met_dphi_branch != 0) {
      quark0_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch quark0_met_dphi_branch does not exist!\n");
      exit(1);
    }
    quark0_met_dphi_isLoaded = true;
  }
  return quark0_met_dphi_;
}

const float &hwwtree::quark1_met_dphi() {
  if (not quark1_met_dphi_isLoaded) {
    if (quark1_met_dphi_branch != 0) {
      quark1_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch quark1_met_dphi_branch does not exist!\n");
      exit(1);
    }
    quark1_met_dphi_isLoaded = true;
  }
  return quark1_met_dphi_;
}

const float &hwwtree::wlep_met_dphi() {
  if (not wlep_met_dphi_isLoaded) {
    if (wlep_met_dphi_branch != 0) {
      wlep_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch wlep_met_dphi_branch does not exist!\n");
      exit(1);
    }
    wlep_met_dphi_isLoaded = true;
  }
  return wlep_met_dphi_;
}

const float &hwwtree::whad_met_dphi() {
  if (not whad_met_dphi_isLoaded) {
    if (whad_met_dphi_branch != 0) {
      whad_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch whad_met_dphi_branch does not exist!\n");
      exit(1);
    }
    whad_met_dphi_isLoaded = true;
  }
  return whad_met_dphi_;
}

const float &hwwtree::whad_recowhad_dr() {
  if (not whad_recowhad_dr_isLoaded) {
    if (whad_recowhad_dr_branch != 0) {
      whad_recowhad_dr_branch->GetEntry(index);
    } else {
      printf("branch whad_recowhad_dr_branch does not exist!\n");
      exit(1);
    }
    whad_recowhad_dr_isLoaded = true;
  }
  return whad_recowhad_dr_;
}

const float &hwwtree::whad_recowhad_dphi() {
  if (not whad_recowhad_dphi_isLoaded) {
    if (whad_recowhad_dphi_branch != 0) {
      whad_recowhad_dphi_branch->GetEntry(index);
    } else {
      printf("branch whad_recowhad_dphi_branch does not exist!\n");
      exit(1);
    }
    whad_recowhad_dphi_isLoaded = true;
  }
  return whad_recowhad_dphi_;
}

const float &hwwtree::whad_recowhad_deta() {
  if (not whad_recowhad_deta_isLoaded) {
    if (whad_recowhad_deta_branch != 0) {
      whad_recowhad_deta_branch->GetEntry(index);
    } else {
      printf("branch whad_recowhad_deta_branch does not exist!\n");
      exit(1);
    }
    whad_recowhad_deta_isLoaded = true;
  }
  return whad_recowhad_deta_;
}

const float &hwwtree::whad_recowhad_ptratio() {
  if (not whad_recowhad_ptratio_isLoaded) {
    if (whad_recowhad_ptratio_branch != 0) {
      whad_recowhad_ptratio_branch->GetEntry(index);
    } else {
      printf("branch whad_recowhad_ptratio_branch does not exist!\n");
      exit(1);
    }
    whad_recowhad_ptratio_isLoaded = true;
  }
  return whad_recowhad_ptratio_;
}

const float &hwwtree::higgs_recowhad_dr() {
  if (not higgs_recowhad_dr_isLoaded) {
    if (higgs_recowhad_dr_branch != 0) {
      higgs_recowhad_dr_branch->GetEntry(index);
    } else {
      printf("branch higgs_recowhad_dr_branch does not exist!\n");
      exit(1);
    }
    higgs_recowhad_dr_isLoaded = true;
  }
  return higgs_recowhad_dr_;
}

const float &hwwtree::higgs_recowhad_dphi() {
  if (not higgs_recowhad_dphi_isLoaded) {
    if (higgs_recowhad_dphi_branch != 0) {
      higgs_recowhad_dphi_branch->GetEntry(index);
    } else {
      printf("branch higgs_recowhad_dphi_branch does not exist!\n");
      exit(1);
    }
    higgs_recowhad_dphi_isLoaded = true;
  }
  return higgs_recowhad_dphi_;
}

const float &hwwtree::higgs_recowhad_deta() {
  if (not higgs_recowhad_deta_isLoaded) {
    if (higgs_recowhad_deta_branch != 0) {
      higgs_recowhad_deta_branch->GetEntry(index);
    } else {
      printf("branch higgs_recowhad_deta_branch does not exist!\n");
      exit(1);
    }
    higgs_recowhad_deta_isLoaded = true;
  }
  return higgs_recowhad_deta_;
}

const float &hwwtree::higgs_recowhad_ptratio() {
  if (not higgs_recowhad_ptratio_isLoaded) {
    if (higgs_recowhad_ptratio_branch != 0) {
      higgs_recowhad_ptratio_branch->GetEntry(index);
    } else {
      printf("branch higgs_recowhad_ptratio_branch does not exist!\n");
      exit(1);
    }
    higgs_recowhad_ptratio_isLoaded = true;
  }
  return higgs_recowhad_ptratio_;
}

const float &hwwtree::whad_leadak8_dr() {
  if (not whad_leadak8_dr_isLoaded) {
    if (whad_leadak8_dr_branch != 0) {
      whad_leadak8_dr_branch->GetEntry(index);
    } else {
      printf("branch whad_leadak8_dr_branch does not exist!\n");
      exit(1);
    }
    whad_leadak8_dr_isLoaded = true;
  }
  return whad_leadak8_dr_;
}

const float &hwwtree::whad_leadak8_dphi() {
  if (not whad_leadak8_dphi_isLoaded) {
    if (whad_leadak8_dphi_branch != 0) {
      whad_leadak8_dphi_branch->GetEntry(index);
    } else {
      printf("branch whad_leadak8_dphi_branch does not exist!\n");
      exit(1);
    }
    whad_leadak8_dphi_isLoaded = true;
  }
  return whad_leadak8_dphi_;
}

const float &hwwtree::whad_leadak8_deta() {
  if (not whad_leadak8_deta_isLoaded) {
    if (whad_leadak8_deta_branch != 0) {
      whad_leadak8_deta_branch->GetEntry(index);
    } else {
      printf("branch whad_leadak8_deta_branch does not exist!\n");
      exit(1);
    }
    whad_leadak8_deta_isLoaded = true;
  }
  return whad_leadak8_deta_;
}

const float &hwwtree::whad_leadak8_ptratio() {
  if (not whad_leadak8_ptratio_isLoaded) {
    if (whad_leadak8_ptratio_branch != 0) {
      whad_leadak8_ptratio_branch->GetEntry(index);
    } else {
      printf("branch whad_leadak8_ptratio_branch does not exist!\n");
      exit(1);
    }
    whad_leadak8_ptratio_isLoaded = true;
  }
  return whad_leadak8_ptratio_;
}

const float &hwwtree::higgs_leadak8_dr() {
  if (not higgs_leadak8_dr_isLoaded) {
    if (higgs_leadak8_dr_branch != 0) {
      higgs_leadak8_dr_branch->GetEntry(index);
    } else {
      printf("branch higgs_leadak8_dr_branch does not exist!\n");
      exit(1);
    }
    higgs_leadak8_dr_isLoaded = true;
  }
  return higgs_leadak8_dr_;
}

const float &hwwtree::higgs_leadak8_dphi() {
  if (not higgs_leadak8_dphi_isLoaded) {
    if (higgs_leadak8_dphi_branch != 0) {
      higgs_leadak8_dphi_branch->GetEntry(index);
    } else {
      printf("branch higgs_leadak8_dphi_branch does not exist!\n");
      exit(1);
    }
    higgs_leadak8_dphi_isLoaded = true;
  }
  return higgs_leadak8_dphi_;
}

const float &hwwtree::higgs_leadak8_deta() {
  if (not higgs_leadak8_deta_isLoaded) {
    if (higgs_leadak8_deta_branch != 0) {
      higgs_leadak8_deta_branch->GetEntry(index);
    } else {
      printf("branch higgs_leadak8_deta_branch does not exist!\n");
      exit(1);
    }
    higgs_leadak8_deta_isLoaded = true;
  }
  return higgs_leadak8_deta_;
}

const float &hwwtree::higgs_leadak8_ptratio() {
  if (not higgs_leadak8_ptratio_isLoaded) {
    if (higgs_leadak8_ptratio_branch != 0) {
      higgs_leadak8_ptratio_branch->GetEntry(index);
    } else {
      printf("branch higgs_leadak8_ptratio_branch does not exist!\n");
      exit(1);
    }
    higgs_leadak8_ptratio_isLoaded = true;
  }
  return higgs_leadak8_ptratio_;
}

const float &hwwtree::lepton_recolep_dr() {
  if (not lepton_recolep_dr_isLoaded) {
    if (lepton_recolep_dr_branch != 0) {
      lepton_recolep_dr_branch->GetEntry(index);
    } else {
      printf("branch lepton_recolep_dr_branch does not exist!\n");
      exit(1);
    }
    lepton_recolep_dr_isLoaded = true;
  }
  return lepton_recolep_dr_;
}

const float &hwwtree::lepton_recolep_deta() {
  if (not lepton_recolep_deta_isLoaded) {
    if (lepton_recolep_deta_branch != 0) {
      lepton_recolep_deta_branch->GetEntry(index);
    } else {
      printf("branch lepton_recolep_deta_branch does not exist!\n");
      exit(1);
    }
    lepton_recolep_deta_isLoaded = true;
  }
  return lepton_recolep_deta_;
}

const float &hwwtree::lepton_recolep_dphi() {
  if (not lepton_recolep_dphi_isLoaded) {
    if (lepton_recolep_dphi_branch != 0) {
      lepton_recolep_dphi_branch->GetEntry(index);
    } else {
      printf("branch lepton_recolep_dphi_branch does not exist!\n");
      exit(1);
    }
    lepton_recolep_dphi_isLoaded = true;
  }
  return lepton_recolep_dphi_;
}

const float &hwwtree::lepton_recolep_ptratio() {
  if (not lepton_recolep_ptratio_isLoaded) {
    if (lepton_recolep_ptratio_branch != 0) {
      lepton_recolep_ptratio_branch->GetEntry(index);
    } else {
      printf("branch lepton_recolep_ptratio_branch does not exist!\n");
      exit(1);
    }
    lepton_recolep_ptratio_isLoaded = true;
  }
  return lepton_recolep_ptratio_;
}

const float &hwwtree::neutrino_reconeutrino_dr() {
  if (not neutrino_reconeutrino_dr_isLoaded) {
    if (neutrino_reconeutrino_dr_branch != 0) {
      neutrino_reconeutrino_dr_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_dr_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_dr_isLoaded = true;
  }
  return neutrino_reconeutrino_dr_;
}

const float &hwwtree::neutrino_reconeutrino_deta() {
  if (not neutrino_reconeutrino_deta_isLoaded) {
    if (neutrino_reconeutrino_deta_branch != 0) {
      neutrino_reconeutrino_deta_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_deta_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_deta_isLoaded = true;
  }
  return neutrino_reconeutrino_deta_;
}

const float &hwwtree::neutrino_reconeutrino_dphi() {
  if (not neutrino_reconeutrino_dphi_isLoaded) {
    if (neutrino_reconeutrino_dphi_branch != 0) {
      neutrino_reconeutrino_dphi_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_dphi_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_dphi_isLoaded = true;
  }
  return neutrino_reconeutrino_dphi_;
}

const float &hwwtree::neutrino_reconeutrino_dpz() {
  if (not neutrino_reconeutrino_dpz_isLoaded) {
    if (neutrino_reconeutrino_dpz_branch != 0) {
      neutrino_reconeutrino_dpz_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_dpz_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_dpz_isLoaded = true;
  }
  return neutrino_reconeutrino_dpz_;
}

const float &hwwtree::neutrino_reconeutrino_dabspz() {
  if (not neutrino_reconeutrino_dabspz_isLoaded) {
    if (neutrino_reconeutrino_dabspz_branch != 0) {
      neutrino_reconeutrino_dabspz_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_dabspz_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_dabspz_isLoaded = true;
  }
  return neutrino_reconeutrino_dabspz_;
}

const float &hwwtree::neutrino_reconeutrino_ptratio() {
  if (not neutrino_reconeutrino_ptratio_isLoaded) {
    if (neutrino_reconeutrino_ptratio_branch != 0) {
      neutrino_reconeutrino_ptratio_branch->GetEntry(index);
    } else {
      printf("branch neutrino_reconeutrino_ptratio_branch does not exist!\n");
      exit(1);
    }
    neutrino_reconeutrino_ptratio_isLoaded = true;
  }
  return neutrino_reconeutrino_ptratio_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recohiggs_p4() {
  if (not recohiggs_p4_isLoaded) {
    if (recohiggs_p4_branch != 0) {
      recohiggs_p4_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_p4_branch does not exist!\n");
      exit(1);
    }
    recohiggs_p4_isLoaded = true;
  }
  return *recohiggs_p4_;
}

const float &hwwtree::recohiggs_pt() {
  if (not recohiggs_pt_isLoaded) {
    if (recohiggs_pt_branch != 0) {
      recohiggs_pt_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_pt_branch does not exist!\n");
      exit(1);
    }
    recohiggs_pt_isLoaded = true;
  }
  return recohiggs_pt_;
}

const float &hwwtree::recohiggs_eta() {
  if (not recohiggs_eta_isLoaded) {
    if (recohiggs_eta_branch != 0) {
      recohiggs_eta_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_eta_branch does not exist!\n");
      exit(1);
    }
    recohiggs_eta_isLoaded = true;
  }
  return recohiggs_eta_;
}

const float &hwwtree::recohiggs_phi() {
  if (not recohiggs_phi_isLoaded) {
    if (recohiggs_phi_branch != 0) {
      recohiggs_phi_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_phi_branch does not exist!\n");
      exit(1);
    }
    recohiggs_phi_isLoaded = true;
  }
  return recohiggs_phi_;
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

const float &hwwtree::recohiggs_mt() {
  if (not recohiggs_mt_isLoaded) {
    if (recohiggs_mt_branch != 0) {
      recohiggs_mt_branch->GetEntry(index);
    } else {
      printf("branch recohiggs_mt_branch does not exist!\n");
      exit(1);
    }
    recohiggs_mt_isLoaded = true;
  }
  return recohiggs_mt_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recohiggs2_p4() {
  if (not recohiggs2_p4_isLoaded) {
    if (recohiggs2_p4_branch != 0) {
      recohiggs2_p4_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_p4_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_p4_isLoaded = true;
  }
  return *recohiggs2_p4_;
}

const float &hwwtree::recohiggs2_pt() {
  if (not recohiggs2_pt_isLoaded) {
    if (recohiggs2_pt_branch != 0) {
      recohiggs2_pt_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_pt_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_pt_isLoaded = true;
  }
  return recohiggs2_pt_;
}

const float &hwwtree::recohiggs2_eta() {
  if (not recohiggs2_eta_isLoaded) {
    if (recohiggs2_eta_branch != 0) {
      recohiggs2_eta_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_eta_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_eta_isLoaded = true;
  }
  return recohiggs2_eta_;
}

const float &hwwtree::recohiggs2_phi() {
  if (not recohiggs2_phi_isLoaded) {
    if (recohiggs2_phi_branch != 0) {
      recohiggs2_phi_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_phi_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_phi_isLoaded = true;
  }
  return recohiggs2_phi_;
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

const float &hwwtree::recohiggs2_mt() {
  if (not recohiggs2_mt_isLoaded) {
    if (recohiggs2_mt_branch != 0) {
      recohiggs2_mt_branch->GetEntry(index);
    } else {
      printf("branch recohiggs2_mt_branch does not exist!\n");
      exit(1);
    }
    recohiggs2_mt_isLoaded = true;
  }
  return recohiggs2_mt_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recohiggsinv_p4() {
  if (not recohiggsinv_p4_isLoaded) {
    if (recohiggsinv_p4_branch != 0) {
      recohiggsinv_p4_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_p4_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_p4_isLoaded = true;
  }
  return *recohiggsinv_p4_;
}

const float &hwwtree::recohiggsinv_pt() {
  if (not recohiggsinv_pt_isLoaded) {
    if (recohiggsinv_pt_branch != 0) {
      recohiggsinv_pt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_pt_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_pt_isLoaded = true;
  }
  return recohiggsinv_pt_;
}

const float &hwwtree::recohiggsinv_eta() {
  if (not recohiggsinv_eta_isLoaded) {
    if (recohiggsinv_eta_branch != 0) {
      recohiggsinv_eta_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_eta_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_eta_isLoaded = true;
  }
  return recohiggsinv_eta_;
}

const float &hwwtree::recohiggsinv_phi() {
  if (not recohiggsinv_phi_isLoaded) {
    if (recohiggsinv_phi_branch != 0) {
      recohiggsinv_phi_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_phi_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_phi_isLoaded = true;
  }
  return recohiggsinv_phi_;
}

const float &hwwtree::recohiggsinv_mass() {
  if (not recohiggsinv_mass_isLoaded) {
    if (recohiggsinv_mass_branch != 0) {
      recohiggsinv_mass_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_mass_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_mass_isLoaded = true;
  }
  return recohiggsinv_mass_;
}

const float &hwwtree::recohiggsinv_mt() {
  if (not recohiggsinv_mt_isLoaded) {
    if (recohiggsinv_mt_branch != 0) {
      recohiggsinv_mt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsinv_mt_branch does not exist!\n");
      exit(1);
    }
    recohiggsinv_mt_isLoaded = true;
  }
  return recohiggsinv_mt_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recohiggsmin_p4() {
  if (not recohiggsmin_p4_isLoaded) {
    if (recohiggsmin_p4_branch != 0) {
      recohiggsmin_p4_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_p4_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_p4_isLoaded = true;
  }
  return *recohiggsmin_p4_;
}

const float &hwwtree::recohiggsmin_pt() {
  if (not recohiggsmin_pt_isLoaded) {
    if (recohiggsmin_pt_branch != 0) {
      recohiggsmin_pt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_pt_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_pt_isLoaded = true;
  }
  return recohiggsmin_pt_;
}

const float &hwwtree::recohiggsmin_eta() {
  if (not recohiggsmin_eta_isLoaded) {
    if (recohiggsmin_eta_branch != 0) {
      recohiggsmin_eta_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_eta_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_eta_isLoaded = true;
  }
  return recohiggsmin_eta_;
}

const float &hwwtree::recohiggsmin_phi() {
  if (not recohiggsmin_phi_isLoaded) {
    if (recohiggsmin_phi_branch != 0) {
      recohiggsmin_phi_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_phi_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_phi_isLoaded = true;
  }
  return recohiggsmin_phi_;
}

const float &hwwtree::recohiggsmin_mass() {
  if (not recohiggsmin_mass_isLoaded) {
    if (recohiggsmin_mass_branch != 0) {
      recohiggsmin_mass_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_mass_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_mass_isLoaded = true;
  }
  return recohiggsmin_mass_;
}

const float &hwwtree::recohiggsmin_mt() {
  if (not recohiggsmin_mt_isLoaded) {
    if (recohiggsmin_mt_branch != 0) {
      recohiggsmin_mt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin_mt_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin_mt_isLoaded = true;
  }
  return recohiggsmin_mt_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recohiggsmin12_p4() {
  if (not recohiggsmin12_p4_isLoaded) {
    if (recohiggsmin12_p4_branch != 0) {
      recohiggsmin12_p4_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_p4_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_p4_isLoaded = true;
  }
  return *recohiggsmin12_p4_;
}

const float &hwwtree::recohiggsmin12_pt() {
  if (not recohiggsmin12_pt_isLoaded) {
    if (recohiggsmin12_pt_branch != 0) {
      recohiggsmin12_pt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_pt_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_pt_isLoaded = true;
  }
  return recohiggsmin12_pt_;
}

const float &hwwtree::recohiggsmin12_eta() {
  if (not recohiggsmin12_eta_isLoaded) {
    if (recohiggsmin12_eta_branch != 0) {
      recohiggsmin12_eta_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_eta_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_eta_isLoaded = true;
  }
  return recohiggsmin12_eta_;
}

const float &hwwtree::recohiggsmin12_phi() {
  if (not recohiggsmin12_phi_isLoaded) {
    if (recohiggsmin12_phi_branch != 0) {
      recohiggsmin12_phi_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_phi_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_phi_isLoaded = true;
  }
  return recohiggsmin12_phi_;
}

const float &hwwtree::recohiggsmin12_mass() {
  if (not recohiggsmin12_mass_isLoaded) {
    if (recohiggsmin12_mass_branch != 0) {
      recohiggsmin12_mass_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_mass_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_mass_isLoaded = true;
  }
  return recohiggsmin12_mass_;
}

const float &hwwtree::recohiggsmin12_mt() {
  if (not recohiggsmin12_mt_isLoaded) {
    if (recohiggsmin12_mt_branch != 0) {
      recohiggsmin12_mt_branch->GetEntry(index);
    } else {
      printf("branch recohiggsmin12_mt_branch does not exist!\n");
      exit(1);
    }
    recohiggsmin12_mt_isLoaded = true;
  }
  return recohiggsmin12_mt_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recoisr_p4() {
  if (not recoisr_p4_isLoaded) {
    if (recoisr_p4_branch != 0) {
      recoisr_p4_branch->GetEntry(index);
    } else {
      printf("branch recoisr_p4_branch does not exist!\n");
      exit(1);
    }
    recoisr_p4_isLoaded = true;
  }
  return *recoisr_p4_;
}

const float &hwwtree::recoisr_pt() {
  if (not recoisr_pt_isLoaded) {
    if (recoisr_pt_branch != 0) {
      recoisr_pt_branch->GetEntry(index);
    } else {
      printf("branch recoisr_pt_branch does not exist!\n");
      exit(1);
    }
    recoisr_pt_isLoaded = true;
  }
  return recoisr_pt_;
}

const float &hwwtree::recoisr_eta() {
  if (not recoisr_eta_isLoaded) {
    if (recoisr_eta_branch != 0) {
      recoisr_eta_branch->GetEntry(index);
    } else {
      printf("branch recoisr_eta_branch does not exist!\n");
      exit(1);
    }
    recoisr_eta_isLoaded = true;
  }
  return recoisr_eta_;
}

const float &hwwtree::recoisr_phi() {
  if (not recoisr_phi_isLoaded) {
    if (recoisr_phi_branch != 0) {
      recoisr_phi_branch->GetEntry(index);
    } else {
      printf("branch recoisr_phi_branch does not exist!\n");
      exit(1);
    }
    recoisr_phi_isLoaded = true;
  }
  return recoisr_phi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recoisrmegajet_p4() {
  if (not recoisrmegajet_p4_isLoaded) {
    if (recoisrmegajet_p4_branch != 0) {
      recoisrmegajet_p4_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_p4_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_p4_isLoaded = true;
  }
  return *recoisrmegajet_p4_;
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

const float &hwwtree::recoisrmegajet_eta() {
  if (not recoisrmegajet_eta_isLoaded) {
    if (recoisrmegajet_eta_branch != 0) {
      recoisrmegajet_eta_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_eta_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_eta_isLoaded = true;
  }
  return recoisrmegajet_eta_;
}

const float &hwwtree::recoisrmegajet_phi() {
  if (not recoisrmegajet_phi_isLoaded) {
    if (recoisrmegajet_phi_branch != 0) {
      recoisrmegajet_phi_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_phi_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_phi_isLoaded = true;
  }
  return recoisrmegajet_phi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recoisrmegajet_n2_p4() {
  if (not recoisrmegajet_n2_p4_isLoaded) {
    if (recoisrmegajet_n2_p4_branch != 0) {
      recoisrmegajet_n2_p4_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_n2_p4_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_n2_p4_isLoaded = true;
  }
  return *recoisrmegajet_n2_p4_;
}

const float &hwwtree::recoisrmegajet_n2_pt() {
  if (not recoisrmegajet_n2_pt_isLoaded) {
    if (recoisrmegajet_n2_pt_branch != 0) {
      recoisrmegajet_n2_pt_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_n2_pt_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_n2_pt_isLoaded = true;
  }
  return recoisrmegajet_n2_pt_;
}

const float &hwwtree::recoisrmegajet_n2_eta() {
  if (not recoisrmegajet_n2_eta_isLoaded) {
    if (recoisrmegajet_n2_eta_branch != 0) {
      recoisrmegajet_n2_eta_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_n2_eta_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_n2_eta_isLoaded = true;
  }
  return recoisrmegajet_n2_eta_;
}

const float &hwwtree::recoisrmegajet_n2_phi() {
  if (not recoisrmegajet_n2_phi_isLoaded) {
    if (recoisrmegajet_n2_phi_branch != 0) {
      recoisrmegajet_n2_phi_branch->GetEntry(index);
    } else {
      printf("branch recoisrmegajet_n2_phi_branch does not exist!\n");
      exit(1);
    }
    recoisrmegajet_n2_phi_isLoaded = true;
  }
  return recoisrmegajet_n2_phi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recolepton_p4() {
  if (not recolepton_p4_isLoaded) {
    if (recolepton_p4_branch != 0) {
      recolepton_p4_branch->GetEntry(index);
    } else {
      printf("branch recolepton_p4_branch does not exist!\n");
      exit(1);
    }
    recolepton_p4_isLoaded = true;
  }
  return *recolepton_p4_;
}

const int &hwwtree::recolepton_id() {
  if (not recolepton_id_isLoaded) {
    if (recolepton_id_branch != 0) {
      recolepton_id_branch->GetEntry(index);
    } else {
      printf("branch recolepton_id_branch does not exist!\n");
      exit(1);
    }
    recolepton_id_isLoaded = true;
  }
  return recolepton_id_;
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

const float &hwwtree::recolepton_eta() {
  if (not recolepton_eta_isLoaded) {
    if (recolepton_eta_branch != 0) {
      recolepton_eta_branch->GetEntry(index);
    } else {
      printf("branch recolepton_eta_branch does not exist!\n");
      exit(1);
    }
    recolepton_eta_isLoaded = true;
  }
  return recolepton_eta_;
}

const float &hwwtree::recolepton_phi() {
  if (not recolepton_phi_isLoaded) {
    if (recolepton_phi_branch != 0) {
      recolepton_phi_branch->GetEntry(index);
    } else {
      printf("branch recolepton_phi_branch does not exist!\n");
      exit(1);
    }
    recolepton_phi_isLoaded = true;
  }
  return recolepton_phi_;
}

const float &hwwtree::recolepton_mt() {
  if (not recolepton_mt_isLoaded) {
    if (recolepton_mt_branch != 0) {
      recolepton_mt_branch->GetEntry(index);
    } else {
      printf("branch recolepton_mt_branch does not exist!\n");
      exit(1);
    }
    recolepton_mt_isLoaded = true;
  }
  return recolepton_mt_;
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

const int &hwwtree::recoiswleplead() {
  if (not recoiswleplead_isLoaded) {
    if (recoiswleplead_branch != 0) {
      recoiswleplead_branch->GetEntry(index);
    } else {
      printf("branch recoiswleplead_branch does not exist!\n");
      exit(1);
    }
    recoiswleplead_isLoaded = true;
  }
  return recoiswleplead_;
}

const float &hwwtree::reconeutrino_det() {
  if (not reconeutrino_det_isLoaded) {
    if (reconeutrino_det_branch != 0) {
      reconeutrino_det_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_det_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_det_isLoaded = true;
  }
  return reconeutrino_det_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::reconeutrino_p4() {
  if (not reconeutrino_p4_isLoaded) {
    if (reconeutrino_p4_branch != 0) {
      reconeutrino_p4_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_p4_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_p4_isLoaded = true;
  }
  return *reconeutrino_p4_;
}

const float &hwwtree::reconeutrino_pt() {
  if (not reconeutrino_pt_isLoaded) {
    if (reconeutrino_pt_branch != 0) {
      reconeutrino_pt_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_pt_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_pt_isLoaded = true;
  }
  return reconeutrino_pt_;
}

const float &hwwtree::reconeutrino_eta() {
  if (not reconeutrino_eta_isLoaded) {
    if (reconeutrino_eta_branch != 0) {
      reconeutrino_eta_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_eta_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_eta_isLoaded = true;
  }
  return reconeutrino_eta_;
}

const float &hwwtree::reconeutrino_phi() {
  if (not reconeutrino_phi_isLoaded) {
    if (reconeutrino_phi_branch != 0) {
      reconeutrino_phi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_phi_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_phi_isLoaded = true;
  }
  return reconeutrino_phi_;
}

const float &hwwtree::reconeutrino_met_dphi() {
  if (not reconeutrino_met_dphi_isLoaded) {
    if (reconeutrino_met_dphi_branch != 0) {
      reconeutrino_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino_met_dphi_branch does not exist!\n");
      exit(1);
    }
    reconeutrino_met_dphi_isLoaded = true;
  }
  return reconeutrino_met_dphi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::reconeutrino2_p4() {
  if (not reconeutrino2_p4_isLoaded) {
    if (reconeutrino2_p4_branch != 0) {
      reconeutrino2_p4_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino2_p4_branch does not exist!\n");
      exit(1);
    }
    reconeutrino2_p4_isLoaded = true;
  }
  return *reconeutrino2_p4_;
}

const float &hwwtree::reconeutrino2_pt() {
  if (not reconeutrino2_pt_isLoaded) {
    if (reconeutrino2_pt_branch != 0) {
      reconeutrino2_pt_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino2_pt_branch does not exist!\n");
      exit(1);
    }
    reconeutrino2_pt_isLoaded = true;
  }
  return reconeutrino2_pt_;
}

const float &hwwtree::reconeutrino2_eta() {
  if (not reconeutrino2_eta_isLoaded) {
    if (reconeutrino2_eta_branch != 0) {
      reconeutrino2_eta_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino2_eta_branch does not exist!\n");
      exit(1);
    }
    reconeutrino2_eta_isLoaded = true;
  }
  return reconeutrino2_eta_;
}

const float &hwwtree::reconeutrino2_phi() {
  if (not reconeutrino2_phi_isLoaded) {
    if (reconeutrino2_phi_branch != 0) {
      reconeutrino2_phi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino2_phi_branch does not exist!\n");
      exit(1);
    }
    reconeutrino2_phi_isLoaded = true;
  }
  return reconeutrino2_phi_;
}

const float &hwwtree::reconeutrino2_met_dphi() {
  if (not reconeutrino2_met_dphi_isLoaded) {
    if (reconeutrino2_met_dphi_branch != 0) {
      reconeutrino2_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrino2_met_dphi_branch does not exist!\n");
      exit(1);
    }
    reconeutrino2_met_dphi_isLoaded = true;
  }
  return reconeutrino2_met_dphi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::reconeutrinoinv_p4() {
  if (not reconeutrinoinv_p4_isLoaded) {
    if (reconeutrinoinv_p4_branch != 0) {
      reconeutrinoinv_p4_branch->GetEntry(index);
    } else {
      printf("branch reconeutrinoinv_p4_branch does not exist!\n");
      exit(1);
    }
    reconeutrinoinv_p4_isLoaded = true;
  }
  return *reconeutrinoinv_p4_;
}

const float &hwwtree::reconeutrinoinv_pt() {
  if (not reconeutrinoinv_pt_isLoaded) {
    if (reconeutrinoinv_pt_branch != 0) {
      reconeutrinoinv_pt_branch->GetEntry(index);
    } else {
      printf("branch reconeutrinoinv_pt_branch does not exist!\n");
      exit(1);
    }
    reconeutrinoinv_pt_isLoaded = true;
  }
  return reconeutrinoinv_pt_;
}

const float &hwwtree::reconeutrinoinv_eta() {
  if (not reconeutrinoinv_eta_isLoaded) {
    if (reconeutrinoinv_eta_branch != 0) {
      reconeutrinoinv_eta_branch->GetEntry(index);
    } else {
      printf("branch reconeutrinoinv_eta_branch does not exist!\n");
      exit(1);
    }
    reconeutrinoinv_eta_isLoaded = true;
  }
  return reconeutrinoinv_eta_;
}

const float &hwwtree::reconeutrinoinv_phi() {
  if (not reconeutrinoinv_phi_isLoaded) {
    if (reconeutrinoinv_phi_branch != 0) {
      reconeutrinoinv_phi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrinoinv_phi_branch does not exist!\n");
      exit(1);
    }
    reconeutrinoinv_phi_isLoaded = true;
  }
  return reconeutrinoinv_phi_;
}

const float &hwwtree::reconeutrinoinv_met_dphi() {
  if (not reconeutrinoinv_met_dphi_isLoaded) {
    if (reconeutrinoinv_met_dphi_branch != 0) {
      reconeutrinoinv_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch reconeutrinoinv_met_dphi_branch does not exist!\n");
      exit(1);
    }
    reconeutrinoinv_met_dphi_isLoaded = true;
  }
  return reconeutrinoinv_met_dphi_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recowhad_p4() {
  if (not recowhad_p4_isLoaded) {
    if (recowhad_p4_branch != 0) {
      recowhad_p4_branch->GetEntry(index);
    } else {
      printf("branch recowhad_p4_branch does not exist!\n");
      exit(1);
    }
    recowhad_p4_isLoaded = true;
  }
  return *recowhad_p4_;
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

const float &hwwtree::recowhad_eta() {
  if (not recowhad_eta_isLoaded) {
    if (recowhad_eta_branch != 0) {
      recowhad_eta_branch->GetEntry(index);
    } else {
      printf("branch recowhad_eta_branch does not exist!\n");
      exit(1);
    }
    recowhad_eta_isLoaded = true;
  }
  return recowhad_eta_;
}

const float &hwwtree::recowhad_phi() {
  if (not recowhad_phi_isLoaded) {
    if (recowhad_phi_branch != 0) {
      recowhad_phi_branch->GetEntry(index);
    } else {
      printf("branch recowhad_phi_branch does not exist!\n");
      exit(1);
    }
    recowhad_phi_isLoaded = true;
  }
  return recowhad_phi_;
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

const float &hwwtree::recowhad_softdropMass() {
  if (not recowhad_softdropMass_isLoaded) {
    if (recowhad_softdropMass_branch != 0) {
      recowhad_softdropMass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_softdropMass_branch does not exist!\n");
      exit(1);
    }
    recowhad_softdropMass_isLoaded = true;
  }
  return recowhad_softdropMass_;
}

const float &hwwtree::recowhad_prunedMass() {
  if (not recowhad_prunedMass_isLoaded) {
    if (recowhad_prunedMass_branch != 0) {
      recowhad_prunedMass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_prunedMass_branch does not exist!\n");
      exit(1);
    }
    recowhad_prunedMass_isLoaded = true;
  }
  return recowhad_prunedMass_;
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

const float &hwwtree::recowhad_puppi_softdropMass() {
  if (not recowhad_puppi_softdropMass_isLoaded) {
    if (recowhad_puppi_softdropMass_branch != 0) {
      recowhad_puppi_softdropMass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_softdropMass_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_softdropMass_isLoaded = true;
  }
  return recowhad_puppi_softdropMass_;
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

const float &hwwtree::recowhad_puppi_eta() {
  if (not recowhad_puppi_eta_isLoaded) {
    if (recowhad_puppi_eta_branch != 0) {
      recowhad_puppi_eta_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_eta_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_eta_isLoaded = true;
  }
  return recowhad_puppi_eta_;
}

const float &hwwtree::recowhad_puppi_phi() {
  if (not recowhad_puppi_phi_isLoaded) {
    if (recowhad_puppi_phi_branch != 0) {
      recowhad_puppi_phi_branch->GetEntry(index);
    } else {
      printf("branch recowhad_puppi_phi_branch does not exist!\n");
      exit(1);
    }
    recowhad_puppi_phi_isLoaded = true;
  }
  return recowhad_puppi_phi_;
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

const float &hwwtree::recowhad_softdropPuppiSubjet1() {
  if (not recowhad_softdropPuppiSubjet1_isLoaded) {
    if (recowhad_softdropPuppiSubjet1_branch != 0) {
      recowhad_softdropPuppiSubjet1_branch->GetEntry(index);
    } else {
      printf("branch recowhad_softdropPuppiSubjet1_branch does not exist!\n");
      exit(1);
    }
    recowhad_softdropPuppiSubjet1_isLoaded = true;
  }
  return recowhad_softdropPuppiSubjet1_;
}

const float &hwwtree::recowhad_softdropPuppiSubjet2() {
  if (not recowhad_softdropPuppiSubjet2_isLoaded) {
    if (recowhad_softdropPuppiSubjet2_branch != 0) {
      recowhad_softdropPuppiSubjet2_branch->GetEntry(index);
    } else {
      printf("branch recowhad_softdropPuppiSubjet2_branch does not exist!\n");
      exit(1);
    }
    recowhad_softdropPuppiSubjet2_isLoaded = true;
  }
  return recowhad_softdropPuppiSubjet2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recowlep_p4() {
  if (not recowlep_p4_isLoaded) {
    if (recowlep_p4_branch != 0) {
      recowlep_p4_branch->GetEntry(index);
    } else {
      printf("branch recowlep_p4_branch does not exist!\n");
      exit(1);
    }
    recowlep_p4_isLoaded = true;
  }
  return *recowlep_p4_;
}

const float &hwwtree::recowlep_pt() {
  if (not recowlep_pt_isLoaded) {
    if (recowlep_pt_branch != 0) {
      recowlep_pt_branch->GetEntry(index);
    } else {
      printf("branch recowlep_pt_branch does not exist!\n");
      exit(1);
    }
    recowlep_pt_isLoaded = true;
  }
  return recowlep_pt_;
}

const float &hwwtree::recowlep_eta() {
  if (not recowlep_eta_isLoaded) {
    if (recowlep_eta_branch != 0) {
      recowlep_eta_branch->GetEntry(index);
    } else {
      printf("branch recowlep_eta_branch does not exist!\n");
      exit(1);
    }
    recowlep_eta_isLoaded = true;
  }
  return recowlep_eta_;
}

const float &hwwtree::recowlep_phi() {
  if (not recowlep_phi_isLoaded) {
    if (recowlep_phi_branch != 0) {
      recowlep_phi_branch->GetEntry(index);
    } else {
      printf("branch recowlep_phi_branch does not exist!\n");
      exit(1);
    }
    recowlep_phi_isLoaded = true;
  }
  return recowlep_phi_;
}

const float &hwwtree::recowlep_mass() {
  if (not recowlep_mass_isLoaded) {
    if (recowlep_mass_branch != 0) {
      recowlep_mass_branch->GetEntry(index);
    } else {
      printf("branch recowlep_mass_branch does not exist!\n");
      exit(1);
    }
    recowlep_mass_isLoaded = true;
  }
  return recowlep_mass_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recoleadjet_p4() {
  if (not recoleadjet_p4_isLoaded) {
    if (recoleadjet_p4_branch != 0) {
      recoleadjet_p4_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_p4_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_p4_isLoaded = true;
  }
  return *recoleadjet_p4_;
}

const float &hwwtree::recoleadjet_pt() {
  if (not recoleadjet_pt_isLoaded) {
    if (recoleadjet_pt_branch != 0) {
      recoleadjet_pt_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_pt_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_pt_isLoaded = true;
  }
  return recoleadjet_pt_;
}

const float &hwwtree::recoleadjet_eta() {
  if (not recoleadjet_eta_isLoaded) {
    if (recoleadjet_eta_branch != 0) {
      recoleadjet_eta_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_eta_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_eta_isLoaded = true;
  }
  return recoleadjet_eta_;
}

const float &hwwtree::recoleadjet_phi() {
  if (not recoleadjet_phi_isLoaded) {
    if (recoleadjet_phi_branch != 0) {
      recoleadjet_phi_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_phi_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_phi_isLoaded = true;
  }
  return recoleadjet_phi_;
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

const float &hwwtree::recoleadjet_recolepton_dr() {
  if (not recoleadjet_recolepton_dr_isLoaded) {
    if (recoleadjet_recolepton_dr_branch != 0) {
      recoleadjet_recolepton_dr_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_recolepton_dr_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_recolepton_dr_isLoaded = true;
  }
  return recoleadjet_recolepton_dr_;
}

const float &hwwtree::recoleadjet_met_dphi() {
  if (not recoleadjet_met_dphi_isLoaded) {
    if (recoleadjet_met_dphi_branch != 0) {
      recoleadjet_met_dphi_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_met_dphi_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_met_dphi_isLoaded = true;
  }
  return recoleadjet_met_dphi_;
}

const float &hwwtree::recoleadjet_recowhad_dr() {
  if (not recoleadjet_recowhad_dr_isLoaded) {
    if (recoleadjet_recowhad_dr_branch != 0) {
      recoleadjet_recowhad_dr_branch->GetEntry(index);
    } else {
      printf("branch recoleadjet_recowhad_dr_branch does not exist!\n");
      exit(1);
    }
    recoleadjet_recowhad_dr_isLoaded = true;
  }
  return recoleadjet_recowhad_dr_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recowhad_minus_recolepton_p4() {
  if (not recowhad_minus_recolepton_p4_isLoaded) {
    if (recowhad_minus_recolepton_p4_branch != 0) {
      recowhad_minus_recolepton_p4_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_p4_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_p4_isLoaded = true;
  }
  return *recowhad_minus_recolepton_p4_;
}

const float &hwwtree::recowhad_minus_recolepton_pt() {
  if (not recowhad_minus_recolepton_pt_isLoaded) {
    if (recowhad_minus_recolepton_pt_branch != 0) {
      recowhad_minus_recolepton_pt_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_pt_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_pt_isLoaded = true;
  }
  return recowhad_minus_recolepton_pt_;
}

const float &hwwtree::recowhad_minus_recolepton_eta() {
  if (not recowhad_minus_recolepton_eta_isLoaded) {
    if (recowhad_minus_recolepton_eta_branch != 0) {
      recowhad_minus_recolepton_eta_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_eta_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_eta_isLoaded = true;
  }
  return recowhad_minus_recolepton_eta_;
}

const float &hwwtree::recowhad_minus_recolepton_phi() {
  if (not recowhad_minus_recolepton_phi_isLoaded) {
    if (recowhad_minus_recolepton_phi_branch != 0) {
      recowhad_minus_recolepton_phi_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_phi_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_phi_isLoaded = true;
  }
  return recowhad_minus_recolepton_phi_;
}

const float &hwwtree::recowhad_minus_recolepton_mass() {
  if (not recowhad_minus_recolepton_mass_isLoaded) {
    if (recowhad_minus_recolepton_mass_branch != 0) {
      recowhad_minus_recolepton_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_mass_isLoaded = true;
  }
  return recowhad_minus_recolepton_mass_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::recowhad_minus_recolepton_positive_p4() {
  if (not recowhad_minus_recolepton_positive_p4_isLoaded) {
    if (recowhad_minus_recolepton_positive_p4_branch != 0) {
      recowhad_minus_recolepton_positive_p4_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_positive_p4_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_positive_p4_isLoaded = true;
  }
  return *recowhad_minus_recolepton_positive_p4_;
}

const float &hwwtree::recowhad_minus_recolepton_positive_pt() {
  if (not recowhad_minus_recolepton_positive_pt_isLoaded) {
    if (recowhad_minus_recolepton_positive_pt_branch != 0) {
      recowhad_minus_recolepton_positive_pt_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_positive_pt_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_positive_pt_isLoaded = true;
  }
  return recowhad_minus_recolepton_positive_pt_;
}

const float &hwwtree::recowhad_minus_recolepton_positive_eta() {
  if (not recowhad_minus_recolepton_positive_eta_isLoaded) {
    if (recowhad_minus_recolepton_positive_eta_branch != 0) {
      recowhad_minus_recolepton_positive_eta_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_positive_eta_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_positive_eta_isLoaded = true;
  }
  return recowhad_minus_recolepton_positive_eta_;
}

const float &hwwtree::recowhad_minus_recolepton_positive_phi() {
  if (not recowhad_minus_recolepton_positive_phi_isLoaded) {
    if (recowhad_minus_recolepton_positive_phi_branch != 0) {
      recowhad_minus_recolepton_positive_phi_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_positive_phi_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_positive_phi_isLoaded = true;
  }
  return recowhad_minus_recolepton_positive_phi_;
}

const float &hwwtree::recowhad_minus_recolepton_positive_mass() {
  if (not recowhad_minus_recolepton_positive_mass_isLoaded) {
    if (recowhad_minus_recolepton_positive_mass_branch != 0) {
      recowhad_minus_recolepton_positive_mass_branch->GetEntry(index);
    } else {
      printf("branch recowhad_minus_recolepton_positive_mass_branch does not exist!\n");
      exit(1);
    }
    recowhad_minus_recolepton_positive_mass_isLoaded = true;
  }
  return recowhad_minus_recolepton_positive_mass_;
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

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::isr_p4() {
  if (not isr_p4_isLoaded) {
    if (isr_p4_branch != 0) {
      isr_p4_branch->GetEntry(index);
    } else {
      printf("branch isr_p4_branch does not exist!\n");
      exit(1);
    }
    isr_p4_isLoaded = true;
  }
  return *isr_p4_;
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

const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &hwwtree::higgs_p4() {
  if (not higgs_p4_isLoaded) {
    if (higgs_p4_branch != 0) {
      higgs_p4_branch->GetEntry(index);
    } else {
      printf("branch higgs_p4_branch does not exist!\n");
      exit(1);
    }
    higgs_p4_isLoaded = true;
  }
  return *higgs_p4_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::decay_p4() {
  if (not decay_p4_isLoaded) {
    if (decay_p4_branch != 0) {
      decay_p4_branch->GetEntry(index);
    } else {
      printf("branch decay_p4_branch does not exist!\n");
      exit(1);
    }
    decay_p4_isLoaded = true;
  }
  return *decay_p4_;
}

const vector<int> &hwwtree::decay_id() {
  if (not decay_id_isLoaded) {
    if (decay_id_branch != 0) {
      decay_id_branch->GetEntry(index);
    } else {
      printf("branch decay_id_branch does not exist!\n");
      exit(1);
    }
    decay_id_isLoaded = true;
  }
  return *decay_id_;
}

const vector<int> &hwwtree::decay_isstar() {
  if (not decay_isstar_isLoaded) {
    if (decay_isstar_branch != 0) {
      decay_isstar_branch->GetEntry(index);
    } else {
      printf("branch decay_isstar_branch does not exist!\n");
      exit(1);
    }
    decay_isstar_isLoaded = true;
  }
  return *decay_isstar_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::lepton_p4() {
  if (not lepton_p4_isLoaded) {
    if (lepton_p4_branch != 0) {
      lepton_p4_branch->GetEntry(index);
    } else {
      printf("branch lepton_p4_branch does not exist!\n");
      exit(1);
    }
    lepton_p4_isLoaded = true;
  }
  return *lepton_p4_;
}

const vector<int> &hwwtree::lepton_id() {
  if (not lepton_id_isLoaded) {
    if (lepton_id_branch != 0) {
      lepton_id_branch->GetEntry(index);
    } else {
      printf("branch lepton_id_branch does not exist!\n");
      exit(1);
    }
    lepton_id_isLoaded = true;
  }
  return *lepton_id_;
}

const vector<int> &hwwtree::lepton_isstar() {
  if (not lepton_isstar_isLoaded) {
    if (lepton_isstar_branch != 0) {
      lepton_isstar_branch->GetEntry(index);
    } else {
      printf("branch lepton_isstar_branch does not exist!\n");
      exit(1);
    }
    lepton_isstar_isLoaded = true;
  }
  return *lepton_isstar_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::neutrino_p4() {
  if (not neutrino_p4_isLoaded) {
    if (neutrino_p4_branch != 0) {
      neutrino_p4_branch->GetEntry(index);
    } else {
      printf("branch neutrino_p4_branch does not exist!\n");
      exit(1);
    }
    neutrino_p4_isLoaded = true;
  }
  return *neutrino_p4_;
}

const vector<int> &hwwtree::neutrino_id() {
  if (not neutrino_id_isLoaded) {
    if (neutrino_id_branch != 0) {
      neutrino_id_branch->GetEntry(index);
    } else {
      printf("branch neutrino_id_branch does not exist!\n");
      exit(1);
    }
    neutrino_id_isLoaded = true;
  }
  return *neutrino_id_;
}

const vector<int> &hwwtree::neutrino_isstar() {
  if (not neutrino_isstar_isLoaded) {
    if (neutrino_isstar_branch != 0) {
      neutrino_isstar_branch->GetEntry(index);
    } else {
      printf("branch neutrino_isstar_branch does not exist!\n");
      exit(1);
    }
    neutrino_isstar_isLoaded = true;
  }
  return *neutrino_isstar_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::quark_p4() {
  if (not quark_p4_isLoaded) {
    if (quark_p4_branch != 0) {
      quark_p4_branch->GetEntry(index);
    } else {
      printf("branch quark_p4_branch does not exist!\n");
      exit(1);
    }
    quark_p4_isLoaded = true;
  }
  return *quark_p4_;
}

const vector<int> &hwwtree::quark_id() {
  if (not quark_id_isLoaded) {
    if (quark_id_branch != 0) {
      quark_id_branch->GetEntry(index);
    } else {
      printf("branch quark_id_branch does not exist!\n");
      exit(1);
    }
    quark_id_isLoaded = true;
  }
  return *quark_id_;
}

const vector<int> &hwwtree::quark_isstar() {
  if (not quark_isstar_isLoaded) {
    if (quark_isstar_branch != 0) {
      quark_isstar_branch->GetEntry(index);
    } else {
      printf("branch quark_isstar_branch does not exist!\n");
      exit(1);
    }
    quark_isstar_isLoaded = true;
  }
  return *quark_isstar_;
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

const float &hwwtree::inneriso() {
  if (not inneriso_isLoaded) {
    if (inneriso_branch != 0) {
      inneriso_branch->GetEntry(index);
    } else {
      printf("branch inneriso_branch does not exist!\n");
      exit(1);
    }
    inneriso_isLoaded = true;
  }
  return inneriso_;
}

const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hwwtree::pf_p4s() {
  if (not pf_p4s_isLoaded) {
    if (pf_p4s_branch != 0) {
      pf_p4s_branch->GetEntry(index);
    } else {
      printf("branch pf_p4s_branch does not exist!\n");
      exit(1);
    }
    pf_p4s_isLoaded = true;
  }
  return *pf_p4s_;
}

const vector<float> &hwwtree::pf_drs() {
  if (not pf_drs_isLoaded) {
    if (pf_drs_branch != 0) {
      pf_drs_branch->GetEntry(index);
    } else {
      printf("branch pf_drs_branch does not exist!\n");
      exit(1);
    }
    pf_drs_isLoaded = true;
  }
  return *pf_drs_;
}

const float &hwwtree::sumpt_oppo_r15() {
  if (not sumpt_oppo_r15_isLoaded) {
    if (sumpt_oppo_r15_branch != 0) {
      sumpt_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch sumpt_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    sumpt_oppo_r15_isLoaded = true;
  }
  return sumpt_oppo_r15_;
}

const int &hwwtree::njet5_oppo_r15() {
  if (not njet5_oppo_r15_isLoaded) {
    if (njet5_oppo_r15_branch != 0) {
      njet5_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch njet5_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    njet5_oppo_r15_isLoaded = true;
  }
  return njet5_oppo_r15_;
}

const int &hwwtree::njet10_oppo_r15() {
  if (not njet10_oppo_r15_isLoaded) {
    if (njet10_oppo_r15_branch != 0) {
      njet10_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch njet10_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    njet10_oppo_r15_isLoaded = true;
  }
  return njet10_oppo_r15_;
}

const int &hwwtree::njet20_oppo_r15() {
  if (not njet20_oppo_r15_isLoaded) {
    if (njet20_oppo_r15_branch != 0) {
      njet20_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch njet20_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    njet20_oppo_r15_isLoaded = true;
  }
  return njet20_oppo_r15_;
}

const int &hwwtree::njet30_oppo_r15() {
  if (not njet30_oppo_r15_isLoaded) {
    if (njet30_oppo_r15_branch != 0) {
      njet30_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch njet30_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    njet30_oppo_r15_isLoaded = true;
  }
  return njet30_oppo_r15_;
}

const int &hwwtree::njet50_oppo_r15() {
  if (not njet50_oppo_r15_isLoaded) {
    if (njet50_oppo_r15_branch != 0) {
      njet50_oppo_r15_branch->GetEntry(index);
    } else {
      printf("branch njet50_oppo_r15_branch does not exist!\n");
      exit(1);
    }
    njet50_oppo_r15_isLoaded = true;
  }
  return njet50_oppo_r15_;
}

const float &hwwtree::sumpt_oppo() {
  if (not sumpt_oppo_isLoaded) {
    if (sumpt_oppo_branch != 0) {
      sumpt_oppo_branch->GetEntry(index);
    } else {
      printf("branch sumpt_oppo_branch does not exist!\n");
      exit(1);
    }
    sumpt_oppo_isLoaded = true;
  }
  return sumpt_oppo_;
}

const int &hwwtree::njet5_oppo() {
  if (not njet5_oppo_isLoaded) {
    if (njet5_oppo_branch != 0) {
      njet5_oppo_branch->GetEntry(index);
    } else {
      printf("branch njet5_oppo_branch does not exist!\n");
      exit(1);
    }
    njet5_oppo_isLoaded = true;
  }
  return njet5_oppo_;
}

const int &hwwtree::njet10_oppo() {
  if (not njet10_oppo_isLoaded) {
    if (njet10_oppo_branch != 0) {
      njet10_oppo_branch->GetEntry(index);
    } else {
      printf("branch njet10_oppo_branch does not exist!\n");
      exit(1);
    }
    njet10_oppo_isLoaded = true;
  }
  return njet10_oppo_;
}

const int &hwwtree::njet20_oppo() {
  if (not njet20_oppo_isLoaded) {
    if (njet20_oppo_branch != 0) {
      njet20_oppo_branch->GetEntry(index);
    } else {
      printf("branch njet20_oppo_branch does not exist!\n");
      exit(1);
    }
    njet20_oppo_isLoaded = true;
  }
  return njet20_oppo_;
}

const int &hwwtree::njet30_oppo() {
  if (not njet30_oppo_isLoaded) {
    if (njet30_oppo_branch != 0) {
      njet30_oppo_branch->GetEntry(index);
    } else {
      printf("branch njet30_oppo_branch does not exist!\n");
      exit(1);
    }
    njet30_oppo_isLoaded = true;
  }
  return njet30_oppo_;
}

const int &hwwtree::njet50_oppo() {
  if (not njet50_oppo_isLoaded) {
    if (njet50_oppo_branch != 0) {
      njet50_oppo_branch->GetEntry(index);
    } else {
      printf("branch njet50_oppo_branch does not exist!\n");
      exit(1);
    }
    njet50_oppo_isLoaded = true;
  }
  return njet50_oppo_;
}

const float &hwwtree::sumpt_in_fatjet() {
  if (not sumpt_in_fatjet_isLoaded) {
    if (sumpt_in_fatjet_branch != 0) {
      sumpt_in_fatjet_branch->GetEntry(index);
    } else {
      printf("branch sumpt_in_fatjet_branch does not exist!\n");
      exit(1);
    }
    sumpt_in_fatjet_isLoaded = true;
  }
  return sumpt_in_fatjet_;
}

const int &hwwtree::njet5_in_fatjet() {
  if (not njet5_in_fatjet_isLoaded) {
    if (njet5_in_fatjet_branch != 0) {
      njet5_in_fatjet_branch->GetEntry(index);
    } else {
      printf("branch njet5_in_fatjet_branch does not exist!\n");
      exit(1);
    }
    njet5_in_fatjet_isLoaded = true;
  }
  return njet5_in_fatjet_;
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

const float &hwwtree::lepton_relIso03EA() {
  if (not lepton_relIso03EA_isLoaded) {
    if (lepton_relIso03EA_branch != 0) {
      lepton_relIso03EA_branch->GetEntry(index);
    } else {
      printf("branch lepton_relIso03EA_branch does not exist!\n");
      exit(1);
    }
    lepton_relIso03EA_isLoaded = true;
  }
  return lepton_relIso03EA_;
}

const float &hwwtree::lepton_relIso04DB() {
  if (not lepton_relIso04DB_isLoaded) {
    if (lepton_relIso04DB_branch != 0) {
      lepton_relIso04DB_branch->GetEntry(index);
    } else {
      printf("branch lepton_relIso04DB_branch does not exist!\n");
      exit(1);
    }
    lepton_relIso04DB_isLoaded = true;
  }
  return lepton_relIso04DB_;
}

const float &hwwtree::lepton_miniIsoEA() {
  if (not lepton_miniIsoEA_isLoaded) {
    if (lepton_miniIsoEA_branch != 0) {
      lepton_miniIsoEA_branch->GetEntry(index);
    } else {
      printf("branch lepton_miniIsoEA_branch does not exist!\n");
      exit(1);
    }
    lepton_miniIsoEA_isLoaded = true;
  }
  return lepton_miniIsoEA_;
}

const float &hwwtree::lepton_chiso() {
  if (not lepton_chiso_isLoaded) {
    if (lepton_chiso_branch != 0) {
      lepton_chiso_branch->GetEntry(index);
    } else {
      printf("branch lepton_chiso_branch does not exist!\n");
      exit(1);
    }
    lepton_chiso_isLoaded = true;
  }
  return lepton_chiso_;
}

const float &hwwtree::lepton_nhiso() {
  if (not lepton_nhiso_isLoaded) {
    if (lepton_nhiso_branch != 0) {
      lepton_nhiso_branch->GetEntry(index);
    } else {
      printf("branch lepton_nhiso_branch does not exist!\n");
      exit(1);
    }
    lepton_nhiso_isLoaded = true;
  }
  return lepton_nhiso_;
}

const float &hwwtree::lepton_emiso() {
  if (not lepton_emiso_isLoaded) {
    if (lepton_emiso_branch != 0) {
      lepton_emiso_branch->GetEntry(index);
    } else {
      printf("branch lepton_emiso_branch does not exist!\n");
      exit(1);
    }
    lepton_emiso_isLoaded = true;
  }
  return lepton_emiso_;
}

const float &hwwtree::lepton_ncorriso() {
  if (not lepton_ncorriso_isLoaded) {
    if (lepton_ncorriso_branch != 0) {
      lepton_ncorriso_branch->GetEntry(index);
    } else {
      printf("branch lepton_ncorriso_branch does not exist!\n");
      exit(1);
    }
    lepton_ncorriso_isLoaded = true;
  }
  return lepton_ncorriso_;
}

const int &hwwtree::lepton_nChargedPf() {
  if (not lepton_nChargedPf_isLoaded) {
    if (lepton_nChargedPf_branch != 0) {
      lepton_nChargedPf_branch->GetEntry(index);
    } else {
      printf("branch lepton_nChargedPf_branch does not exist!\n");
      exit(1);
    }
    lepton_nChargedPf_isLoaded = true;
  }
  return lepton_nChargedPf_;
}

const int &hwwtree::lepton_nPhotonPf() {
  if (not lepton_nPhotonPf_isLoaded) {
    if (lepton_nPhotonPf_branch != 0) {
      lepton_nPhotonPf_branch->GetEntry(index);
    } else {
      printf("branch lepton_nPhotonPf_branch does not exist!\n");
      exit(1);
    }
    lepton_nPhotonPf_isLoaded = true;
  }
  return lepton_nPhotonPf_;
}

const int &hwwtree::lepton_nNeutralHadPf() {
  if (not lepton_nNeutralHadPf_isLoaded) {
    if (lepton_nNeutralHadPf_branch != 0) {
      lepton_nNeutralHadPf_branch->GetEntry(index);
    } else {
      printf("branch lepton_nNeutralHadPf_branch does not exist!\n");
      exit(1);
    }
    lepton_nNeutralHadPf_isLoaded = true;
  }
  return lepton_nNeutralHadPf_;
}

const int &hwwtree::lepton_isFromW() {
  if (not lepton_isFromW_isLoaded) {
    if (lepton_isFromW_branch != 0) {
      lepton_isFromW_branch->GetEntry(index);
    } else {
      printf("branch lepton_isFromW_branch does not exist!\n");
      exit(1);
    }
    lepton_isFromW_isLoaded = true;
  }
  return lepton_isFromW_;
}

const int &hwwtree::lepton_flavor() {
  if (not lepton_flavor_isLoaded) {
    if (lepton_flavor_branch != 0) {
      lepton_flavor_branch->GetEntry(index);
    } else {
      printf("branch lepton_flavor_branch does not exist!\n");
      exit(1);
    }
    lepton_flavor_isLoaded = true;
  }
  return lepton_flavor_;
}

const int &hwwtree::nvtx() {
  if (not nvtx_isLoaded) {
    if (nvtx_branch != 0) {
      nvtx_branch->GetEntry(index);
    } else {
      printf("branch nvtx_branch does not exist!\n");
      exit(1);
    }
    nvtx_isLoaded = true;
  }
  return nvtx_;
}

const vector<float> &hwwtree::pf_annuli_energy() {
  if (not pf_annuli_energy_isLoaded) {
    if (pf_annuli_energy_branch != 0) {
      pf_annuli_energy_branch->GetEntry(index);
    } else {
      printf("branch pf_annuli_energy_branch does not exist!\n");
      exit(1);
    }
    pf_annuli_energy_isLoaded = true;
  }
  return *pf_annuli_energy_;
}

const vector<float> &hwwtree::pf_pt() {
  if (not pf_pt_isLoaded) {
    if (pf_pt_branch != 0) {
      pf_pt_branch->GetEntry(index);
    } else {
      printf("branch pf_pt_branch does not exist!\n");
      exit(1);
    }
    pf_pt_isLoaded = true;
  }
  return *pf_pt_;
}

const vector<int> &hwwtree::pf_id() {
  if (not pf_id_isLoaded) {
    if (pf_id_branch != 0) {
      pf_id_branch->GetEntry(index);
    } else {
      printf("branch pf_id_branch does not exist!\n");
      exit(1);
    }
    pf_id_isLoaded = true;
  }
  return *pf_id_;
}

const vector<float> &hwwtree::pf_reta() {
  if (not pf_reta_isLoaded) {
    if (pf_reta_branch != 0) {
      pf_reta_branch->GetEntry(index);
    } else {
      printf("branch pf_reta_branch does not exist!\n");
      exit(1);
    }
    pf_reta_isLoaded = true;
  }
  return *pf_reta_;
}

const vector<float> &hwwtree::pf_rphi() {
  if (not pf_rphi_isLoaded) {
    if (pf_rphi_branch != 0) {
      pf_rphi_branch->GetEntry(index);
    } else {
      printf("branch pf_rphi_branch does not exist!\n");
      exit(1);
    }
    pf_rphi_isLoaded = true;
  }
  return *pf_rphi_;
}

const int &hwwtree::HLT_Ele27_WPLoose_Gsf() {
  if (not HLT_Ele27_WPLoose_Gsf_isLoaded) {
    if (HLT_Ele27_WPLoose_Gsf_branch != 0) {
      HLT_Ele27_WPLoose_Gsf_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele27_WPLoose_Gsf_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele27_WPLoose_Gsf_isLoaded = true;
  }
  return HLT_Ele27_WPLoose_Gsf_;
}

const int &hwwtree::HLT_Ele30_WPLoose_Gsf() {
  if (not HLT_Ele30_WPLoose_Gsf_isLoaded) {
    if (HLT_Ele30_WPLoose_Gsf_branch != 0) {
      HLT_Ele30_WPLoose_Gsf_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele30_WPLoose_Gsf_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele30_WPLoose_Gsf_isLoaded = true;
  }
  return HLT_Ele30_WPLoose_Gsf_;
}

const int &hwwtree::HLT_Ele45_WPLoose_Gsf() {
  if (not HLT_Ele45_WPLoose_Gsf_isLoaded) {
    if (HLT_Ele45_WPLoose_Gsf_branch != 0) {
      HLT_Ele45_WPLoose_Gsf_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele45_WPLoose_Gsf_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele45_WPLoose_Gsf_isLoaded = true;
  }
  return HLT_Ele45_WPLoose_Gsf_;
}

const int &hwwtree::HLT_Ele105_CaloIdVT_GsfTrkIdT() {
  if (not HLT_Ele105_CaloIdVT_GsfTrkIdT_isLoaded) {
    if (HLT_Ele105_CaloIdVT_GsfTrkIdT_branch != 0) {
      HLT_Ele105_CaloIdVT_GsfTrkIdT_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele105_CaloIdVT_GsfTrkIdT_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele105_CaloIdVT_GsfTrkIdT_isLoaded = true;
  }
  return HLT_Ele105_CaloIdVT_GsfTrkIdT_;
}

const int &hwwtree::HLT_Ele115_CaloIdVT_GsfTrkIdT() {
  if (not HLT_Ele115_CaloIdVT_GsfTrkIdT_isLoaded) {
    if (HLT_Ele115_CaloIdVT_GsfTrkIdT_branch != 0) {
      HLT_Ele115_CaloIdVT_GsfTrkIdT_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele115_CaloIdVT_GsfTrkIdT_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele115_CaloIdVT_GsfTrkIdT_isLoaded = true;
  }
  return HLT_Ele115_CaloIdVT_GsfTrkIdT_;
}

const int &hwwtree::HLT_IsoTkMu24() {
  if (not HLT_IsoTkMu24_isLoaded) {
    if (HLT_IsoTkMu24_branch != 0) {
      HLT_IsoTkMu24_branch->GetEntry(index);
    } else {
      printf("branch HLT_IsoTkMu24_branch does not exist!\n");
      exit(1);
    }
    HLT_IsoTkMu24_isLoaded = true;
  }
  return HLT_IsoTkMu24_;
}

const int &hwwtree::HLT_IsoMu24() {
  if (not HLT_IsoMu24_isLoaded) {
    if (HLT_IsoMu24_branch != 0) {
      HLT_IsoMu24_branch->GetEntry(index);
    } else {
      printf("branch HLT_IsoMu24_branch does not exist!\n");
      exit(1);
    }
    HLT_IsoMu24_isLoaded = true;
  }
  return HLT_IsoMu24_;
}

const int &hwwtree::HLT_SingleMu50() {
  if (not HLT_SingleMu50_isLoaded) {
    if (HLT_SingleMu50_branch != 0) {
      HLT_SingleMu50_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleMu50_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleMu50_isLoaded = true;
  }
  return HLT_SingleMu50_;
}

const int &hwwtree::HLT_SingleEl40() {
  if (not HLT_SingleEl40_isLoaded) {
    if (HLT_SingleEl40_branch != 0) {
      HLT_SingleEl40_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleEl40_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleEl40_isLoaded = true;
  }
  return HLT_SingleEl40_;
}

const int &hwwtree::HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165() {
  if (not HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_isLoaded) {
    if (HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch != 0) {
      HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch->GetEntry(index);
    } else {
      printf("branch HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_branch does not exist!\n");
      exit(1);
    }
    HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_isLoaded = true;
  }
  return HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_;
}

const int &hwwtree::HLT_Mu50() {
  if (not HLT_Mu50_isLoaded) {
    if (HLT_Mu50_branch != 0) {
      HLT_Mu50_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu50_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu50_isLoaded = true;
  }
  return HLT_Mu50_;
}

const int &hwwtree::HLT_TkMu50() {
  if (not HLT_TkMu50_isLoaded) {
    if (HLT_TkMu50_branch != 0) {
      HLT_TkMu50_branch->GetEntry(index);
    } else {
      printf("branch HLT_TkMu50_branch does not exist!\n");
      exit(1);
    }
    HLT_TkMu50_isLoaded = true;
  }
  return HLT_TkMu50_;
}

const int &hwwtree::HLT_AK8PFHT700_TrimR0p1PT0p03Mass50() {
  if (not HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_isLoaded) {
    if (HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch != 0) {
      HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch->GetEntry(index);
    } else {
      printf("branch HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_branch does not exist!\n");
      exit(1);
    }
    HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_isLoaded = true;
  }
  return HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_;
}

const int &hwwtree::HLT_AK8PFJet360_TrimMass30() {
  if (not HLT_AK8PFJet360_TrimMass30_isLoaded) {
    if (HLT_AK8PFJet360_TrimMass30_branch != 0) {
      HLT_AK8PFJet360_TrimMass30_branch->GetEntry(index);
    } else {
      printf("branch HLT_AK8PFJet360_TrimMass30_branch does not exist!\n");
      exit(1);
    }
    HLT_AK8PFJet360_TrimMass30_isLoaded = true;
  }
  return HLT_AK8PFJet360_TrimMass30_;
}

const int &hwwtree::HLT_PFHT800() {
  if (not HLT_PFHT800_isLoaded) {
    if (HLT_PFHT800_branch != 0) {
      HLT_PFHT800_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT800_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT800_isLoaded = true;
  }
  return HLT_PFHT800_;
}

const int &hwwtree::HLT_PFHT900() {
  if (not HLT_PFHT900_isLoaded) {
    if (HLT_PFHT900_branch != 0) {
      HLT_PFHT900_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT900_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT900_isLoaded = true;
  }
  return HLT_PFHT900_;
}

const int &hwwtree::HLT_PFHT650_WideJetMJJ900DEtaJJ1p5() {
  if (not HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_isLoaded) {
    if (HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch != 0) {
      HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_isLoaded = true;
  }
  return HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_;
}

const int &hwwtree::HLT_PFHT650_WideJetMJJ950DEtaJJ1p5() {
  if (not HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_isLoaded) {
    if (HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch != 0) {
      HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_isLoaded = true;
  }
  return HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_;
}

const int &hwwtree::HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20() {
  if (not HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_isLoaded) {
    if (HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch != 0) {
      HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch->GetEntry(index);
    } else {
      printf("branch HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_branch does not exist!\n");
      exit(1);
    }
    HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_isLoaded = true;
  }
  return HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20_;
}

const int &hwwtree::pass_duplicate_se_sm() {
  if (not pass_duplicate_se_sm_isLoaded) {
    if (pass_duplicate_se_sm_branch != 0) {
      pass_duplicate_se_sm_branch->GetEntry(index);
    } else {
      printf("branch pass_duplicate_se_sm_branch does not exist!\n");
      exit(1);
    }
    pass_duplicate_se_sm_isLoaded = true;
  }
  return pass_duplicate_se_sm_;
}

const int &hwwtree::pass_duplicate_sm_se() {
  if (not pass_duplicate_sm_se_isLoaded) {
    if (pass_duplicate_sm_se_branch != 0) {
      pass_duplicate_sm_se_branch->GetEntry(index);
    } else {
      printf("branch pass_duplicate_sm_se_branch does not exist!\n");
      exit(1);
    }
    pass_duplicate_sm_se_isLoaded = true;
  }
  return pass_duplicate_sm_se_;
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

const float &hwwtree::htOR() {
  if (not htOR_isLoaded) {
    if (htOR_branch != 0) {
      htOR_branch->GetEntry(index);
    } else {
      printf("branch htOR_branch does not exist!\n");
      exit(1);
    }
    htOR_isLoaded = true;
  }
  return htOR_;
}

const float &hwwtree::htOR40() {
  if (not htOR40_isLoaded) {
    if (htOR40_branch != 0) {
      htOR40_branch->GetEntry(index);
    } else {
      printf("branch htOR40_branch does not exist!\n");
      exit(1);
    }
    htOR40_isLoaded = true;
  }
  return htOR40_;
}

const float &hwwtree::htOR50() {
  if (not htOR50_isLoaded) {
    if (htOR50_branch != 0) {
      htOR50_branch->GetEntry(index);
    } else {
      printf("branch htOR50_branch does not exist!\n");
      exit(1);
    }
    htOR50_isLoaded = true;
  }
  return htOR50_;
}

const float &hwwtree::mhOR() {
  if (not mhOR_isLoaded) {
    if (mhOR_branch != 0) {
      mhOR_branch->GetEntry(index);
    } else {
      printf("branch mhOR_branch does not exist!\n");
      exit(1);
    }
    mhOR_isLoaded = true;
  }
  return mhOR_;
}

const float &hwwtree::mhOR40() {
  if (not mhOR40_isLoaded) {
    if (mhOR40_branch != 0) {
      mhOR40_branch->GetEntry(index);
    } else {
      printf("branch mhOR40_branch does not exist!\n");
      exit(1);
    }
    mhOR40_isLoaded = true;
  }
  return mhOR40_;
}

const float &hwwtree::mhOR50() {
  if (not mhOR50_isLoaded) {
    if (mhOR50_branch != 0) {
      mhOR50_branch->GetEntry(index);
    } else {
      printf("branch mhOR50_branch does not exist!\n");
      exit(1);
    }
    mhOR50_isLoaded = true;
  }
  return mhOR50_;
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

const int &run() { return hww.run(); }
const int &lumi() { return hww.lumi(); }
const unsigned long long &evt() { return hww.evt(); }
const int &isData() { return hww.isData(); }
const float &evt_scale1fb() { return hww.evt_scale1fb(); }
const float &genps_weight() { return hww.genps_weight(); }
const float &xsec_br() { return hww.xsec_br(); }
const int &evt_passgoodrunlist() { return hww.evt_passgoodrunlist(); }
const TString &CMS4path() { return hww.CMS4path(); }
const int &CMS4index() { return hww.CMS4index(); }
const float &weight_fr_r1_f1() { return hww.weight_fr_r1_f1(); }
const float &weight_fr_r1_f2() { return hww.weight_fr_r1_f2(); }
const float &weight_fr_r1_f0p5() { return hww.weight_fr_r1_f0p5(); }
const float &weight_fr_r2_f1() { return hww.weight_fr_r2_f1(); }
const float &weight_fr_r2_f2() { return hww.weight_fr_r2_f2(); }
const float &weight_fr_r2_f0p5() { return hww.weight_fr_r2_f0p5(); }
const float &weight_fr_r0p5_f1() { return hww.weight_fr_r0p5_f1(); }
const float &weight_fr_r0p5_f2() { return hww.weight_fr_r0p5_f2(); }
const float &weight_fr_r0p5_f0p5() { return hww.weight_fr_r0p5_f0p5(); }
const float &weight_pdf_up() { return hww.weight_pdf_up(); }
const float &weight_pdf_down() { return hww.weight_pdf_down(); }
const float &weight_alphas_down() { return hww.weight_alphas_down(); }
const float &weight_alphas_up() { return hww.weight_alphas_up(); }
const float &weight_isr() { return hww.weight_isr(); }
const float &weight_isr_up() { return hww.weight_isr_up(); }
const float &weight_isr_down() { return hww.weight_isr_down(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lep_p4() { return hww.lep_p4(); }
const vector<int> &lep_id() { return hww.lep_id(); }
const vector<int> &lep_idx() { return hww.lep_idx(); }
const vector<float> &lep_pt() { return hww.lep_pt(); }
const vector<float> &lep_eta() { return hww.lep_eta(); }
const vector<float> &lep_phi() { return hww.lep_phi(); }
const vector<float> &lep_miniIsoEA() { return hww.lep_miniIsoEA(); }
const vector<float> &lep_relIso03EA() { return hww.lep_relIso03EA(); }
const vector<float> &lep_relIso04DB() { return hww.lep_relIso04DB(); }
const vector<float> &lep_customrelIso005EA() { return hww.lep_customrelIso005EA(); }
const vector<float> &lep_customrelIso01EA() { return hww.lep_customrelIso01EA(); }
const vector<float> &lep_customrelIso015EA() { return hww.lep_customrelIso015EA(); }
const vector<float> &lep_customrelIso02EA() { return hww.lep_customrelIso02EA(); }
const vector<float> &lep_customrelIso025EA() { return hww.lep_customrelIso025EA(); }
const vector<float> &lep_customrelIso03EA() { return hww.lep_customrelIso03EA(); }
const vector<float> &lep_customrelIso035EA() { return hww.lep_customrelIso035EA(); }
const vector<float> &lep_customrelIso04EA() { return hww.lep_customrelIso04EA(); }
const vector<float> &lep_customrelIso045EA() { return hww.lep_customrelIso045EA(); }
const vector<float> &lep_customrelIso05EA() { return hww.lep_customrelIso05EA(); }
const vector<float> &lep_customrelIso055EA() { return hww.lep_customrelIso055EA(); }
const vector<float> &lep_customrelIso06EA() { return hww.lep_customrelIso06EA(); }
const vector<float> &lep_customrelIso065EA() { return hww.lep_customrelIso065EA(); }
const vector<float> &lep_customrelIso07EA() { return hww.lep_customrelIso07EA(); }
const vector<float> &lep_customrelIso075EA() { return hww.lep_customrelIso075EA(); }
const vector<float> &lep_customrelIso08EA() { return hww.lep_customrelIso08EA(); }
const int &nrecolep() { return hww.nrecolep(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep_p4_0() { return hww.lep_p4_0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep_p4_1() { return hww.lep_p4_1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &lep_p4_2() { return hww.lep_p4_2(); }
const float &lep_pt_0() { return hww.lep_pt_0(); }
const float &lep_pt_1() { return hww.lep_pt_1(); }
const float &lep_pt_2() { return hww.lep_pt_2(); }
const float &lep_eta_0() { return hww.lep_eta_0(); }
const float &lep_eta_1() { return hww.lep_eta_1(); }
const float &lep_eta_2() { return hww.lep_eta_2(); }
const float &lep_phi_0() { return hww.lep_phi_0(); }
const float &lep_phi_1() { return hww.lep_phi_1(); }
const float &lep_phi_2() { return hww.lep_phi_2(); }
const float &lep_miniIsoEA_0() { return hww.lep_miniIsoEA_0(); }
const float &lep_miniIsoEA_1() { return hww.lep_miniIsoEA_1(); }
const float &lep_miniIsoEA_2() { return hww.lep_miniIsoEA_2(); }
const float &lep_relIso03EA_0() { return hww.lep_relIso03EA_0(); }
const float &lep_relIso03EA_1() { return hww.lep_relIso03EA_1(); }
const float &lep_relIso03EA_2() { return hww.lep_relIso03EA_2(); }
const float &lep_relIso04DB_0() { return hww.lep_relIso04DB_0(); }
const float &lep_relIso04DB_1() { return hww.lep_relIso04DB_1(); }
const float &lep_relIso04DB_2() { return hww.lep_relIso04DB_2(); }
const int &lep_id_0() { return hww.lep_id_0(); }
const int &lep_id_1() { return hww.lep_id_1(); }
const int &lep_id_2() { return hww.lep_id_2(); }
const int &lep_idx_0() { return hww.lep_idx_0(); }
const int &lep_idx_1() { return hww.lep_idx_1(); }
const int &lep_idx_2() { return hww.lep_idx_2(); }
const int &nj() { return hww.nj(); }
const int &nb() { return hww.nb(); }
const int &nbmed() { return hww.nbmed(); }
const int &nbtight() { return hww.nbtight(); }
const int &nj50() { return hww.nj50(); }
const int &nb50() { return hww.nb50(); }
const int &nb50med() { return hww.nb50med(); }
const int &nb50tight() { return hww.nb50tight(); }
const int &nb30() { return hww.nb30(); }
const int &nb30med() { return hww.nb30med(); }
const int &nb30tight() { return hww.nb30tight(); }
const int &nb40() { return hww.nb40(); }
const int &nb40med() { return hww.nb40med(); }
const int &nb40tight() { return hww.nb40tight(); }
const float &ht() { return hww.ht(); }
const float &ht40() { return hww.ht40(); }
const float &ht50() { return hww.ht50(); }
const float &mh() { return hww.mh(); }
const float &mh40() { return hww.mh40(); }
const float &mh50() { return hww.mh50(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &alljets_p4() { return hww.alljets_p4(); }
const vector<float> &alljets_pt() { return hww.alljets_pt(); }
const vector<float> &alljets_eta() { return hww.alljets_eta(); }
const vector<float> &alljets_phi() { return hww.alljets_phi(); }
const vector<float> &alljets_csv() { return hww.alljets_csv(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4() { return hww.jets_p4(); }
const vector<float> &jets_pt() { return hww.jets_pt(); }
const vector<float> &jets_eta() { return hww.jets_eta(); }
const vector<float> &jets_phi() { return hww.jets_phi(); }
const vector<float> &jets_csv() { return hww.jets_csv(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_up_p4() { return hww.jets_up_p4(); }
const vector<float> &jets_up_pt() { return hww.jets_up_pt(); }
const vector<float> &jets_up_eta() { return hww.jets_up_eta(); }
const vector<float> &jets_up_phi() { return hww.jets_up_phi(); }
const vector<float> &jets_up_csv() { return hww.jets_up_csv(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_dn_p4() { return hww.jets_dn_p4(); }
const vector<float> &jets_dn_pt() { return hww.jets_dn_pt(); }
const vector<float> &jets_dn_eta() { return hww.jets_dn_eta(); }
const vector<float> &jets_dn_phi() { return hww.jets_dn_phi(); }
const vector<float> &jets_dn_csv() { return hww.jets_dn_csv(); }
const int &nak8jets() { return hww.nak8jets(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_p4() { return hww.ak8jets_p4(); }
const vector<float> &ak8jets_pt() { return hww.ak8jets_pt(); }
const vector<float> &ak8jets_eta() { return hww.ak8jets_eta(); }
const vector<float> &ak8jets_phi() { return hww.ak8jets_phi(); }
const vector<float> &ak8jets_softdropMass() { return hww.ak8jets_softdropMass(); }
const vector<float> &ak8jets_prunedMass() { return hww.ak8jets_prunedMass(); }
const vector<float> &ak8jets_trimmedMass() { return hww.ak8jets_trimmedMass(); }
const vector<float> &ak8jets_mass() { return hww.ak8jets_mass(); }
const vector<float> &ak8jets_nJettinessTau1() { return hww.ak8jets_nJettinessTau1(); }
const vector<float> &ak8jets_nJettinessTau2() { return hww.ak8jets_nJettinessTau2(); }
const vector<float> &ak8jets_softdropPuppiSubjet1() { return hww.ak8jets_softdropPuppiSubjet1(); }
const vector<float> &ak8jets_softdropPuppiSubjet2() { return hww.ak8jets_softdropPuppiSubjet2(); }
const vector<float> &ak8jets_puppi_softdropMass() { return hww.ak8jets_puppi_softdropMass(); }
const vector<float> &ak8jets_puppi_nJettinessTau1() { return hww.ak8jets_puppi_nJettinessTau1(); }
const vector<float> &ak8jets_puppi_nJettinessTau2() { return hww.ak8jets_puppi_nJettinessTau2(); }
const vector<float> &ak8jets_puppi_eta() { return hww.ak8jets_puppi_eta(); }
const vector<float> &ak8jets_puppi_phi() { return hww.ak8jets_puppi_phi(); }
const vector<float> &ak8jets_puppi_pt() { return hww.ak8jets_puppi_pt(); }
const vector<float> &ak8jets_puppi_mass() { return hww.ak8jets_puppi_mass(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_p4_0() { return hww.jets_p4_0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_p4_1() { return hww.jets_p4_1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_p4_2() { return hww.jets_p4_2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_up_p4_0() { return hww.jets_up_p4_0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_up_p4_1() { return hww.jets_up_p4_1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_up_p4_2() { return hww.jets_up_p4_2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_dn_p4_0() { return hww.jets_dn_p4_0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_dn_p4_1() { return hww.jets_dn_p4_1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &jets_dn_p4_2() { return hww.jets_dn_p4_2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak8jets_p4_0() { return hww.ak8jets_p4_0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak8jets_p4_1() { return hww.ak8jets_p4_1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &ak8jets_p4_2() { return hww.ak8jets_p4_2(); }
const float &jets_pt_0() { return hww.jets_pt_0(); }
const float &jets_pt_1() { return hww.jets_pt_1(); }
const float &jets_pt_2() { return hww.jets_pt_2(); }
const float &jets_eta_0() { return hww.jets_eta_0(); }
const float &jets_eta_1() { return hww.jets_eta_1(); }
const float &jets_eta_2() { return hww.jets_eta_2(); }
const float &jets_phi_0() { return hww.jets_phi_0(); }
const float &jets_phi_1() { return hww.jets_phi_1(); }
const float &jets_phi_2() { return hww.jets_phi_2(); }
const float &jets_csv_0() { return hww.jets_csv_0(); }
const float &jets_csv_1() { return hww.jets_csv_1(); }
const float &jets_csv_2() { return hww.jets_csv_2(); }
const float &jets_up_pt_0() { return hww.jets_up_pt_0(); }
const float &jets_up_pt_1() { return hww.jets_up_pt_1(); }
const float &jets_up_pt_2() { return hww.jets_up_pt_2(); }
const float &jets_up_eta_0() { return hww.jets_up_eta_0(); }
const float &jets_up_eta_1() { return hww.jets_up_eta_1(); }
const float &jets_up_eta_2() { return hww.jets_up_eta_2(); }
const float &jets_up_phi_0() { return hww.jets_up_phi_0(); }
const float &jets_up_phi_1() { return hww.jets_up_phi_1(); }
const float &jets_up_phi_2() { return hww.jets_up_phi_2(); }
const float &jets_up_csv_0() { return hww.jets_up_csv_0(); }
const float &jets_up_csv_1() { return hww.jets_up_csv_1(); }
const float &jets_up_csv_2() { return hww.jets_up_csv_2(); }
const float &jets_dn_pt_0() { return hww.jets_dn_pt_0(); }
const float &jets_dn_pt_1() { return hww.jets_dn_pt_1(); }
const float &jets_dn_pt_2() { return hww.jets_dn_pt_2(); }
const float &jets_dn_eta_0() { return hww.jets_dn_eta_0(); }
const float &jets_dn_eta_1() { return hww.jets_dn_eta_1(); }
const float &jets_dn_eta_2() { return hww.jets_dn_eta_2(); }
const float &jets_dn_phi_0() { return hww.jets_dn_phi_0(); }
const float &jets_dn_phi_1() { return hww.jets_dn_phi_1(); }
const float &jets_dn_phi_2() { return hww.jets_dn_phi_2(); }
const float &jets_dn_csv_0() { return hww.jets_dn_csv_0(); }
const float &jets_dn_csv_1() { return hww.jets_dn_csv_1(); }
const float &jets_dn_csv_2() { return hww.jets_dn_csv_2(); }
const float &ak8jets_pt_0() { return hww.ak8jets_pt_0(); }
const float &ak8jets_pt_1() { return hww.ak8jets_pt_1(); }
const float &ak8jets_pt_2() { return hww.ak8jets_pt_2(); }
const float &ak8jets_eta_0() { return hww.ak8jets_eta_0(); }
const float &ak8jets_eta_1() { return hww.ak8jets_eta_1(); }
const float &ak8jets_eta_2() { return hww.ak8jets_eta_2(); }
const float &ak8jets_phi_0() { return hww.ak8jets_phi_0(); }
const float &ak8jets_phi_1() { return hww.ak8jets_phi_1(); }
const float &ak8jets_phi_2() { return hww.ak8jets_phi_2(); }
const float &ak8jets_softdropMass_0() { return hww.ak8jets_softdropMass_0(); }
const float &ak8jets_softdropMass_1() { return hww.ak8jets_softdropMass_1(); }
const float &ak8jets_softdropMass_2() { return hww.ak8jets_softdropMass_2(); }
const float &ak8jets_prunedMass_0() { return hww.ak8jets_prunedMass_0(); }
const float &ak8jets_prunedMass_1() { return hww.ak8jets_prunedMass_1(); }
const float &ak8jets_prunedMass_2() { return hww.ak8jets_prunedMass_2(); }
const float &ak8jets_trimmedMass_0() { return hww.ak8jets_trimmedMass_0(); }
const float &ak8jets_trimmedMass_1() { return hww.ak8jets_trimmedMass_1(); }
const float &ak8jets_trimmedMass_2() { return hww.ak8jets_trimmedMass_2(); }
const float &ak8jets_mass_0() { return hww.ak8jets_mass_0(); }
const float &ak8jets_mass_1() { return hww.ak8jets_mass_1(); }
const float &ak8jets_mass_2() { return hww.ak8jets_mass_2(); }
const float &ak8jets_nJettinessTau1_0() { return hww.ak8jets_nJettinessTau1_0(); }
const float &ak8jets_nJettinessTau1_1() { return hww.ak8jets_nJettinessTau1_1(); }
const float &ak8jets_nJettinessTau1_2() { return hww.ak8jets_nJettinessTau1_2(); }
const float &ak8jets_nJettinessTau2_0() { return hww.ak8jets_nJettinessTau2_0(); }
const float &ak8jets_nJettinessTau2_1() { return hww.ak8jets_nJettinessTau2_1(); }
const float &ak8jets_nJettinessTau2_2() { return hww.ak8jets_nJettinessTau2_2(); }
const float &ak8jets_softdropPuppiSubjet1_0() { return hww.ak8jets_softdropPuppiSubjet1_0(); }
const float &ak8jets_softdropPuppiSubjet1_1() { return hww.ak8jets_softdropPuppiSubjet1_1(); }
const float &ak8jets_softdropPuppiSubjet1_2() { return hww.ak8jets_softdropPuppiSubjet1_2(); }
const float &ak8jets_softdropPuppiSubjet2_0() { return hww.ak8jets_softdropPuppiSubjet2_0(); }
const float &ak8jets_softdropPuppiSubjet2_1() { return hww.ak8jets_softdropPuppiSubjet2_1(); }
const float &ak8jets_softdropPuppiSubjet2_2() { return hww.ak8jets_softdropPuppiSubjet2_2(); }
const float &ak8jets_puppi_softdropMass_0() { return hww.ak8jets_puppi_softdropMass_0(); }
const float &ak8jets_puppi_softdropMass_1() { return hww.ak8jets_puppi_softdropMass_1(); }
const float &ak8jets_puppi_softdropMass_2() { return hww.ak8jets_puppi_softdropMass_2(); }
const float &ak8jets_puppi_nJettinessTau1_0() { return hww.ak8jets_puppi_nJettinessTau1_0(); }
const float &ak8jets_puppi_nJettinessTau1_1() { return hww.ak8jets_puppi_nJettinessTau1_1(); }
const float &ak8jets_puppi_nJettinessTau1_2() { return hww.ak8jets_puppi_nJettinessTau1_2(); }
const float &ak8jets_puppi_nJettinessTau2_0() { return hww.ak8jets_puppi_nJettinessTau2_0(); }
const float &ak8jets_puppi_nJettinessTau2_1() { return hww.ak8jets_puppi_nJettinessTau2_1(); }
const float &ak8jets_puppi_nJettinessTau2_2() { return hww.ak8jets_puppi_nJettinessTau2_2(); }
const float &ak8jets_puppi_eta_0() { return hww.ak8jets_puppi_eta_0(); }
const float &ak8jets_puppi_eta_1() { return hww.ak8jets_puppi_eta_1(); }
const float &ak8jets_puppi_eta_2() { return hww.ak8jets_puppi_eta_2(); }
const float &ak8jets_puppi_phi_0() { return hww.ak8jets_puppi_phi_0(); }
const float &ak8jets_puppi_phi_1() { return hww.ak8jets_puppi_phi_1(); }
const float &ak8jets_puppi_phi_2() { return hww.ak8jets_puppi_phi_2(); }
const float &ak8jets_puppi_pt_0() { return hww.ak8jets_puppi_pt_0(); }
const float &ak8jets_puppi_pt_1() { return hww.ak8jets_puppi_pt_1(); }
const float &ak8jets_puppi_pt_2() { return hww.ak8jets_puppi_pt_2(); }
const float &ak8jets_puppi_mass_0() { return hww.ak8jets_puppi_mass_0(); }
const float &ak8jets_puppi_mass_1() { return hww.ak8jets_puppi_mass_1(); }
const float &ak8jets_puppi_mass_2() { return hww.ak8jets_puppi_mass_2(); }
const float &weight_btagsf() { return hww.weight_btagsf(); }
const float &weight_btagsf_heavy_DN() { return hww.weight_btagsf_heavy_DN(); }
const float &weight_btagsf_heavy_UP() { return hww.weight_btagsf_heavy_UP(); }
const float &weight_btagsf_light_DN() { return hww.weight_btagsf_light_DN(); }
const float &weight_btagsf_light_UP() { return hww.weight_btagsf_light_UP(); }
const float &met_pt() { return hww.met_pt(); }
const float &met_phi() { return hww.met_phi(); }
const float &met_up_pt() { return hww.met_up_pt(); }
const float &met_up_phi() { return hww.met_up_phi(); }
const float &met_dn_pt() { return hww.met_dn_pt(); }
const float &met_dn_phi() { return hww.met_dn_phi(); }
const float &met_gen_pt() { return hww.met_gen_pt(); }
const float &met_gen_phi() { return hww.met_gen_phi(); }
const float &gen_ht() { return hww.gen_ht(); }
const float &isr_leadjet_dr() { return hww.isr_leadjet_dr(); }
const float &higgs_met_dphi() { return hww.higgs_met_dphi(); }
const float &isr_recoisr_dr() { return hww.isr_recoisr_dr(); }
const float &isr_recoisrmegajet_dr() { return hww.isr_recoisrmegajet_dr(); }
const float &lepton_met_dphi() { return hww.lepton_met_dphi(); }
const float &quark0_met_dphi() { return hww.quark0_met_dphi(); }
const float &quark1_met_dphi() { return hww.quark1_met_dphi(); }
const float &wlep_met_dphi() { return hww.wlep_met_dphi(); }
const float &whad_met_dphi() { return hww.whad_met_dphi(); }
const float &whad_recowhad_dr() { return hww.whad_recowhad_dr(); }
const float &whad_recowhad_dphi() { return hww.whad_recowhad_dphi(); }
const float &whad_recowhad_deta() { return hww.whad_recowhad_deta(); }
const float &whad_recowhad_ptratio() { return hww.whad_recowhad_ptratio(); }
const float &higgs_recowhad_dr() { return hww.higgs_recowhad_dr(); }
const float &higgs_recowhad_dphi() { return hww.higgs_recowhad_dphi(); }
const float &higgs_recowhad_deta() { return hww.higgs_recowhad_deta(); }
const float &higgs_recowhad_ptratio() { return hww.higgs_recowhad_ptratio(); }
const float &whad_leadak8_dr() { return hww.whad_leadak8_dr(); }
const float &whad_leadak8_dphi() { return hww.whad_leadak8_dphi(); }
const float &whad_leadak8_deta() { return hww.whad_leadak8_deta(); }
const float &whad_leadak8_ptratio() { return hww.whad_leadak8_ptratio(); }
const float &higgs_leadak8_dr() { return hww.higgs_leadak8_dr(); }
const float &higgs_leadak8_dphi() { return hww.higgs_leadak8_dphi(); }
const float &higgs_leadak8_deta() { return hww.higgs_leadak8_deta(); }
const float &higgs_leadak8_ptratio() { return hww.higgs_leadak8_ptratio(); }
const float &lepton_recolep_dr() { return hww.lepton_recolep_dr(); }
const float &lepton_recolep_deta() { return hww.lepton_recolep_deta(); }
const float &lepton_recolep_dphi() { return hww.lepton_recolep_dphi(); }
const float &lepton_recolep_ptratio() { return hww.lepton_recolep_ptratio(); }
const float &neutrino_reconeutrino_dr() { return hww.neutrino_reconeutrino_dr(); }
const float &neutrino_reconeutrino_deta() { return hww.neutrino_reconeutrino_deta(); }
const float &neutrino_reconeutrino_dphi() { return hww.neutrino_reconeutrino_dphi(); }
const float &neutrino_reconeutrino_dpz() { return hww.neutrino_reconeutrino_dpz(); }
const float &neutrino_reconeutrino_dabspz() { return hww.neutrino_reconeutrino_dabspz(); }
const float &neutrino_reconeutrino_ptratio() { return hww.neutrino_reconeutrino_ptratio(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recohiggs_p4() { return hww.recohiggs_p4(); }
const float &recohiggs_pt() { return hww.recohiggs_pt(); }
const float &recohiggs_eta() { return hww.recohiggs_eta(); }
const float &recohiggs_phi() { return hww.recohiggs_phi(); }
const float &recohiggs_mass() { return hww.recohiggs_mass(); }
const float &recohiggs_mt() { return hww.recohiggs_mt(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recohiggs2_p4() { return hww.recohiggs2_p4(); }
const float &recohiggs2_pt() { return hww.recohiggs2_pt(); }
const float &recohiggs2_eta() { return hww.recohiggs2_eta(); }
const float &recohiggs2_phi() { return hww.recohiggs2_phi(); }
const float &recohiggs2_mass() { return hww.recohiggs2_mass(); }
const float &recohiggs2_mt() { return hww.recohiggs2_mt(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recohiggsinv_p4() { return hww.recohiggsinv_p4(); }
const float &recohiggsinv_pt() { return hww.recohiggsinv_pt(); }
const float &recohiggsinv_eta() { return hww.recohiggsinv_eta(); }
const float &recohiggsinv_phi() { return hww.recohiggsinv_phi(); }
const float &recohiggsinv_mass() { return hww.recohiggsinv_mass(); }
const float &recohiggsinv_mt() { return hww.recohiggsinv_mt(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recohiggsmin_p4() { return hww.recohiggsmin_p4(); }
const float &recohiggsmin_pt() { return hww.recohiggsmin_pt(); }
const float &recohiggsmin_eta() { return hww.recohiggsmin_eta(); }
const float &recohiggsmin_phi() { return hww.recohiggsmin_phi(); }
const float &recohiggsmin_mass() { return hww.recohiggsmin_mass(); }
const float &recohiggsmin_mt() { return hww.recohiggsmin_mt(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recohiggsmin12_p4() { return hww.recohiggsmin12_p4(); }
const float &recohiggsmin12_pt() { return hww.recohiggsmin12_pt(); }
const float &recohiggsmin12_eta() { return hww.recohiggsmin12_eta(); }
const float &recohiggsmin12_phi() { return hww.recohiggsmin12_phi(); }
const float &recohiggsmin12_mass() { return hww.recohiggsmin12_mass(); }
const float &recohiggsmin12_mt() { return hww.recohiggsmin12_mt(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recoisr_p4() { return hww.recoisr_p4(); }
const float &recoisr_pt() { return hww.recoisr_pt(); }
const float &recoisr_eta() { return hww.recoisr_eta(); }
const float &recoisr_phi() { return hww.recoisr_phi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recoisrmegajet_p4() { return hww.recoisrmegajet_p4(); }
const float &recoisrmegajet_pt() { return hww.recoisrmegajet_pt(); }
const float &recoisrmegajet_eta() { return hww.recoisrmegajet_eta(); }
const float &recoisrmegajet_phi() { return hww.recoisrmegajet_phi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recoisrmegajet_n2_p4() { return hww.recoisrmegajet_n2_p4(); }
const float &recoisrmegajet_n2_pt() { return hww.recoisrmegajet_n2_pt(); }
const float &recoisrmegajet_n2_eta() { return hww.recoisrmegajet_n2_eta(); }
const float &recoisrmegajet_n2_phi() { return hww.recoisrmegajet_n2_phi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recolepton_p4() { return hww.recolepton_p4(); }
const int &recolepton_id() { return hww.recolepton_id(); }
const float &recolepton_pt() { return hww.recolepton_pt(); }
const float &recolepton_eta() { return hww.recolepton_eta(); }
const float &recolepton_phi() { return hww.recolepton_phi(); }
const float &recolepton_mt() { return hww.recolepton_mt(); }
const float &recolepton_met_dphi() { return hww.recolepton_met_dphi(); }
const int &recoiswleplead() { return hww.recoiswleplead(); }
const float &reconeutrino_det() { return hww.reconeutrino_det(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &reconeutrino_p4() { return hww.reconeutrino_p4(); }
const float &reconeutrino_pt() { return hww.reconeutrino_pt(); }
const float &reconeutrino_eta() { return hww.reconeutrino_eta(); }
const float &reconeutrino_phi() { return hww.reconeutrino_phi(); }
const float &reconeutrino_met_dphi() { return hww.reconeutrino_met_dphi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &reconeutrino2_p4() { return hww.reconeutrino2_p4(); }
const float &reconeutrino2_pt() { return hww.reconeutrino2_pt(); }
const float &reconeutrino2_eta() { return hww.reconeutrino2_eta(); }
const float &reconeutrino2_phi() { return hww.reconeutrino2_phi(); }
const float &reconeutrino2_met_dphi() { return hww.reconeutrino2_met_dphi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &reconeutrinoinv_p4() { return hww.reconeutrinoinv_p4(); }
const float &reconeutrinoinv_pt() { return hww.reconeutrinoinv_pt(); }
const float &reconeutrinoinv_eta() { return hww.reconeutrinoinv_eta(); }
const float &reconeutrinoinv_phi() { return hww.reconeutrinoinv_phi(); }
const float &reconeutrinoinv_met_dphi() { return hww.reconeutrinoinv_met_dphi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recowhad_p4() { return hww.recowhad_p4(); }
const float &recowhad_pt() { return hww.recowhad_pt(); }
const float &recowhad_eta() { return hww.recowhad_eta(); }
const float &recowhad_phi() { return hww.recowhad_phi(); }
const float &recowhad_mass() { return hww.recowhad_mass(); }
const float &recowhad_softdropMass() { return hww.recowhad_softdropMass(); }
const float &recowhad_prunedMass() { return hww.recowhad_prunedMass(); }
const float &recowhad_nJettinessTau1() { return hww.recowhad_nJettinessTau1(); }
const float &recowhad_nJettinessTau2() { return hww.recowhad_nJettinessTau2(); }
const float &recowhad_puppi_softdropMass() { return hww.recowhad_puppi_softdropMass(); }
const float &recowhad_puppi_pt() { return hww.recowhad_puppi_pt(); }
const float &recowhad_puppi_eta() { return hww.recowhad_puppi_eta(); }
const float &recowhad_puppi_phi() { return hww.recowhad_puppi_phi(); }
const float &recowhad_puppi_mass() { return hww.recowhad_puppi_mass(); }
const float &recowhad_puppi_nJettinessTau1() { return hww.recowhad_puppi_nJettinessTau1(); }
const float &recowhad_puppi_nJettinessTau2() { return hww.recowhad_puppi_nJettinessTau2(); }
const float &recowhad_softdropPuppiSubjet1() { return hww.recowhad_softdropPuppiSubjet1(); }
const float &recowhad_softdropPuppiSubjet2() { return hww.recowhad_softdropPuppiSubjet2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recowlep_p4() { return hww.recowlep_p4(); }
const float &recowlep_pt() { return hww.recowlep_pt(); }
const float &recowlep_eta() { return hww.recowlep_eta(); }
const float &recowlep_phi() { return hww.recowlep_phi(); }
const float &recowlep_mass() { return hww.recowlep_mass(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recoleadjet_p4() { return hww.recoleadjet_p4(); }
const float &recoleadjet_pt() { return hww.recoleadjet_pt(); }
const float &recoleadjet_eta() { return hww.recoleadjet_eta(); }
const float &recoleadjet_phi() { return hww.recoleadjet_phi(); }
const float &recolepton_recowhad_dr() { return hww.recolepton_recowhad_dr(); }
const float &recoleadjet_recolepton_dr() { return hww.recoleadjet_recolepton_dr(); }
const float &recoleadjet_met_dphi() { return hww.recoleadjet_met_dphi(); }
const float &recoleadjet_recowhad_dr() { return hww.recoleadjet_recowhad_dr(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recowhad_minus_recolepton_p4() { return hww.recowhad_minus_recolepton_p4(); }
const float &recowhad_minus_recolepton_pt() { return hww.recowhad_minus_recolepton_pt(); }
const float &recowhad_minus_recolepton_eta() { return hww.recowhad_minus_recolepton_eta(); }
const float &recowhad_minus_recolepton_phi() { return hww.recowhad_minus_recolepton_phi(); }
const float &recowhad_minus_recolepton_mass() { return hww.recowhad_minus_recolepton_mass(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &recowhad_minus_recolepton_positive_p4() { return hww.recowhad_minus_recolepton_positive_p4(); }
const float &recowhad_minus_recolepton_positive_pt() { return hww.recowhad_minus_recolepton_positive_pt(); }
const float &recowhad_minus_recolepton_positive_eta() { return hww.recowhad_minus_recolepton_positive_eta(); }
const float &recowhad_minus_recolepton_positive_phi() { return hww.recowhad_minus_recolepton_positive_phi(); }
const float &recowhad_minus_recolepton_positive_mass() { return hww.recowhad_minus_recolepton_positive_mass(); }
const int &higgsdecay() { return hww.higgsdecay(); }
const int &wstar_channel_id() { return hww.wstar_channel_id(); }
const int &nlep() { return hww.nlep(); }
const int &nquark() { return hww.nquark(); }
const int &wa_id() { return hww.wa_id(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &isr_p4() { return hww.isr_p4(); }
const float &isr_pt() { return hww.isr_pt(); }
const float &isr_eta() { return hww.isr_eta(); }
const float &isr_phi() { return hww.isr_phi(); }
const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > &higgs_p4() { return hww.higgs_p4(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &decay_p4() { return hww.decay_p4(); }
const vector<int> &decay_id() { return hww.decay_id(); }
const vector<int> &decay_isstar() { return hww.decay_isstar(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lepton_p4() { return hww.lepton_p4(); }
const vector<int> &lepton_id() { return hww.lepton_id(); }
const vector<int> &lepton_isstar() { return hww.lepton_isstar(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &neutrino_p4() { return hww.neutrino_p4(); }
const vector<int> &neutrino_id() { return hww.neutrino_id(); }
const vector<int> &neutrino_isstar() { return hww.neutrino_isstar(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &quark_p4() { return hww.quark_p4(); }
const vector<int> &quark_id() { return hww.quark_id(); }
const vector<int> &quark_isstar() { return hww.quark_isstar(); }
const float &lqq_max_dr() { return hww.lqq_max_dr(); }
const float &lq0_dr() { return hww.lq0_dr(); }
const float &lq1_dr() { return hww.lq1_dr(); }
const float &qq_dr() { return hww.qq_dr(); }
const float &decay_dr() { return hww.decay_dr(); }
const float &l_qq_dr() { return hww.l_qq_dr(); }
const float &lqq_mass() { return hww.lqq_mass(); }
const float &lvqq_mt() { return hww.lvqq_mt(); }
const float &inneriso() { return hww.inneriso(); }
const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pf_p4s() { return hww.pf_p4s(); }
const vector<float> &pf_drs() { return hww.pf_drs(); }
const float &sumpt_oppo_r15() { return hww.sumpt_oppo_r15(); }
const int &njet5_oppo_r15() { return hww.njet5_oppo_r15(); }
const int &njet10_oppo_r15() { return hww.njet10_oppo_r15(); }
const int &njet20_oppo_r15() { return hww.njet20_oppo_r15(); }
const int &njet30_oppo_r15() { return hww.njet30_oppo_r15(); }
const int &njet50_oppo_r15() { return hww.njet50_oppo_r15(); }
const float &sumpt_oppo() { return hww.sumpt_oppo(); }
const int &njet5_oppo() { return hww.njet5_oppo(); }
const int &njet10_oppo() { return hww.njet10_oppo(); }
const int &njet20_oppo() { return hww.njet20_oppo(); }
const int &njet30_oppo() { return hww.njet30_oppo(); }
const int &njet50_oppo() { return hww.njet50_oppo(); }
const float &sumpt_in_fatjet() { return hww.sumpt_in_fatjet(); }
const int &njet5_in_fatjet() { return hww.njet5_in_fatjet(); }
const float &lepton_eta() { return hww.lepton_eta(); }
const float &lepton_phi() { return hww.lepton_phi(); }
const float &lepton_pt() { return hww.lepton_pt(); }
const float &lepton_relIso03EA() { return hww.lepton_relIso03EA(); }
const float &lepton_relIso04DB() { return hww.lepton_relIso04DB(); }
const float &lepton_miniIsoEA() { return hww.lepton_miniIsoEA(); }
const float &lepton_chiso() { return hww.lepton_chiso(); }
const float &lepton_nhiso() { return hww.lepton_nhiso(); }
const float &lepton_emiso() { return hww.lepton_emiso(); }
const float &lepton_ncorriso() { return hww.lepton_ncorriso(); }
const int &lepton_nChargedPf() { return hww.lepton_nChargedPf(); }
const int &lepton_nPhotonPf() { return hww.lepton_nPhotonPf(); }
const int &lepton_nNeutralHadPf() { return hww.lepton_nNeutralHadPf(); }
const int &lepton_isFromW() { return hww.lepton_isFromW(); }
const int &lepton_flavor() { return hww.lepton_flavor(); }
const int &nvtx() { return hww.nvtx(); }
const vector<float> &pf_annuli_energy() { return hww.pf_annuli_energy(); }
const vector<float> &pf_pt() { return hww.pf_pt(); }
const vector<int> &pf_id() { return hww.pf_id(); }
const vector<float> &pf_reta() { return hww.pf_reta(); }
const vector<float> &pf_rphi() { return hww.pf_rphi(); }
const int &HLT_Ele27_WPLoose_Gsf() { return hww.HLT_Ele27_WPLoose_Gsf(); }
const int &HLT_Ele30_WPLoose_Gsf() { return hww.HLT_Ele30_WPLoose_Gsf(); }
const int &HLT_Ele45_WPLoose_Gsf() { return hww.HLT_Ele45_WPLoose_Gsf(); }
const int &HLT_Ele105_CaloIdVT_GsfTrkIdT() { return hww.HLT_Ele105_CaloIdVT_GsfTrkIdT(); }
const int &HLT_Ele115_CaloIdVT_GsfTrkIdT() { return hww.HLT_Ele115_CaloIdVT_GsfTrkIdT(); }
const int &HLT_IsoTkMu24() { return hww.HLT_IsoTkMu24(); }
const int &HLT_IsoMu24() { return hww.HLT_IsoMu24(); }
const int &HLT_SingleMu50() { return hww.HLT_SingleMu50(); }
const int &HLT_SingleEl40() { return hww.HLT_SingleEl40(); }
const int &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165() { return hww.HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165(); }
const int &HLT_Mu50() { return hww.HLT_Mu50(); }
const int &HLT_TkMu50() { return hww.HLT_TkMu50(); }
const int &HLT_AK8PFHT700_TrimR0p1PT0p03Mass50() { return hww.HLT_AK8PFHT700_TrimR0p1PT0p03Mass50(); }
const int &HLT_AK8PFJet360_TrimMass30() { return hww.HLT_AK8PFJet360_TrimMass30(); }
const int &HLT_PFHT800() { return hww.HLT_PFHT800(); }
const int &HLT_PFHT900() { return hww.HLT_PFHT900(); }
const int &HLT_PFHT650_WideJetMJJ900DEtaJJ1p5() { return hww.HLT_PFHT650_WideJetMJJ900DEtaJJ1p5(); }
const int &HLT_PFHT650_WideJetMJJ950DEtaJJ1p5() { return hww.HLT_PFHT650_WideJetMJJ950DEtaJJ1p5(); }
const int &HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20() { return hww.HLT_AK8PFDiJet280_200_TrimMass30_CSVM_0p20(); }
const int &pass_duplicate_se_sm() { return hww.pass_duplicate_se_sm(); }
const int &pass_duplicate_sm_se() { return hww.pass_duplicate_sm_se(); }
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
const float &htOR() { return hww.htOR(); }
const float &htOR40() { return hww.htOR40(); }
const float &htOR50() { return hww.htOR50(); }
const float &mhOR() { return hww.mhOR(); }
const float &mhOR40() { return hww.mhOR40(); }
const float &mhOR50() { return hww.mhOR50(); }

}
#include "rooutil/rooutil.cc"
