#Importing numpy, scipy, mpmath and pyplot
import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-2,10,30)#points on the x axis
simlen = int(1e5) #number of samples
err = [] #declaring probability list
randvar = np.random.normal(0,1,simlen)
randvar = np.loadtxt('gauu.dat',dtype='double')
for i in range(0,30):
	err_ind = np.nonzero(randvar < x[i]) #checking probability condition
	err_n = np.size(err_ind) #computing the probability
	err.append(err_n/simlen) #storing the probability values in a list

	
plt.plot(x.T,err)#plotting the CDF
plt.grid() #creating the grid
plt.xlabel('$x$')
plt.ylabel('$F_V(x)$')

plt.show() #opening the plot window

