##!/bin/env python

################################
# Job tag and output hadoop path
################################

data_year = "2016"

job_tag = "HWW{}_skimmed_v1_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v2_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v3_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v4_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v5_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v6_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v7_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v8_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v9_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v10_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v11_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v12_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v13_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v14_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v15_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v16_v1.15.1".format(data_year)
job_tag = "HWW{}_skimmed_v17_v1.15.1".format(data_year)

###################################################################################################################
###################################################################################################################
# Below are the Metis submission code that users do not have to care about.
###################################################################################################################
###################################################################################################################

import time
import json
import metis

from time import sleep

from metis.Sample import DirectorySample
from metis.CondorTask import CondorTask

from metis.StatsParser import StatsParser

import sys
import os
import glob
import subprocess


def main():

    # file/dir paths
    main_dir             = os.path.dirname(os.path.abspath(__file__))
    metis_path           = os.path.dirname(os.path.dirname(metis.__file__))
    tar_path             = os.path.join(metis_path, "package.tar")
    tar_gz_path          = tar_path + ".gz"
    metis_dashboard_path = os.path.join(metis_path, "dashboard")
    exec_path            = os.path.join(main_dir, "metis.sh")
    hadoop_path          = "metis/baby/{}".format(job_tag) # The output goes to /hadoop/cms/store/user/$USER/"hadoop_path"

    # Create tarball
    os.chdir(main_dir)
    os.system("tar -chzf {} a.out setup.sh *.xml".format(tar_gz_path))

    # Change directory to metis
    os.chdir(metis_path)

    total_summary = {}

    samples_to_run = [

            DirectorySample(
                dataset="/GluGluHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628_pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="GluGluHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628*.root",
                ),

            DirectorySample(
                dataset="/VBFHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628_pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="VBFHToWWToLNuQQ_M125_13TeV_powheg_JHUGenV628*.root",
                ),

            DirectorySample(
                dataset="/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="TT_TuneCUETP8M2T4_13TeV-powheg*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM_ext1*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM_ext1*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM_ext1*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM*.root",
                ),

            DirectorySample(
                dataset="/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/MINIAODSIM",
                location="/hadoop/cms/store/user/phchang/metis/baby/HWW2016_v1.15.1/merged4",
                globber="WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM_ext1*.root",
                ),

            ]

    # Loop over datasets to submit
    while True:

        all_tasks_complete = True

        #for sample in sorted(samples):
        for sample in samples_to_run:

            # define the task
            maker_task = CondorTask(
                    sample               = sample,
                    tag                  = job_tag,
                    arguments            = "",
                    executable           = exec_path,
                    tarfile              = tar_gz_path,
                    special_dir          = hadoop_path,
                    output_name          = "output.root",
                    files_per_output     = 1,
                    condor_submit_params = {"sites" : "T2_US_UCSD"},
                    open_dataset         = False,
                    flush                = True,
                    #no_load_from_backup  = True,
                    )


            # process the job (either submits, checks for resubmit, or finishes etc.)
            maker_task.process()

            # save some information for the dashboard
            total_summary[maker_task.get_sample().get_datasetname()] = maker_task.get_task_summary()

            # Aggregate whether all tasks are complete
            all_tasks_complete = all_tasks_complete and maker_task.complete()


        # parse the total summary and write out the dashboard
        StatsParser(data=total_summary, webdir=metis_dashboard_path).do()

        # Print msummary table so I don't have to load up website
        os.system("msummary -r | tee summary.txt")
        os.system("chmod -R 755 {}".format(metis_dashboard_path))

        # If all done exit the loop
        if all_tasks_complete:
            print ""
            print "Job={} finished".format(job_tag)
            print ""
            break

        # Neat trick to not exit the script for force updating
        print 'Press Ctrl-C to force update, otherwise will sleep for 300 seconds'
        try:
            for i in range(0,300):
                sleep(1) # could use a backward counter to be preeety :)
        except KeyboardInterrupt:
            raw_input("Press Enter to force update, or Ctrl-C to quit.")
            print "Force updating..."

if __name__ == "__main__":
    main()

#eof
