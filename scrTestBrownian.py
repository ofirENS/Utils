# -*- coding: utf-8 -*-
"""
Created on Tue Mar 03 19:10:46 2015

@author: Ofir
"""
# this is a script to test the Brownian class performance
from Brownian import Brownian# import the Brownian class from the working folders
from Rouse import Rouse
import time
from matplotlib.pyplot import show

#%%  class parameters 
# class parameters 
numTraj   = 1 # number of trajectorie to generate
numPoints = 20 # number of points
alpha     = 0.3 # plot alpha
mSize     = 1;  # plot marker size
#%%

#b=Brownian()
#print(b)
start_time = time.time()
b=Brownian(numTraj,numPoints)
print("--- %s seconds ---" % (time.time() - start_time)) 

<<<<<<< HEAD
for tIdx in range(numTraj):
    b.trajectory[tIdx].Plot(mSize,alpha)
show()
 
numBeads = 132;
diffusionConst = 1.7;
dimension      = 2
dt       = 0.001;
b        = 0.1
numSteps = 1000;
 
start_time = time.time()
r=Rouse(numBeads,diffusionConst,b,dimension,dt,numSteps);
show()
print("--- %s seconds ---" % (time.time() - start_time)) 
=======
#for tIdx in range(numTraj):
 #   b.trajectory[tIdx].Plot(mSize,alpha)
#show() 
>>>>>>> 3a952d3f85198d719d304dec125b516824fdc844
