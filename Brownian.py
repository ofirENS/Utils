# -*- coding: utf-8 -*-
"""
Created on Tue Mar 03 18:19:47 2015

@author: Ofir
"""

from numpy import random
#import numpy as np
#from numpy import math
#from numpy import arange
from matplotlib.pyplot import plot

# this class creates a Brownian path object
class Brownian:
    def __init__(self,numTraj=1,numPoints=100):  
        # class constructor 
        self.trajectory=[Trajectory(numPoints) for ii in range(numTraj)]                                                 
class Trajectory:
    def __init__(self,numPoints=100):           
                  
        self.x = random.normal(0,1,numPoints).cumsum()       
        self.y = random.normal(0,1,numPoints).cumsum()       
        self.z = random.normal(0,1,numPoints).cumsum()       
                    
    def Plot(self,mSize=2,alpha=0.9):
        plot(self.x,self.y,"-",mSize,alpha)
 