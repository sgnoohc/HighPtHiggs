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
        "ntuple_path" : "/nfs-7/userdata/phchang/babies/HWW2016_v1.1.1/skim/",

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
    tqcuts["Root"] = TQCut("Root", "Root", "1", "1")
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

    tqcuts["Root"].addCut(tqcuts["CutHWW"])
    tqcuts["Root"].addCut(tqcuts["CutHbb"])
    tqcuts["CutHWW"].addCut(tqcuts["CutLeadOnShell"])
    tqcuts["CutHWW"].addCut(tqcuts["CutLeadOffShell"])
    tqcuts["CutHWW"].addCut(tqcuts["CutHWWNLep1"])
    tqcuts["CutHWWNLep1"].addCut(tqcuts["CutLeadLeptonic"])
    tqcuts["CutHWWNLep1"].addCut(tqcuts["CutLeadHadronic"])
    tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicLepQuarkOS"])
    tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicLepQuarkSS"])
    tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicLepQuarkOS"])
    tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicLepQuarkSS"])
    tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicIsStar"])
    tqcuts["CutLeadLeptonic"].addCut(tqcuts["CutLeadLeptonicNotStar"])
    tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicIsStar"])
    tqcuts["CutLeadHadronic"].addCut(tqcuts["CutLeadHadronicNotStar"])
    tqcuts["CutLeadHadronicIsStar"].addCut(tqcuts["CutLeadHadronicIsStarLepQuarkOS"])
    tqcuts["CutLeadHadronicIsStar"].addCut(tqcuts["CutLeadHadronicIsStarLepQuarkSS"])
    tqcuts["CutLeadHadronicNotStar"].addCut(tqcuts["CutLeadHadronicNotStarLepQuarkOS"])
    tqcuts["CutLeadHadronicNotStar"].addCut(tqcuts["CutLeadHadronicNotStarLepQuarkSS"])
    tqcuts["CutLeadLeptonicIsStar"].addCut(tqcuts["CutLeadLeptonicIsStarLepQuarkOS"])
    tqcuts["CutLeadLeptonicIsStar"].addCut(tqcuts["CutLeadLeptonicIsStarLepQuarkSS"])
    tqcuts["CutLeadLeptonicNotStar"].addCut(tqcuts["CutLeadLeptonicNotStarLepQuarkOS"])
    tqcuts["CutLeadLeptonicNotStar"].addCut(tqcuts["CutLeadLeptonicNotStarLepQuarkSS"])
    tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHadronicOffShell"])
    tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHadronicOnShell"])
    tqcuts["CutHWWNLep1"].addCut(tqcuts["CutHWWNLep1Radius1"])
    tqcuts["CutHbb"].addCut(tqcuts["CutHbbRadius1"])

    # Return the "Root node" which holds all cuts in a tree structure
    qutils.exportTQCutsToTextFile(tqcuts["Root"], "cuts.cfg")

    cuts = qutils.loadTQCutsFromTextFile("cuts.cfg")

    #cuts.printCuts("trd")

if __name__ == "__main__":

    main(sys.argv)

