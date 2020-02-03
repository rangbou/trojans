import random
import subprocess 
import sys

#create the 10000 pairs of x and y from -100 to 100 and d from 0 to 100
x = []
y = []
d = []

for i in range(10000):
   x.append(random.uniform(-100,100))
   y.append(random.uniform(-100,100))
   d.append(random.uniform(0,100))
   
#call blackbox.c 


#simultaneously error free z
zcomputed = [0]*10000

for i in range(10000):
   zcomputed[i] = x[i]**2 + y[i]**2
   
#write in difference values into results.txt
write_in = open('results.txt', "a")

   



