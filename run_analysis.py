#!/bin/env python

import os
import sys
from QFramework import TQSampleFolder, TQCut, TQWWWVariables
from rooutil import qutils

#_____________________________________________________________________________________________________
def main(argv):

    def help():
    
        print "Usage:"
        print ""
        print "    python {} INDEX".format(argv[0])
        print ""
        print "  INDEX =-1 : Skip looping and directly remake plots and tables"
        print "  INDEX = 0 : Nominal"
        print "  INDEX = 1 : JEC_Up variation"
        print "  INDEX = 2 : JEC_Down variation"
        print ""
        print ""
        sys.exit()

    options = {

        # The main root TQSampleFolder name
        "master_sample_name" : "samples",

        # Where the ntuples are located
        #"ntuple_path" : "/nfs-7/userdata/phchang/WWW_babies/HWW_v3.0.1/skim/",
        #"ntuple_path" : "/hadoop/cms/store/user/phchang/WWW_babies/HWW_v3.0.1/skim/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.1.0/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.1.1/skim/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.1.3.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.2.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.3.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.5.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.9.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.10.1/link/",
        #"ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.11.1/link/",
        "ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.12.1/link/",

        # Path to the config file that defines how the samples should be organized
        "sample_config_path" : "samples.cfg",

        # The samples with "priority" (defined in sample_config_pat) values satisfying the following condition is looped over
        "priority_value" : "<2",

        # The samples with "priority" (defined in sample_config_pat) values satisfying the following condition is NOT looped over
        "exclude_priority_value" : "<1",

        # N-cores
        "ncore" : 16,

        # TQCuts config file
        "cuts" : "cuts.cfg",

        # Histogram config file
        "histo" : "histo.cfg",

        # Eventlist histogram
        "eventlist" : "",

        # Custom observables (dictionary)
        "customobservables" : {},

        # Custom observables (dictionary)
        "output_dir" : "outputs/",

        # Run on certain path only
        #"path" : "/data/ee",

    }

    # First generate cuts.cfg file
    generate_cuts()

    # Run the code
    qutils.loop(options)

#    # Retreive the result
#    samples = TQSampleFolder.loadSampleFolder("{}/output.root:samples".format(options["output_dir"]))
#
#    # Create plots and tables
#    bkg_path = [
#            ("W' [6 TeV]" , "/wprime/6000"  ) ,
#            ]
#    sig_path_plots = [
#            #("VH"         , "/vh"           ) ,
#            ]
#
#    sig_path_table = [
#            ]
#
#    histnames = [
#            ]
#    qutils.autoplot(samples, histnames, bkg_path=bkg_path, sig_path=sig_path_plots, clrs=[2002], options={"blind":["SR"]})
#    qutils.autoplot2d(samples, histnames, bkg_path=bkg_path, sig_path=sig_path_plots, clrs=[2002], options={})
#
#    # Make cutflow table
#    cutnames = [
#            "Root",
#            ]
#    qutils.autotable(samples, cutnames, bkg_path=bkg_path, sig_path=sig_path_table, options={"cuts": "cuts.cfg"})
#
#    # Make summary cutflow table
#    summary_cuts = [
#            "Root",
#            ]
#    qutils.table(samples, "Root", bkg_path=bkg_path, sig_path=sig_path_table, options={"cuts": "cuts.cfg", "cuts_list": summary_cuts, "output_name": "summary"})

#_____________________________________________________________________________________________________
def generate_cuts(lepsfvar_suffix="",trigsfvar_suffix="",jecvar_suffix="",btagsfvar_suffix="",genmet_prefix="",genmet_suffix=""): #define _up _dn etc.

    #
    #
    # Define cuts
    #
    #

    #____________________________________________________________________________________________________________________________________________________________________________
    # This object holds all of the TQCut instances in a dictionary.
    # The TQCut object will have a name, title, cut definition, and weight definition.
    # The TQCut object has a tree-like structure. (i.e. TQCut class cand add children and parents.)
    # The "children" cuts can be added via TQCut::addCut(TQCut* cut) function.
    tqcuts = {}

    # Mother of all cuts
    tqcuts["Root"] = TQCut("Root", "Root", "1", "{'$(path)'=='/sig/ggH/Hbb'?1./313368.*1000*48.58*0.57*24.705335122:evt_scale1fb*150}")
    #tqcuts["WgtW"] = TQCut("WgtW", "WgtW", "1", "{'$(path)'=='/bkg/W'?29375285/8396281:1}")
    #tqcuts["WgtT"] = TQCut("WgtT", "WgtT", "1", "{'$(path)'=='/bkg/top'?75242060/309987:1}")
    tqcuts["WgtW"] = TQCut("WgtW", "WgtW", "1", "{'$(path)'=='/bkg/W/incl'?gen_ht<400.:1}")
    tqcuts["WgtT"] = TQCut("WgtT", "WgtT", "1", "{'$(path)'=='/bkg/top'?1:1}")
    tqcuts["CutHWW"] = TQCut("CutHWW", "CutHWW", "higgsdecay==24", "1")
    tqcuts["CutHbb"] = TQCut("CutHbb", "CutHbb", "higgsdecay== 5", "1")
    tqcuts["CutLeadOnShell"] = TQCut("CutLeadOnShell", "CutLeadOnShell", "boosted500_decay_isstar[0]==0", "1")
    tqcuts["CutLeadOffShell"] = TQCut("CutLeadOffShell", "CutLeadOffShell", "boosted500_decay_isstar[0]==1", "1")
    tqcuts["CutHWWNLep1"] = TQCut("CutHWWNLep1", "CutHWWNLep1", "nlep==1", "1")
    tqcuts["CutLeadLeptonic"] = TQCut("CutLeadLeptonic", "CutLeadLeptonic", "boosted500_decay_isstar[0]==boosted500_lepton_isstar[0]", "1")
    tqcuts["CutLeadHadronic"] = TQCut("CutLeadHadronic", "CutLeadHadronic", "boosted500_decay_isstar[1]==boosted500_lepton_isstar[0]", "1")
    tqcuts["CutLeadLeptonicLepQuarkOS"] = TQCut("CutLeadLeptonicLepQuarkOS", "CutLeadLeptonicLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadLeptonicLepQuarkSS"] = TQCut("CutLeadLeptonicLepQuarkSS", "CutLeadLeptonicLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutLeadHadronicLepQuarkOS"] = TQCut("CutLeadHadronicLepQuarkOS", "CutLeadHadronicLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadHadronicLepQuarkSS"] = TQCut("CutLeadHadronicLepQuarkSS", "CutLeadHadronicLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutLeadLeptonicIsStar"] = TQCut("CutLeadLeptonicIsStar", "CutLeadLeptonicIsStar", "boosted500_decay_isstar[0]==1", "1")
    tqcuts["CutLeadHadronicIsStar"] = TQCut("CutLeadHadronicIsStar", "CutLeadHadronicIsStar", "boosted500_decay_isstar[0]==1", "1")
    tqcuts["CutLeadLeptonicNotStar"] = TQCut("CutLeadLeptonicNotStar", "CutLeadLeptonicNotStar", "boosted500_decay_isstar[0]==0", "1")
    tqcuts["CutLeadHadronicNotStar"] = TQCut("CutLeadHadronicNotStar", "CutLeadHadronicNotStar", "boosted500_decay_isstar[0]==0", "1")
    tqcuts["CutLeadLeptonicIsStarLepQuarkOS"] = TQCut("CutLeadLeptonicIsStarLepQuarkOS", "CutLeadLeptonicIsStarLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadLeptonicIsStarLepQuarkSS"] = TQCut("CutLeadLeptonicIsStarLepQuarkSS", "CutLeadLeptonicIsStarLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutLeadLeptonicNotStarLepQuarkOS"] = TQCut("CutLeadLeptonicNotStarLepQuarkOS", "CutLeadLeptonicNotStarLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadLeptonicNotStarLepQuarkSS"] = TQCut("CutLeadLeptonicNotStarLepQuarkSS", "CutLeadLeptonicNotStarLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutLeadHadronicIsStarLepQuarkOS"] = TQCut("CutLeadHadronicIsStarLepQuarkOS", "CutLeadHadronicIsStarLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadHadronicIsStarLepQuarkSS"] = TQCut("CutLeadHadronicIsStarLepQuarkSS", "CutLeadHadronicIsStarLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutLeadHadronicNotStarLepQuarkOS"] = TQCut("CutLeadHadronicNotStarLepQuarkOS", "CutLeadHadronicNotStarLepQuarkOS", "boosted500_quark_id[0]*boosted500_lepton_id[0]<0", "1")
    tqcuts["CutLeadHadronicNotStarLepQuarkSS"] = TQCut("CutLeadHadronicNotStarLepQuarkSS", "CutLeadHadronicNotStarLepQuarkSS", "boosted500_quark_id[0]*boosted500_lepton_id[0]>0", "1")
    tqcuts["CutHadronicOnShell"] = TQCut("CutHadronicOnShell", "CutHadronicOnShell", "boosted500_quark_isstar[0]==0", "1")
    tqcuts["CutHadronicOffShell"] = TQCut("CutHadronicOffShell", "CutHadronicOffShell", "boosted500_quark_isstar[0]==1", "1")
    tqcuts["CutHWWNLep1Radius1"] = TQCut("CutHWWNLep1Radius1", "CutHWWNLep1Radius1", "boosted500_lqq_max_dr<1", "1")
    tqcuts["CutHbbRadius1"] = TQCut("CutHbbRadius1", "CutHbbRadius1", "boosted500_decay_h_dr[0]+boosted500_decay_h_dr[1]<1", "1")
    tqcuts["CutHiggsPt300"] = TQCut("CutHiggsPt300", "CutHiggsPt300", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>300)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>300)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt350"] = TQCut("CutHiggsPt350", "CutHiggsPt350", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>350)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>350)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt400"] = TQCut("CutHiggsPt400", "CutHiggsPt400", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>400)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>400)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt450"] = TQCut("CutHiggsPt450", "CutHiggsPt450", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>450)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>450)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt500"] = TQCut("CutHiggsPt500", "CutHiggsPt500", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>500)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>500)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt550"] = TQCut("CutHiggsPt550", "CutHiggsPt550", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>550)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>550)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt600"] = TQCut("CutHiggsPt600", "CutHiggsPt600", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>600)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>600)*(abs(lepton_id[0])<15):1}}", "1")
    #tqcuts["CutHiggsPt450"] = TQCut("CutHiggsPt450", "CutHiggsPt450", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>450):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>450):1}}", "1")
    #tqcuts["CutHiggsPt450"] = TQCut("CutHiggsPt450", "CutHiggsPt450", "{'$(path)'=='/sig/ggH/HWWlvjj'?(higgs_p4.pt()>0)*(abs(lepton_id[0])<15):{'$(path)'=='/sig/VBF'?(higgs_p4.pt()>0)*(abs(lepton_id[0])<15):1}}", "1")
    tqcuts["CutHiggsPt450"] = TQCut("CutHiggsPt450", "CutHiggsPt450", "1", "1")
    tqcuts["CutLeadJetPt300"] = TQCut("CutLeadJetPt300", "CutLeadJetPt300", "(jets_pt_0>300)", "1")
    tqcuts["CutLeadJetPt350"] = TQCut("CutLeadJetPt350", "CutLeadJetPt350", "(jets_pt_0>350)", "1")
    tqcuts["CutLeadJetPt400"] = TQCut("CutLeadJetPt400", "CutLeadJetPt400", "(jets_pt_0>400)", "1")
    tqcuts["CutLeadJetPt450"] = TQCut("CutLeadJetPt450", "CutLeadJetPt450", "(jets_pt_0>450)", "1")
    tqcuts["CutLeadJetPt500"] = TQCut("CutLeadJetPt500", "CutLeadJetPt500", "(jets_pt_0>500)", "1")
    tqcuts["CutLeadJetPt550"] = TQCut("CutLeadJetPt550", "CutLeadJetPt550", "(jets_pt_0>550)", "1")
    tqcuts["CutLeadJetPt600"] = TQCut("CutLeadJetPt600", "CutLeadJetPt600", "(jets_pt_0>600)", "1")
    tqcuts["CutJetPt300"] = TQCut("CutJetPt300", "CutJetPt300", "(recoisrmegajet_pt>300)", "1")
    tqcuts["CutJetPt350"] = TQCut("CutJetPt350", "CutJetPt350", "(recoisrmegajet_pt>350)", "1")
    tqcuts["CutJetPt400"] = TQCut("CutJetPt400", "CutJetPt400", "(recoisrmegajet_pt>400)", "1")
    tqcuts["CutJetPt450"] = TQCut("CutJetPt450", "CutJetPt450", "(recoisrmegajet_pt>450)", "1")
    tqcuts["CutJetPt500"] = TQCut("CutJetPt500", "CutJetPt500", "(recoisrmegajet_pt>500)", "1")
    tqcuts["CutJetPt550"] = TQCut("CutJetPt550", "CutJetPt550", "(recoisrmegajet_pt>550)", "1")
    tqcuts["CutJetPt600"] = TQCut("CutJetPt600", "CutJetPt600", "(recoisrmegajet_pt>600)", "1")
    tqcuts["CutMegaJetN2Pt300"] = TQCut("CutMegaJetN2Pt300", "CutMegaJetN2Pt300", "(recoisrmegajet_n2_pt>300)", "1")
    tqcuts["CutMegaJetN2Pt350"] = TQCut("CutMegaJetN2Pt350", "CutMegaJetN2Pt350", "(recoisrmegajet_n2_pt>350)", "1")
    tqcuts["CutMegaJetN2Pt400"] = TQCut("CutMegaJetN2Pt400", "CutMegaJetN2Pt400", "(recoisrmegajet_n2_pt>400)", "1")
    tqcuts["CutMegaJetN2Pt450"] = TQCut("CutMegaJetN2Pt450", "CutMegaJetN2Pt450", "(recoisrmegajet_n2_pt>450)", "1")
    tqcuts["CutMegaJetN2Pt500"] = TQCut("CutMegaJetN2Pt500", "CutMegaJetN2Pt500", "(recoisrmegajet_n2_pt>500)", "1")
    tqcuts["CutMegaJetN2Pt550"] = TQCut("CutMegaJetN2Pt550", "CutMegaJetN2Pt550", "(recoisrmegajet_n2_pt>550)", "1")
    tqcuts["CutMegaJetN2Pt600"] = TQCut("CutMegaJetN2Pt600", "CutMegaJetN2Pt600", "(recoisrmegajet_n2_pt>600)", "1")

    tqcuts["CutHiggsPt300ClassA"] = TQCut("CutHiggsPt300ClassA", "CutHiggsPt300ClassA", "wstar_channel_id<2", "1")
    tqcuts["CutHiggsPt300ClassB"] = TQCut("CutHiggsPt300ClassB", "CutHiggsPt300ClassB", "wstar_channel_id>=2", "1")
    tqcuts["CutHiggsPt450ClassA"] = TQCut("CutHiggsPt450ClassA", "CutHiggsPt450ClassA", "wstar_channel_id<2", "1")
    tqcuts["CutHiggsPt450ClassB"] = TQCut("CutHiggsPt450ClassB", "CutHiggsPt450ClassB", "wstar_channel_id>=2", "1")

    tqcuts["CutHiggsPt450noAK8"] = TQCut("CutHiggsPt450noAK8", "CutHiggsPt450noAK8", "recowhad_pt<0", "1")
    tqcuts["CutHiggsPt450ClassALowLepMET"] = TQCut("CutHiggsPt450ClassALowLepMET", "CutHiggsPt450ClassALowLepMET", "recolepton_pt+met_pt<250.", "1")

    #tqcuts["Root"].addCut(tqcuts["CutHWW"])
    #tqcuts["Root"].addCut(tqcuts["CutHbb"])
    #tqcuts["CutHWW"].addCut(tqcuts["CutLeadOnShell"])
    #tqcuts["CutHWW"].addCut(tqcuts["CutLeadOffShell"])
    #tqcuts["CutHWW"].addCut(tqcuts["CutHWWNLep1"])
    #tqcuts["CutHWWNLep1"].addCut(tqcuts["CutLeadLeptonic"])
    #tqcuts["CutHWWNLep1"].addCut(tqcuts["CutLeadHadronic"])
    #tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicLepQuarkOS"])
    #tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicLepQuarkSS"])
    #tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicLepQuarkOS"])
    #tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicLepQuarkSS"])
    #tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicIsStar"])
    #tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicNotStar"])
    #tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicIsStar"])
    #tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicNotStar"])
    #tqcuts["CutLeadHadronicIsStar"].addCut(tqcuts["CutLeadHadronicIsStarLepQuarkOS"])
    #tqcuts["CutLeadHadronicIsStar"].addCut(tqcuts["CutLeadHadronicIsStarLepQuarkSS"])
    #tqcuts["CutLeadHadronicNotStar"].addCut(tqcuts["CutLeadHadronicNotStarLepQuarkOS"])
    #tqcuts["CutLeadHadronicNotStar"].addCut(tqcuts["CutLeadHadronicNotStarLepQuarkSS"])
    #tqcuts["CutLeadLeptonicIsStar"].addCut(tqcuts["CutLeadLeptonicIsStarLepQuarkOS"])
    #tqcuts["CutLeadLeptonicIsStar"].addCut(tqcuts["CutLeadLeptonicIsStarLepQuarkSS"])
    #tqcuts["CutLeadLeptonicNotStar"].addCut(tqcuts["CutLeadLeptonicNotStarLepQuarkOS"])
    #tqcuts["CutLeadLeptonicNotStar"].addCut(tqcuts["CutLeadLeptonicNotStarLepQuarkSS"])
    #tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHadronicOffShell"])
    #tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHadronicOnShell"])
    #tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHWWNLep1Radius1"])
    #tqcuts["CutHbb"].addCut(tqcuts["CutHbbRadius1"])

    #tqcuts["Root"].addCut(tqcuts["CutJetPt300"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt350"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt400"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt450"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt500"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt550"])
    #tqcuts["Root"].addCut(tqcuts["CutJetPt600"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt300"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt350"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt400"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt450"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt500"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt550"])
    #tqcuts["Root"].addCut(tqcuts["CutMegaJetN2Pt600"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt300"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt350"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt400"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt450"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt500"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt550"])
    #tqcuts["Root"].addCut(tqcuts["CutLeadJetPt600"])

    #tqcuts["CutHiggsPt300"].addCut(tqcuts["CutHiggsPt300ClassA"])
    #tqcuts["CutHiggsPt300"].addCut(tqcuts["CutHiggsPt300ClassB"])
    #tqcuts["CutHiggsPt450"].addCut(tqcuts["CutHiggsPt450ClassA"])
    #tqcuts["CutHiggsPt450"].addCut(tqcuts["CutHiggsPt450ClassB"])

    #tqcuts["CutHiggsPt450"].addCut(tqcuts["CutHiggsPt450noAK8"])
    #tqcuts["CutHiggsPt450ClassA"].addCut(tqcuts["CutHiggsPt450ClassALowLepMET"])

    #tqcuts["CutRecoFatJetPt300"] = TQCut("CutRecoFatJetPt300", "CutRecoFatJetPt300", "recowhad_pt+met_pt>300.", "1")
    #tqcuts["CutRecoFatJetPt400"] = TQCut("CutRecoFatJetPt400", "CutRecoFatJetPt400", "recowhad_pt+met_pt>400.", "1")
    #tqcuts["CutRecoFatJetPt450"] = TQCut("CutRecoFatJetPt450", "CutRecoFatJetPt450", "recowhad_pt+met_pt>450.", "1")
    #tqcuts["Root"].addCut(tqcuts["CutRecoFatJetPt300"])
    #tqcuts["Root"].addCut(tqcuts["CutRecoFatJetPt400"])
    #tqcuts["Root"].addCut(tqcuts["CutRecoFatJetPt450"])

    #tqcuts["CutJetPt300MET50"] = TQCut("CutJetPt300LepPt50", "CutJetPt300LepPt50", "met_pt>50.", "1")
    #tqcuts["CutJetPt300Ak8Pt400"] = TQCut("CutJetPt300Ak8Pt400", "CutJetPt300Ak8Pt400", "recowhad_pt>400.", "1")

    #tqcuts["Root"]              .addCut(tqcuts["CutJetPt300"])
    #tqcuts["CutJetPt300"]       .addCut(tqcuts["CutJetPt300LepPt50"])
    #tqcuts["CutJetPt300LepPt50"].addCut(tqcuts["CutJetPt300Ak8Pt400"])

    tqcuts["CutNAK8"] = TQCut("CutNAK8", "CutNAK8", "nak8jets>0", "1")
    tqcuts["CutN2AK8"] = TQCut("CutN2AK8", "CutN2AK8", "nak8jets>1", "1")
    tqcuts["CutN3AK8"] = TQCut("CutN3AK8", "CutN3AK8", "nak8jets>2", "1")

    tqcuts["CutN2AK8ISRPt400"] = TQCut("CutN2AK8ISRPt400", "CutN2AK8ISRPt400", "recoisrmegajet_pt>400.", "1")
    tqcuts["CutN2AK8NLep1"] = TQCut("CutN2AK8NLep1", "CutN2AK8NLep1", "nrecolep>=1", "1")
    #tqcuts["CutN2AK8RelIso01"] = TQCut("CutN2AK8RelIso01", "CutN2AK8RelIso01", "lep_relIso03EA[0]>0.1", "1")
    #tqcuts["CutN2AK8LepPt50"] = TQCut("CutN2AK8LepPt50", "CutN2AK8LepPt50", "lep_pt[0]>50", "1")
    #tqcuts["CutN2AK8NLep0"] = TQCut("CutN2AK8NLep0", "CutN2AK8NLep0", "nrecolep>0", "1")
    #tqcuts["CutN2AK8DR25"] = TQCut("CutN2AK8DR25", "CutN2AK8DR25", "recolepton_recowhad_dr<0.25", "1")
    #tqcuts["CutN2AK8Mini"] = TQCut("CutN2AK8Mini", "CutN2AK8Mini", "lep_miniIsoEA<0.005", "1")
    #tqcuts["CutN2AK8Nb0"] = TQCut("CutN2AK8Nb0", "CutN2AK8Nb0", "nb==0", "1")

    tqcuts["CutISRPt450"] = TQCut("CutISRPt450", "CutISRPt450", "recoisrmegajet_pt>450.", "1")

    tqcuts["CutISRPt450DR"] = TQCut("CutISRPt450DR", "CutISRPt450DR", "recolepton_recowhad_dr<0.5&&recolepton_recowhad_dr>0.01", "1")
    tqcuts["CutISRPt450SD"] = TQCut("CutISRPt450SD", "CutISRPt450SD", "recowhad_softdropMass>20.", "1")

    ##
    ##
    ##

    tqcuts["CutNLep"] = TQCut("CutNLep", "CutNLep", "nrecolep>=1", "1")
    tqcuts["CutNAK8"] = TQCut("CutNAK8", "CutNAK8", "nak8jets>=1", "1")
    tqcuts["CutISRMegaJet"] = TQCut("CutISRMegaJet", "CutISRMegaJet", "recoisrmegajet_pt>400", "1")
    #tqcuts["CutISRMegaJet"] = TQCut("CutISRMegaJet", "CutISRMegaJet", "recoisrmegajet_pt>450", "1")
    tqcuts["CutISRBalance"] = TQCut("CutISRBalance", "CutISRBalance", "TMath::Abs(recoisrmegajet_pt / (recowhad_puppi_pt + met_pt) - 1) < 0.3", "1")
    tqcuts["CutISRBalanceClassA"] = TQCut("CutISRBalanceClassA", "CutISRBalanceClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutISRBalanceClassB"] = TQCut("CutISRBalanceClassB", "CutISRBalanceClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")

    tqcuts["CutEl"] = TQCut("CutEl", "CutEl", "abs(lep_id[0])==11", "1")
    tqcuts["CutMu"] = TQCut("CutMu", "CutMu", "abs(lep_id[0])==13", "1")
    tqcuts["CutMuMinus"] = TQCut("CutMuMinus", "CutMuMinus", "lep_id[0]==13", "1")
    tqcuts["CutMuPlus"] = TQCut("CutMuPlus", "CutMuPlus", "lep_id[0]==-13", "1")
    tqcuts["CutMuClassA"] = TQCut("CutMuClassA", "CutMuClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutMuClassB"] = TQCut("CutMuClassB", "CutMuClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")
    #tqcuts["CutMuRecoClassA"] = TQCut("CutMuRecoClassA", "CutMuRecoClassA", "(((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) > 0.75)*(recolepton_id==13)", "1")
    #tqcuts["CutMuRecoClassA"] = TQCut("CutMuRecoClassA", "CutMuRecoClassA", "(((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) > 0.75)", "1")
    #tqcuts["CutMuRecoClassB"] = TQCut("CutMuRecoClassB", "CutMuRecoClassB", "(((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) < 0.75)*((HLT_TkMu50)+(HLT_Mu50>0)+(HLT_AK8PFJet360_TrimMass30>0)+(HLT_AK8PFHT700_TrimR0p1PT0p03Mass50>0)+(HLT_PFHT900>0)+(HLT_PFHT650_WideJetMJJ900DEtaJJ1p5>0))", "1")

    #tqcuts["CutMuRecoClassA"] = TQCut("CutMuRecoClassA", "CutMuRecoClassA", "(TMath::Sqrt(TMath::Power(recolepton_pt+met_pt*TMath::Cos(recolepton_met_dphi),2) + TMath::Power(met_pt*TMath::Sin(recolepton_met_dphi), 2)) / recoisrmegajet_pt > 0.475)*(recolepton_id==13)", "1")
    tqcuts["CutMuRecoClassA"] = TQCut("CutMuRecoClassA", "CutMuRecoClassA", "(TMath::Sqrt(TMath::Power(recolepton_pt+met_pt*TMath::Cos(recolepton_met_dphi),2) + TMath::Power(met_pt*TMath::Sin(recolepton_met_dphi), 2)) / recoisrmegajet_pt > 0.475)*(recolepton_id==-13)", "1")
    #tqcuts["CutMuRecoClassA"] = TQCut("CutMuRecoClassA", "CutMuRecoClassA", "(TMath::Sqrt(TMath::Power(recolepton_pt+met_pt*TMath::Cos(recolepton_met_dphi),2) + TMath::Power(met_pt*TMath::Sin(recolepton_met_dphi), 2)) / recoisrmegajet_pt > 0.475)", "1")
    #tqcuts["CutMuRecoClassB"] = TQCut("CutMuRecoClassB", "CutMuRecoClassB", "(TMath::Sqrt(TMath::Power(recolepton_pt+met_pt*TMath::Cos(recolepton_met_dphi),2) + TMath::Power(met_pt*TMath::Sin(recolepton_met_dphi), 2)) / recoisrmegajet_pt < 0.475)*((HLT_TkMu50)+(HLT_Mu50>0)+(HLT_AK8PFJet360_TrimMass30>0)+(HLT_AK8PFHT700_TrimR0p1PT0p03Mass50>0)+(HLT_PFHT900>0)+(HLT_PFHT650_WideJetMJJ900DEtaJJ1p5>0))*(recolepton_id==13)", "1")
    tqcuts["CutMuRecoClassB"] = TQCut("CutMuRecoClassB", "CutMuRecoClassB", "(TMath::Sqrt(TMath::Power(recolepton_pt+met_pt*TMath::Cos(recolepton_met_dphi),2) + TMath::Power(met_pt*TMath::Sin(recolepton_met_dphi), 2)) / recoisrmegajet_pt < 0.475)*((HLT_TkMu50)+(HLT_Mu50>0)+(HLT_AK8PFJet360_TrimMass30>0)+(HLT_AK8PFHT700_TrimR0p1PT0p03Mass50>0)+(HLT_PFHT900>0)+(HLT_PFHT650_WideJetMJJ900DEtaJJ1p5>0))*(recolepton_id==-13)", "1")

    # First try straw man (v1.7.1 was used)
    tqcuts["CutMuRecoClassAStrawMan"] = TQCut("CutMuRecoClassAStrawMan", "CutMuRecoClassAStrawMan", "(recowhad_puppi_softdropMass>10.)*(nbtight==0)*(recohiggsmin_mass<230.)*(lep_relIso04DB[0]>0.066)*(nb40med==0)*(recohiggsmin_mass<195)*(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.2778)*(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1<0.6111)*(recowhad_puppi_mass>63)*(nbOR30<=1)", "1")
    tqcuts["CutMuRecoClassBStrawMan"] = TQCut("CutMuRecoClassBStrawMan", "CutMuRecoClassBStrawMan", "(nb50<=1)*(recolepton_recowhad_dr<1.2)*(nb40med==0)*(recohiggsmin_mass<260.)*(lep_relIso04DB[0]>0.175)*(lep_miniIsoEA[0]<0.7)*(recowhad_puppi_softdropMass>75.)*(recowhad_puppi_mass<150.)", "1")

    # Second try straw man (v1.9.1 was used)
    #tqcuts["CutMuRecoClassAStrawMan"] = TQCut("CutMuRecoClassAStrawMan", "CutMuRecoClassAStrawMan", "(recowhad_puppi_nJettinessTau1>0.0778)*(nb40med==0)*(recohiggsmin_mass<205.)", "1")
    tqcuts["CutMuRecoClassAStrawMan"] = TQCut("CutMuRecoClassAStrawMan", "CutMuRecoClassAStrawMan", "(recowhad_puppi_nJettinessTau1>0.0778)*(nb40med==0)*(recohiggs_mass<240.)", "1")
    tqcuts["CutMuRecoClassBStrawMan"] = TQCut("CutMuRecoClassBStrawMan", "CutMuRecoClassBStrawMan", "1", "1")
    tqcuts["CutMuRecoClassAStrawManCut1"] = TQCut("CutMuRecoClassAStrawManCut1", "CutMuRecoClassAStrawManCut1", "(recowhad_puppi_nJettinessTau1>0.0778)", "1")
    tqcuts["CutMuRecoClassAStrawManCut2"] = TQCut("CutMuRecoClassAStrawManCut2", "CutMuRecoClassAStrawManCut2", "(nb40med==0)", "1")
    tqcuts["CutMuRecoClassAStrawManCut3"] = TQCut("CutMuRecoClassAStrawManCut3", "CutMuRecoClassAStrawManCut3", "(recohiggs_mass<240.)", "1")
    tqcuts["CutMuRecoClassAStrawManCut4"] = TQCut("CutMuRecoClassAStrawManCut4", "CutMuRecoClassAStrawManCut4", "(lep_relIso04DB>0.0667)", "1")
    tqcuts["CutMuRecoClassAStrawManCut5"] = TQCut("CutMuRecoClassAStrawManCut5", "CutMuRecoClassAStrawManCut5", "(recolepton_mt<73)", "1")
    tqcuts["CutMuRecoClassAStrawManCut6"] = TQCut("CutMuRecoClassAStrawManCut6", "CutMuRecoClassAStrawManCut6", "(recowhad_puppi_softdropMass>37)", "1")
    tqcuts["CutMuRecoClassAStrawManCut7"] = TQCut("CutMuRecoClassAStrawManCut7", "CutMuRecoClassAStrawManCut7", "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.3)", "1")
    tqcuts["CutMuRecoClassAStrawManCut8"] = TQCut("CutMuRecoClassAStrawManCut8", "CutMuRecoClassAStrawManCut8", "(lep_relIso04DB<2)", "1")
    tqcuts["CutMuRecoClassAStrawManCut9"] = TQCut("CutMuRecoClassAStrawManCut9", "CutMuRecoClassAStrawManCut9", "(recolepton_recowhad_dr<0.15)", "1")
    tqcuts["CutMuRecoClassAStrawManCut10"] = TQCut("CutMuRecoClassAStrawManCut10", "CutMuRecoClassAStrawManCut10", "((recolepton_pt + met_pt) / recowhad_pt) < 0.7", "1")
    tqcuts["CutMuRecoClassAStrawManCut11"] = TQCut("CutMuRecoClassAStrawManCut11", "CutMuRecoClassAStrawManCut11", "lep_miniIsoEA<0.025", "1")
    tqcuts["CutMuRecoClassAStrawManCut12"] = TQCut("CutMuRecoClassAStrawManCut12", "CutMuRecoClassAStrawManCut12", "nj50==3", "1")

##            "(nb40med==0)" ,
##            "(lep_relIso04DB>0.0667)" ,
##            "(recolepton_mt<73)" ,
##            "(recowhad_puppi_softdropMass>37)" ,
##            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.3)" ,
##            "(recolepton_recowhad_dr<0.15)" ,
##            "(((recolepton_pt + met_pt) / recowhad_pt) < 0.7)" ,
##            "(lep_miniIsoEA<0.025)" ,
##            "(nj50==3)" ,

#    strawman_murecoclassastrawman = [
#            #"(recowhad_puppi_nJettinessTau1>0.0778)" ,
#            #"(recohiggs_mass<240.)" ,
#            #"(lep_relIso04DB<2)" ,
##            "(nb40med==0)" ,
##            "(lep_relIso04DB>0.0667)" ,
##            "(recolepton_mt<73)" ,
##            "(recowhad_puppi_softdropMass>37)" ,
##            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.3)" ,
##            "(recolepton_recowhad_dr<0.15)" ,
##            "(((recolepton_pt + met_pt) / recowhad_pt) < 0.7)" ,
##            "(lep_miniIsoEA<0.025)" ,
##            "(nj50==3)" ,
#            "[(nb30med==0)]" ,
#            "[(lep_relIso04DB>0.175)]" ,
#            "[(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)]" ,
#            "[(recowhad_mass>60.)]" ,
#            "[(lep_miniIsoEA<0.225)]" ,
#            "[(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.31)]" ,
#            "[(recolepton_pt>50.)]" ,
#            "[((recoisrmegajet_pt / (recowhad_puppi_pt + met_pt)) < 1.1)]" ,
#            "[(recolepton_recowhad_dr<0.25)]" ,
#            "[(recowhad_puppi_mass>55.)]" ,
#            "[(pf_annuli_energy[7]<0.0333)]" ,
#            "[((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) < 1.55]" ,
#            #"(recolepton_mt<73)" ,
#            #"(recowhad_puppi_softdropMass>37)" ,
#            #"(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.3)" ,
#            #"(((recolepton_pt + met_pt) / recowhad_pt) < 0.7)" ,
#            #"(lep_miniIsoEA<0.025)" ,
#            #"(nj50==3)" ,
#            ]
#    for i in xrange(len(strawman_murecoclassastrawman)):
#        nm1list = strawman_murecoclassastrawman[:i] + strawman_murecoclassastrawman[i+1:]
#        nm1expr = "*".join(nm1list)
#        cutname = "CutMuRecoClassAStrawManNm{}".format(i)
#        #tqcuts[cutname] = TQCut(cutname, cutname, nm1expr, "1")
#        #tqcuts["CutMuRecoClassA"].addCut(tqcuts[cutname])
#        cutlist = strawman_murecoclassastrawman[:i+1]
#        cutexpr = "*".join(cutlist)
#        cutname = "CutMuRecoClassAStrawManCut{}".format(i)
#        tqcuts[cutname] = TQCut(cutname, cutname, cutexpr, "1")
#        tqcuts["CutMuRecoClassA"].addCut(tqcuts[cutname])
#    tqcuts["CutMuRecoClassAStrawMan"] = TQCut("CutMuRecoClassAStrawMan", "CutMuRecoClassAStrawMan", "*".join(strawman_murecoclassastrawman), "1")
#    tqcuts["CutMuRecoClassA"].addCut(tqcuts["CutMuRecoClassAStrawMan"])


### For getting the 1 - 100 as promised
#            "(nb40med==0)",
#            "(lep_customrelIso04EA[0]>1.28)" ,
#            "(lep_customrelIso005EA[0]<1.23)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<242.)" ,
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.26)" ,
#            "(pf_annuli_energy[7]/recolepton_pt<0.37)" ,
#            "(nbOR<=1)" ,

#### For getting the 1 - 100 as promised with the lep+met / megajet classification
#            "(nbtight==0)",
#            "(lep_customrelIso04EA[0]>1.14)" ,
#            "(lep_customrelIso005EA[0]<1.12)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<240.)" ,
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.22)" ,
#            "(nbOR<=1)" ,
#            "(recolepton_recowhad_dr<0.34)",
#            "(recowhad_puppi_mass>50)*(recowhad_puppi_mass<125)",
#            "(nbORmed<=0)" ,

    strawman_murecoclassastrawman = [
#            "(recowhad_puppi_nJettinessTau1>0.0778)" ,
#            "(nb40med==0)" ,
#            "(recohiggs_mass<240.)",
#            "(lep_relIso04DB>0.0667)" ,
#            "(recolepton_mt<73)" ,
#            "(recowhad_puppi_softdropMass>37)" ,
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.3)" ,
#            "(lep_relIso04DB<2)" ,
#            "(recolepton_recowhad_dr<0.15)" ,
#            "(((recolepton_pt + met_pt) / recowhad_pt) < 0.7)" ,
#            "(lep_miniIsoEA<0.025)" ,
#            "(nj50==3)" ,

#            "(lep_customrelIso055EA[0]>1.28)" ,
#            "(nb40med==0)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
#            "(recowhad_mass>56)",
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.20)" ,
#            "(pf_annuli_energy[7]/recolepton_pt<0.34)" ,
#            "(recowhad_puppi_mass>70)",
#            "(lep_customrelIso025EA[0]>1.35)" ,

#### For getting the 1 - 100 as promised with the lep+met / megajet classification
#            "(nbtight==0)",
#            "(lep_customrelIso04EA[0]>1.14)" ,
#            "(lep_customrelIso005EA[0]<1.12)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<240.)" ,
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.22)" ,
#            "(nbOR<=1)" ,
#            "(recolepton_recowhad_dr<0.34)",
#            "(recowhad_puppi_mass>50)*(recowhad_puppi_mass<125)",
#            "(nbORmed<=0)" ,

#            "(nbtight==0)",
#            "(lep_customrelIso04EA[0]>1.14)" ,
#            "(lep_customrelIso005EA[0]<1.12)" ,
#            "(nbOR<=1)" ,
#            "(recolepton_recowhad_dr<0.34)",
#            "(recowhad_puppi_mass>50)*(recowhad_puppi_mass<125)",
#            "(nbORmed<=0)" ,

#            "(lep_customrelIso06EA[0]>1.36)" ,
#            "(nb40med==0)",
#            "(pf_annuli_energy[7]/recolepton_pt<0.37)" ,
#            "(nbOR<=1)" ,
#            "(recowhad_nJettinessTau2/recowhad_nJettinessTau1>0.29)" , # secondary
#            "(recowhad_nJettinessTau2/recowhad_nJettinessTau1<0.75)" ,

            #"(lep_relIso04DB>0.13)",
            #"(nb40med==0)",
            #"(recohiggsmin_mass<205)",
            #"(recowhad_mass>60.)",
            #"(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.26)" ,
            #"(pf_annuli_energy[7]/recolepton_pt<0.31)" ,
            #"(lep_customrelIso005EA[0]<1.48)" ,

##            "(nbmed==0)",
##            "(lep_relIso04DB>0.18)",
##            "(recolepton_recowhad_dr>0.03)*(recolepton_recowhad_dr<0.46)",
##            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1<0.66)*(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.26)",
##            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
##            "(nb<=1)",
##            "(recowhad_puppi_mass>48)*(recowhad_puppi_mass<128)",
##            "(recohiggs_mass>92)*(recohiggs_mass<225)",


#            # 2018/09/16
#            "(lep_customrelIso035EA[0]>1.2)" ,
#            "(nbmed==0)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1<0.66)*(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.26)",
#            "(recowhad_puppi_mass>65)",

######
######
######
######
######
######

#            # 2018/09/19
#            # S / B = 24.73 / 1461.46
#            # Total S = 96.69
#            # lepid = 13
#            "(lep_customrelIso035EA[0]>1.2)" ,
#            "(nbmed==0)" ,
#            "(recowhad_puppi_mass>60)*(recowhad_puppi_mass<120)",
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.34)",
#            "(pf_annuli_energy[6]/recolepton_pt<0.25)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<250.)" ,

            # 2018/09/19
            # S / B = 19.21 / 1796.15
            # Total S = 97.87
            # lepid = -13
            "(lep_relIso03EA>0.16)" ,
#            "(nbmed==0)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
#            "(lep_miniIsoEA<0.15)" ,
#            "(recowhad_mass>70)",
#            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.32)",

            ]

    for i in xrange(len(strawman_murecoclassastrawman)):
        nm1list = strawman_murecoclassastrawman[:i] + strawman_murecoclassastrawman[i+1:]
        nm1expr = "*".join(nm1list)
        cutname = "CutMuRecoClassAStrawManNm{}".format(i)
        #tqcuts[cutname] = TQCut(cutname, cutname, nm1expr, "1")
        #tqcuts["CutMuRecoClassA"].addCut(tqcuts[cutname])
        cutlist = strawman_murecoclassastrawman[:i+1]
        cutexpr = "*".join(cutlist)
        cutname = "CutMuRecoClassAStrawManCut{}".format(i)
        tqcuts[cutname] = TQCut(cutname, cutname, cutexpr, "1")
        tqcuts["CutMuRecoClassA"].addCut(tqcuts[cutname])
    tqcuts["CutMuRecoClassAStrawMan"] = TQCut("CutMuRecoClassAStrawMan", "CutMuRecoClassAStrawMan", "*".join(strawman_murecoclassastrawman), "1")
    tqcuts["CutMuRecoClassA"].addCut(tqcuts["CutMuRecoClassAStrawMan"])

    strawman_murecoclassastrawman = [

#            # 2018/09/19
#            # S / B = 14.85 / 613.69
#            # Total S = 88.58
#            # lepid = 13
#            "(nb30med==0)" ,
#            "(lep_customrelIso06EA[0]>2.1)" ,
#            "(lep_miniIsoEA<0.275)" ,
#            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
#            "(recowhad_puppi_nJettinessTau2>0.09)",
#            "(recowhad_puppi_mass>90)*(recowhad_puppi_mass<120)",
#            "(recolepton_recowhad_dr<0.8)" ,

            # 2018/09/19
            # S / B = 14.15 / 887.31
            # Total S = 88.64
            # lepid = -13
            "(nb30med==0)" ,
            "(lep_customrelIso06EA[0]>2.1)" ,
            "(lep_miniIsoEA<0.275)" ,
            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<190.)" ,
            "(recowhad_puppi_nJettinessTau2>0.09)",
            "(recowhad_puppi_mass>90)*(recowhad_puppi_mass<120)",
            "(recolepton_recowhad_dr<0.8)" ,

            ]
    if len(strawman_murecoclassastrawman) > 1:
        for i in xrange(len(strawman_murecoclassastrawman)):
            nm1list = strawman_murecoclassastrawman[:i] + strawman_murecoclassastrawman[i+1:]
            nm1expr = "*".join(nm1list)
            cutname = "CutMuRecoClassBStrawManNm{}".format(i)
            #tqcuts[cutname] = TQCut(cutname, cutname, nm1expr, "1")
            #tqcuts["CutMuRecoClassB"].addCut(tqcuts[cutname])
            cutlist = strawman_murecoclassastrawman[:i+1]
            cutexpr = "*".join(cutlist)
            cutname = "CutMuRecoClassBStrawManCut{}".format(i)
            tqcuts[cutname] = TQCut(cutname, cutname, cutexpr, "1")
            tqcuts["CutMuRecoClassB"].addCut(tqcuts[cutname])
    tqcuts["CutMuRecoClassBStrawMan"] = TQCut("CutMuRecoClassBStrawMan", "CutMuRecoClassBStrawMan", "*".join(strawman_murecoclassastrawman), "1")
    tqcuts["CutMuRecoClassB"].addCut(tqcuts["CutMuRecoClassBStrawMan"])

    tqcuts["CutElClassA"] = TQCut("CutElClassA", "CutElClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutElClassB"] = TQCut("CutElClassB", "CutElClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")
    tqcuts["CutElRecoClassA"] = TQCut("CutElRecoClassA", "CutElRecoClassA", "((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) > 0.9", "1")
    tqcuts["CutElRecoClassB"] = TQCut("CutElRecoClassB", "CutElRecoClassB", "((recolepton_pt + recolepton_pt + met_pt) / recowhad_pt) < 0.9", "1")

    strawman_elrecoclassastrawman = [
            "(recowhad_puppi_nJettinessTau1>0.0778)" ,
            "(lep_relIso03EA>0.1)" ,
            "(nb50med==0)" ,
            "(TMath::Min(recohiggs_mass,recohiggs2_mass)<220.)" ,
            "(((recolepton_pt + met_pt) / recowhad_pt)<1.2)" ,
            "(recowhad_puppi_nJettinessTau2/recowhad_puppi_nJettinessTau1>0.4)" ,
            "(lep_miniIsoEA<0.15)" ,
            "(recolepton_recowhad_dr<0.15)" ,
            ]
    if len(strawman_elrecoclassastrawman) > 1:
        for i in xrange(len(strawman_elrecoclassastrawman)):
            nm1list = strawman_elrecoclassastrawman[:i] + strawman_elrecoclassastrawman[i+1:]
            nm1expr = "*".join(nm1list)
            cutname = "CutElRecoClassAStrawManNm{}".format(i)
            tqcuts[cutname] = TQCut(cutname, cutname, nm1expr, "1")
            tqcuts["CutElRecoClassA"].addCut(tqcuts[cutname])
    tqcuts["CutElRecoClassAStrawMan"] = TQCut("CutElRecoClassAStrawMan", "CutElRecoClassAStrawMan", "*".join(strawman_elrecoclassastrawman), "1")
    tqcuts["CutElRecoClassA"].addCut(tqcuts["CutElRecoClassAStrawMan"])

    tqcuts["CutMuMinusNLep"] = TQCut("CutMuMinusNLep", "CutMuMinusNLep", "nrecolep==1", "1")
    tqcuts["CutMuMinusNLepClassA"] = TQCut("CutMuMinusNLepClassA", "CutMuMinusNLepClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutMuMinusNLepClassB"] = TQCut("CutMuMinusNLepClassB", "CutMuMinusNLepClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")
    tqcuts["CutMuMinusPt60"] = TQCut("CutMuMinusPt60", "CutMuMinusPt60", "recolepton_pt>60.", "1")
    tqcuts["CutMuMinusPt60ClassA"] = TQCut("CutMuMinusPt60ClassA", "CutMuMinusPt60ClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutMuMinusPt60ClassB"] = TQCut("CutMuMinusPt60ClassB", "CutMuMinusPt60ClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")

    tqcuts["CutMuMinusMass"] = TQCut("CutMuMinusMass", "CutMuMinusMass", "(recohiggs_mass<300.)*(recowhad_softdropMass<125.)", "1")
    tqcuts["CutMuMinusNb"] = TQCut("CutMuMinusNb", "CutMuMinusNb", "nb50==0", "1")
    tqcuts["CutMuMinusIsoDB"] = TQCut("CutMuMinusIsoDB", "CutMuMinusIsoDB", "lep_relIso04DB>0.15", "1")
    tqcuts["CutMuMinusPuppiPt"] = TQCut("CutMuMinusPuppiPt", "CutMuMinusPuppiPt", "recowhad_puppi_pt + met_pt>450.", "1")
    tqcuts["CutMuMinusPuppiPtClassA"] = TQCut("CutMuMinusPuppiPtClassA", "CutMuMinusPuppiPtClassA", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id<2:{'$(path)'=='/sig/VBF'?wstar_channel_id<2:1}}", "1")
    tqcuts["CutMuMinusPuppiPtClassB"] = TQCut("CutMuMinusPuppiPtClassB", "CutMuMinusPuppiPtClassB", "{'$(path)'=='/sig/ggH/HWWlvjj'?wstar_channel_id>=2:{'$(path)'=='/sig/VBF'?wstar_channel_id>=2:1}}", "1")
    tqcuts["CutMuMinusDR"] = TQCut("CutMuMinusDR", "CutMuMinusDR", "(recolepton_recowhad_dr<0.6)*(recolepton_recowhad_dr>0.03)", "1")

    tqcuts["CutMuMinusIso"] = TQCut("CutMuMinusIso", "CutMuMinusIso", "(lep_miniIsoEA_0<0.1)*(lep_relIso04DB>0.6)", "1")

    tqcuts["CutMuMinusnb"] = TQCut("CutMuMinusnb", "CutMuMinusnb", "nb==0", "1")
    tqcuts["CutMuMinusnbMed"] = TQCut("CutMuMinusnbMed", "CutMuMinusnbMed", "nbmed==0", "1")
    tqcuts["CutMuMinusnbTight"] = TQCut("CutMuMinusnbTight", "CutMuMinusnbTight", "nbtight==0", "1")
    tqcuts["CutMuMinusnb30"] = TQCut("CutMuMinusnb30", "CutMuMinusnb30", "nb30==0", "1")
    tqcuts["CutMuMinusnb30Med"] = TQCut("CutMuMinusnb30Med", "CutMuMinusnb30Med", "nb30med==0", "1")
    tqcuts["CutMuMinusnb30Tight"] = TQCut("CutMuMinusnb30Tight", "CutMuMinusnb30Tight", "nb30tight==0", "1")
    tqcuts["CutMuMinusnb40"] = TQCut("CutMuMinusnb40", "CutMuMinusnb40", "nb40==0", "1")
    tqcuts["CutMuMinusnb40Med"] = TQCut("CutMuMinusnb40Med", "CutMuMinusnb40Med", "nb40med==0", "1")
    tqcuts["CutMuMinusnb40Tight"] = TQCut("CutMuMinusnb40Tight", "CutMuMinusnb40Tight", "nb40tight==0", "1")
    tqcuts["CutMuMinusnb50"] = TQCut("CutMuMinusnb50", "CutMuMinusnb50", "nb50==0", "1")
    tqcuts["CutMuMinusnb50Med"] = TQCut("CutMuMinusnb50Med", "CutMuMinusnb50Med", "nb50med==0", "1")
    tqcuts["CutMuMinusnb50Tight"] = TQCut("CutMuMinusnb50Tight", "CutMuMinusnb50Tight", "nb50tight==0", "1")

    tqcuts["CutMuHLTMu50"] = TQCut("CutMuHLTMu50", "CutMuHLTMu50", "(HLT_SingleMu50>0)+(HLT_TkMu50)", "1")
    tqcuts["CutElHLTEl50"] = TQCut("CutElHLTEl50", "CutElHLTEl50", "HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165>0", "1")
    tqcuts["CutElHLTVarious"] = TQCut("CutElHLTVarious", "CutElHLTVarious", "(HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165>0)+(HLT_AK8PFJet360_TrimMass30>0)+(HLT_AK8PFHT700_TrimR0p1PT0p03Mass50>0)+(HLT_PFHT900>0)+(HLT_PFHT650_WideJetMJJ900DEtaJJ1p5>0)", "1")
    tqcuts["CutMuHLTVarious"] = TQCut("CutMuHLTVarious", "CutMuHLTVarious", "(HLT_TkMu50)+(HLT_Mu50>0)+(HLT_AK8PFJet360_TrimMass30>0)+(HLT_AK8PFHT700_TrimR0p1PT0p03Mass50>0)+(HLT_PFHT900>0)+(HLT_PFHT650_WideJetMJJ900DEtaJJ1p5>0)", "1")

    # ------------------------------------------------------
    # Cut structures

    tqcuts["Root"].addCut(tqcuts["WgtW"])
    tqcuts["WgtW"].addCut(tqcuts["WgtT"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt450"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt300"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt350"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt400"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt500"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt550"])
    tqcuts["WgtT"].addCut(tqcuts["CutHiggsPt600"])
    tqcuts["CutHiggsPt450"].addCut(tqcuts["CutHiggsPt450ClassA"])
    tqcuts["CutHiggsPt450"].addCut(tqcuts["CutHiggsPt450ClassB"])
    tqcuts["CutHiggsPt450"].addCut(tqcuts["CutNLep"])
    tqcuts["CutNLep"].addCut(tqcuts["CutNAK8"])
    tqcuts["CutNAK8"].addCut(tqcuts["CutISRMegaJet"])
    tqcuts["CutISRMegaJet"].addCut(tqcuts["CutISRBalance"])
    tqcuts["CutISRBalance"].addCut(tqcuts["CutISRBalanceClassA"])
    tqcuts["CutISRBalance"].addCut(tqcuts["CutISRBalanceClassB"])
    #tqcuts["CutISRBalance"].addCut(tqcuts["CutEl"])
    tqcuts["CutISRBalance"].addCut(tqcuts["CutMu"])
    tqcuts["CutISRBalance"].addCut(tqcuts["CutMuPlus"])
    tqcuts["CutISRBalance"].addCut(tqcuts["CutMuMinus"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuHLTMu50"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuHLTVarious"])
    tqcuts["CutEl"].addCut(tqcuts["CutElHLTEl50"])
    tqcuts["CutEl"].addCut(tqcuts["CutElHLTVarious"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuClassA"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuClassB"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuRecoClassA"])
    tqcuts["CutEl"].addCut(tqcuts["CutElClassA"])
    tqcuts["CutEl"].addCut(tqcuts["CutElClassB"])
    tqcuts["CutEl"].addCut(tqcuts["CutElRecoClassA"])
    tqcuts["CutEl"].addCut(tqcuts["CutElRecoClassB"])
#    tqcuts["CutMuRecoClassA"].addCut(tqcuts["CutMuRecoClassAStrawManCut1"])
#    tqcuts["CutMuRecoClassAStrawManCut1"].addCut(tqcuts["CutMuRecoClassAStrawManCut2"])
#    tqcuts["CutMuRecoClassAStrawManCut2"].addCut(tqcuts["CutMuRecoClassAStrawManCut3"])
#    tqcuts["CutMuRecoClassAStrawManCut3"].addCut(tqcuts["CutMuRecoClassAStrawManCut4"])
#    tqcuts["CutMuRecoClassAStrawManCut4"].addCut(tqcuts["CutMuRecoClassAStrawManCut5"])
#    tqcuts["CutMuRecoClassAStrawManCut5"].addCut(tqcuts["CutMuRecoClassAStrawManCut6"])
#    tqcuts["CutMuRecoClassAStrawManCut6"].addCut(tqcuts["CutMuRecoClassAStrawManCut7"])
#    tqcuts["CutMuRecoClassAStrawManCut7"].addCut(tqcuts["CutMuRecoClassAStrawManCut8"])
#    tqcuts["CutMuRecoClassAStrawManCut8"].addCut(tqcuts["CutMuRecoClassAStrawManCut9"])
#    tqcuts["CutMuRecoClassAStrawManCut9"].addCut(tqcuts["CutMuRecoClassAStrawManCut10"])
#    tqcuts["CutMuRecoClassAStrawManCut10"].addCut(tqcuts["CutMuRecoClassAStrawManCut11"])
#    tqcuts["CutMuRecoClassAStrawManCut11"].addCut(tqcuts["CutMuRecoClassAStrawManCut12"])
    tqcuts["CutMu"].addCut(tqcuts["CutMuRecoClassB"])
    tqcuts["CutMuRecoClassB"].addCut(tqcuts["CutMuRecoClassBStrawMan"])

    #tqcuts["CutMuMinus"].addCut(tqcuts["CutMuMinusNLep"])
    #tqcuts["CutMuMinusNLep"].addCut(tqcuts["CutMuMinusMass"])
    #tqcuts["CutMuMinusNLep"].addCut(tqcuts["CutMuMinusNLepClassA"])
    #tqcuts["CutMuMinusNLep"].addCut(tqcuts["CutMuMinusNLepClassB"])
    #tqcuts["CutMuMinusNLep"].addCut(tqcuts["CutMuMinusPt60"])
    #tqcuts["CutMuMinusPt60"].addCut(tqcuts["CutMuMinusPt60ClassA"])
    #tqcuts["CutMuMinusPt60"].addCut(tqcuts["CutMuMinusPt60ClassB"])
    #tqcuts["CutMuMinusMass"].addCut(tqcuts["CutMuMinusNb"])
    #tqcuts["CutMuMinusNb"].addCut(tqcuts["CutMuMinusIsoDB"])
    #tqcuts["CutMuMinusIsoDB"].addCut(tqcuts["CutMuMinusPuppiPt"])
    #tqcuts["CutMuMinusPuppiPt"].addCut(tqcuts["CutMuMinusPuppiPtClassA"])
    #tqcuts["CutMuMinusPuppiPt"].addCut(tqcuts["CutMuMinusPuppiPtClassB"])
    #tqcuts["CutMuMinusPuppiPt"].addCut(tqcuts["CutMuMinusDR"])
    #tqcuts["CutMuMinusDR"].addCut(tqcuts["CutMuMinusIso"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnbMed"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnbTight"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb30"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb30Med"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb30Tight"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb40"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb40Med"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb40Tight"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb50"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb50Med"])
    #tqcuts["CutMuMinusIso"].addCut(tqcuts["CutMuMinusnb50Tight"])

    #tqcuts["CutISRPt450"].addCut(tqcuts["CutISRPt450DR"])
    #tqcuts["CutISRPt450DR"].addCut(tqcuts["CutISRPt450SD"])

    #tqcuts["CutHiggsPt450"].addCut(tqcuts["CutNAK8"])
    #tqcuts["CutNAK8"].addCut(tqcuts["CutN2AK8"])
    #tqcuts["CutNAK8"].addCut(tqcuts["CutN3AK8"])
    #tqcuts["CutN2AK8"].addCut(tqcuts["CutN2AK8ISRPt400"])
    #tqcuts["CutN2AK8ISRPt400"].addCut(tqcuts["CutN2AK8NLep1"])
    #tqcuts["CutN2AK8RelIso01"].addCut(tqcuts["CutN2AK8LepPt50"])
    #tqcuts["CutN2AK8LepPt50"].addCut(tqcuts["CutN2AK8NLep0"])
    #tqcuts["CutN2AK8NLep0"].addCut(tqcuts["CutN2AK8DR25"])
    #tqcuts["CutN2AK8DR25"].addCut(tqcuts["CutN2AK8Mini"])
    #tqcuts["CutN2AK8Mini"].addCut(tqcuts["CutN2AK8Nb0"])

    # Return the "Root node" which holds all cuts in a tree structure
    qutils.exportTQCutsToTextFile(tqcuts["Root"], "cuts.cfg")

    cuts = qutils.loadTQCutsFromTextFile("cuts.cfg")

    #cuts.printCuts("trd")

if __name__ == "__main__":

    main(sys.argv)

