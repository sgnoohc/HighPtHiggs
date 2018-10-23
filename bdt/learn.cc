#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "TChain.h"
#include "TCut.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#include "TMVA/DataLoader.h"
#include "TMVA/TMVAGui.h"

#include "rooutil/rooutil.cc"

using namespace std;

int main(int argc, char** argv)
{
    // Output file
    TFile* outputFile = TFile::Open("BDT.root", "RECREATE");

    // Initialize TMVA
    TMVA::Tools::Instance();
    TMVA::Factory *factory = new TMVA::Factory("TMVA", outputFile, "V:DrawProgressBar=True:Transformations=I;D;P;G:AnalysisType=Classification");

    // sample parent directory
    TString dirpath = "/nfs-7/userdata/phchang/babies/HWW2016_skimmed_v15_v1.15.1/link/";

    // Get signal sample TChain
    TString ggFSampleGlobber = dirpath + "/GluGluHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628_output_*";
    TChain* ggFChain = RooUtil::FileUtil::createTChain("t", ggFSampleGlobber);

    // Get signal sample TChain
    TString VBFSampleGlobber = dirpath + "/VBFHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628_output_*";
    TChain* VBFChain = RooUtil::FileUtil::createTChain("t", VBFSampleGlobber);

    // Get TTbar background sample TChain
    TString TTSampleGlobber = dirpath + "/TT_TuneCUETP8M2T4_13TeV-powheg_output_*";
    TChain* TTChain = RooUtil::FileUtil::createTChain("t", TTSampleGlobber);

    // Get WJets background sample TChain
    TString WJetsSampleGlobber = dirpath + "/WJetsToLNu_*";
    TChain* WJetsChain = RooUtil::FileUtil::createTChain("t", WJetsSampleGlobber);

    // Data Loader
    TMVA::DataLoader* dataloader = new TMVA::DataLoader("dataset");
    dataloader->AddSignalTree(ggFChain, 1.0);
    dataloader->AddSignalTree(VBFChain, 1.0);
    dataloader->AddBackgroundTree(TTChain, 1.0);
    dataloader->AddBackgroundTree(WJetsChain, 1.0);
    dataloader->SetSignalWeightExpression("wgt");
    dataloader->SetBackgroundWeightExpression("wgt");

    // Add Variables
    dataloader->AddVariable("lep_customrelIso005EA");
    dataloader->AddVariable("lep_customrelIso010EA");
    dataloader->AddVariable("lep_customrelIso015EA");
    dataloader->AddVariable("lep_customrelIso020EA");
    dataloader->AddVariable("lep_customrelIso025EA");
    dataloader->AddVariable("lep_customrelIso030EA");
    dataloader->AddVariable("lep_customrelIso035EA");
    dataloader->AddVariable("lep_customrelIso040EA");
    dataloader->AddVariable("lep_customrelIso045EA");
    dataloader->AddVariable("lep_customrelIso050EA");
    dataloader->AddVariable("lep_customrelIso055EA");
    dataloader->AddVariable("lep_customrelIso060EA");
    dataloader->AddVariable("lep_customrelIso065EA");
    dataloader->AddVariable("lep_customrelIso070EA");
    dataloader->AddVariable("lep_customrelIso075EA");
    dataloader->AddVariable("lep_customrelIso080EA");
//    dataloader->AddVariable("nb", 'I');
//    dataloader->AddVariable("nbmed", 'I');
//    dataloader->AddVariable("nbtight", 'I');
    dataloader->AddVariable("recowhad_plep_puppi_mass");
    dataloader->AddVariable("recowhad_plep_mass");
    dataloader->AddVariable("recowhad_mlep_puppi_mass");
    dataloader->AddVariable("recowhad_mlep_mass");
    dataloader->AddVariable("recowhad_puppi_mass");
    dataloader->AddVariable("recowhad_mass");
    dataloader->AddVariable("recowhad_pt");
    dataloader->AddVariable("recohiggs_mass");
    dataloader->AddVariable("recohiggs2_mass");
    dataloader->AddVariable("lep_miniIsoEA");
    dataloader->AddVariable("lep_relIso04DB");
    dataloader->AddVariable("lep_relIso03EA");
    dataloader->AddVariable("recolepton_pt");
    dataloader->AddVariable("met_pt");
    dataloader->AddVariable("pf_annuli_energy_0");
    dataloader->AddVariable("pf_annuli_energy_1");
    dataloader->AddVariable("pf_annuli_energy_2");
    dataloader->AddVariable("pf_annuli_energy_3");
    dataloader->AddVariable("pf_annuli_energy_4");
    dataloader->AddVariable("pf_annuli_energy_5");
    dataloader->AddVariable("pf_annuli_energy_6");
    dataloader->AddVariable("pf_annuli_energy_7");
    dataloader->AddVariable("recolepton_recowhad_dr");
    dataloader->AddVariable("recowhad_puppi_nJettinessTau1");
    dataloader->AddVariable("recowhad_puppi_nJettinessTau2");
    dataloader->AddVariable("recowhad_nJettinessTau1");
    dataloader->AddVariable("recowhad_nJettinessTau2");
    dataloader->AddVariable("nj", 'I');
    dataloader->AddVariable("nj50", 'I');

    // Prepare events
    TCut cut = "(CutGenHT>0)*(CutNLep>0)*(CutNAK8>0)*(CutISRMegaJet>0)*(CutISRBalance>0)*(CutMuMinus>0)*(CutRecoClassB>0)*(nbmed==0)";
    //TCut cut = "1";
    //dataloader->PrepareTrainingAndTestTree(cut, cut, "nTest_Signal=100000:nTest_Background=100000:nTrain_Signal=100000:nTrain_Background=100000:SplitMode=random:!V");
    dataloader->PrepareTrainingAndTestTree(cut, cut, "SplitMode=random:!V");

    //TString option = "!H:V:NTrees=2000:BoostType=Grad:Shrinkage=1:!UseBaggedGrad:nCuts=20:MinNodeSize=3.%:MaxDepth=3:CreateMVAPdfs:SeparationType=SDivSqrtSPlusB:DoBoostMonitor";
    TString option = "!H:V:NTrees=2000:BoostType=Grad:Shrinkage=1:!UseBaggedGrad:nCuts=20:MinNodeSize=3.%:MaxDepth=3:CreateMVAPdfs:DoBoostMonitor";
    factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT", option);
    factory->TrainAllMethods();
    factory->TestAllMethods();
    factory->EvaluateAllMethods();

    return 0;
}

//    // Get WJets background sample TChains
//    std::vector<TString> WJetsSampleGlobbers = {
//        dirpath + "/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        dirpath + "/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        dirpath + "/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        dirpath + "/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        dirpath + "/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        dirpath + "/WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1_MINIAODSIM_HWW2016_skimmed_v2_v1.15.1/*.root",
//        };
//    std::vector<TChain*> WJetsChains;
//    for (auto& sampleglobber : WJetsSampleGlobbers)
//        WJetsChains.push_back(RooUtil::FileUtil::createTChain("t", sampleglobber));

//    for (auto& WJetsChain : WJetsChains) dataloader->AddBackgroundTree(WJetsChain, 1.0);
