import scipy.io
import pickle 
import gzip
import struct
import numpy as np 
from scipy import signal 

np.set_printoptions(threshold=np.nan)
res = ([])
with open("weights/conv1.txt", 'rb') as f: 
	weight = f.readlines();
for i in weight: 
	res.append(i.split(" ")); 	
a = np.array(map(float,res[0])).reshape(20, 5, 5);
with open("t10k-images-idx3-ubyte", 'rb') as f: 
	magic, num, rows, cols = struct.unpack(">IIII", f.read(16))
	image = np.fromfile(f, dtype = np.uint8).reshape(num, rows, cols);
grad = signal.convolve2d(image[0], a[0], mode = 'same');
M, N = grad.shape
a = np.array(28*[28*[0]])
a[0][0] = 0 
print(M)
K = 2 
L = 2 
MK = M / K 
NL = N / K
print(MK * K) 
print(grad[:(MK*K), (NL*L)].reshape(MK, K, NL, L).max(axis = (1, 29)))
