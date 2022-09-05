from math import sqrt
import numpy as np
from scipy.linalg import qr

A_M=np.array([[1,2,1],[-1,1,-3],[1,2,-2]])
R=np.linalg.matrix_rank(A_M)
print ("The rank of the Augmented Matrix is",R)


#############################################~~~~~~~~~~~~~~~~~~~~~~~~~~~~###########################################
M = np.array([[1,2], [-1,1], [1,2]])
M_T = M.transpose()
#print(M_T)
M_TM=M_T.dot(M)
MM_T = M.dot(M_T)  
#print(M_TM)
#print(MM_T)
def eigen_dec(M):
  eval, P = np.linalg.eig(M)
#print(w)
#print(val)
  P_T=np.linalg.inv(P)
  D=np.diag(eval)
#print(D)
  vec = np.dot(P,np.dot(D, P_T)) # taking the product of our three matrices
  print("The eigen decompositon is\n", round(vec, decs=0))



def round(values, decs=0):
    return np.round(values*10**decs)/(10**decs)

part_1=eigen_dec(M_TM)
part_2=eigen_dec(MM_T)


##################################################~~~~~~~~~~~~~~~~~~~~~~~~~~###################################################

eval_1, P_1 = np.linalg.eig(M_TM)
eval_2,P_2=np.linalg.eig(MM_T)
#########################################
print("P_1:\n",P_1)
print("P_2:\n",P_2)
  
# Find the QR factor of array
q_1, r_1 =  np.linalg.qr(P_1)
  
# Print the result
print("Decomposition of matrix:")
print( "q=\n", q_1, "\nr=\n", r_1)

q_2, r_2 =  np.linalg.qr(P_2)
  
# Print the result
print("Decomposition of matrix:")
print( "q=\n", q_2, "\nr=\n", r_2)
############################################~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#####################################################

U_1,S_1,VT_1=np.linalg.svd(M_TM)
print("\n",U_1)
print("\n",S_1)
print("\n",VT_1)

U_2,S_2,VT_2=np.linalg.svd(MM_T)
print("\n",U_2)
print("\n",S_2)
print("\n",VT_2)