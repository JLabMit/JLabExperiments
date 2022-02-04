# Introduction / python

In this folder we present a number of fundamental tools that you can use to analyze your data. There are 4 basic tools which have been written to be as simple as possible but offereing some reaonable flexibility at the command line. Each of the for core scripts can be called from the command line when you change to the Introduction/python folder.

Data for these examples are in the Introduction/dat directory with the same trunc as the script but with the .dat extension.

## histogram

In this script we read the file histogram.dat (in Introduction/dat/) which contains a single column of values. Those values are read and then historgrammed.

    cd Introduction/python
    ./histogram.py


## graph_xy

In this script we read the file graph_xy.dat (in Introduction/dat/) which contains a two columns of values (x,y). Those values are read and then plotted in form of an xy-graph.

    cd Introduction/python
    ./graph_xy.py

## graph_xdxydy

In this script we read the file graph_xdxydy.dat (in Introduction/dat/) which contains a four columns of values (x,dx,y,dy), so x and y values including their uncertainties. Those values are read and then plotted in form of an xy-graph.

    cd Introduction/python
    ./graph_xdxydy.py

## fit

In this script we read generate a set of random number according to a Gaussian and then histrogram them and display them. We then perfrom a fit where we fit a Gaussian distribution to those histrgram bins.

    cd Introduction/python
    ./fit.py


# Auxiliary

# Coin data

* ./coin.py --n diameters --x 'diameter [cm]' --y 'number of measurements'
* ./coin.py --n d_diameters --x 'diameter uncertainty [cm]' --y 'number of measurements'
* ./coin.py --n heights --x 'height [cm]' --y 'number of measurements'
* ./coin.py --n d_heights --x 'height uncertainty [cm]' --y 'number of measurements'
* ./coin.py --n volumed --x 'volume [cm^3]' --y 'number of measurements'
* ./coin.py --n d_volumes --x 'volume uncertainty [cm^3]' --y 'number of measurements'
