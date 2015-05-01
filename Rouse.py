# -*- coding: utf-8 -*-
"""
Created on Sat Apr 18 18:40:18 2015

@author: Ofir
"""
import numpy
from matplotlib.pyplot import plot

class Rouse:
# this class simulates a Rouse olymer 
    def __init__(self,numBeads, diffusionConst,b,dimension,dt,numSteps):
        self.numBeads       = numBeads;
        self.diffusionConst = diffusionConst;
        self.b              = b;
        self.dimension      = dimension;
        self.springConst    = dimension*diffusionConst/b**2;
        self.dt             = dt;
        self.numSteps = numSteps;
        self.CreateRouseMatrix()
        self.SimulateChain('cart')
    def CreateRouseMatrix(self):
               # buid the Rouse matrix
              self.matrix = (numpy.zeros((self.numBeads,self.numBeads)))
              i =numpy.indices((self.numBeads,self.numBeads));
              # fill the Rouse matrix
              self.matrix[i[0]==i[1]-1]=-1;
              self.matrix[i[0]==i[1]+1]=-1;
              self.matrix[i[0]==i[1]]=-numpy.sum(self.matrix,axis=1);
              self.matix = numpy.matrix(self.matrix)
    def SimulateChain(self,state='cart'):
                  # initialize position 
     if state=='cart': # for Euclidean coordinates simulation
       self.position = [numpy.array(numpy.random.normal(0,1,(self.numBeads,2)).cumsum(axis=0))];
       #self.position = numpy.matrix(self.position)
       
       #print self.position
       for i in range(1,self.numSteps,1):
           noise = numpy.random.normal(0,1,(self.numBeads, 2));
           k     = numpy.matrix(self.matrix) * self.position[i-1];
           #print k 
           newPos = self.position[i-1]-self.springConst*k*self.dt +numpy.sqrt(2*self.diffusionConst*self.dt)*noise;
           self.position.append(newPos) 
           self.Plot(newPos)
           #show()
     elif state=='pol':
           print('s')
           
    def Plot(self,pos):
        #print pos[0]
        plot(pos[:,0],pos[:,1],"-o",0.5,0.81)
              