#!/bin/env python

from rooutil import rooutil as ru
from rooutil import plottery_wrapper as p
import glob

def main():

    output_dirpath = "outputs/HWW2016_skimmed_v17_v1.15.1/"

    histnames = [
            "CutISR400ElPlusRecoClassA__yield",
            "CutISR400ElPlusRecoClassB__yield",
            "CutISR400ElMinusRecoClassA__yield",
            "CutISR400ElMinusRecoClassB__yield",
            "CutISR400MuPlusRecoClassA__yield",
            "CutISR400MuPlusRecoClassB__yield",
            "CutISR400MuMinusRecoClassA__yield",
            "CutISR400MuMinusRecoClassB__yield",
            ]

    histnames = [
            #"CutISR400ElPlusRecoClassAStrawMan__yield",
            #"CutISR400ElPlusRecoClassBStrawMan__yield",
            #"CutISR400ElMinusRecoClassAStrawMan__yield",
            #"CutISR400ElMinusRecoClassBStrawMan__yield",
            "CutISR400MuPlusRecoClassAStrawMan__yield",
            "CutISR400MuPlusRecoClassBStrawMan__yield",
            "CutISR400MuMinusRecoClassAStrawMan__yield",
            "CutISR400MuMinusRecoClassBStrawMan__yield",
            ]

    histnames = [
            "CutISR300MuMinusRecoClassB__recowhad_mlep_puppi_mass",
            ]

    bkg_list_ttbar = glob.glob(output_dirpath+"/TT*.root")
    bkg_list_wjets = glob.glob(output_dirpath+"/WJets*.root")
    bkg_list_hww   = glob.glob(output_dirpath+"/Glu*.root") + glob.glob(output_dirpath+"/VBF*.root")
    #data_list = glob.glob(output_dirpath+"/data_*.root")

    h_wjets = ru.get_summed_histogram(bkg_list_wjets , histnames)
    h_ttbar = ru.get_summed_histogram(bkg_list_ttbar , histnames)
    h_hww   = ru.get_summed_histogram(bkg_list_hww   , histnames)
    #h_data    = ru.get_summed_histogram(data_list        , histnames)

    h_wjets.SetName("W")
    h_ttbar.SetName("t#bar{t}")
    h_hww.SetName("HWW (x10)")

    colors = [ 2005, 2001, 2 ]
    alloptions= {
                "ratio_range":[0.0,2.0],
                "nbins": 60,
                "autobin": False,
                "legend_scalex": 1.8,
                "legend_scaley": 1.1,
                "output_name": "plots/test.pdf",
                "bkg_sort_method": "unsorted",
                "no_ratio": True,
                "print_yield": True,
                "signal_scale": 500,
                }
    p.plot_hist(
            sigs = [h_hww],
            bgs  = [h_ttbar, h_wjets, h_hww.Clone("HWW (stacked)")],
            #data = h_data,
            data = None,
            colors = colors,
            syst = None,
            options=alloptions)

if __name__ == "__main__":
    main()
