import random
import subprocess 
import sys

#initialize varaibles
x = []
y = []
d = []
zblackbox = [0]*10000
zcomputed = [0]*10000
zdifference = [0]*10000

write_in = open('results.txt' , 'w').close() #clear the text file
write_in = open('results.txt', 'a') #opens it back up to write in

for i in range(10000):
   #create the 10000 pairs of x and y from -100 to 100 and d from 0 to 100
   x.append(random.uniform(-100,100))
   y.append(random.uniform(-100,100))
   d.append(random.uniform(0,100))
   
   #simultaneously error free z
   zcomputed[i] = x[i]**2 + y[i]**2 
   
   #call blackbox.c to compute zblackbox
   zblackbox[i] = float(subprocess.check_output(['./blackbox', str(x[i]), str(y[i]), str(d[i])]))
   
   #write in difference values into results.txt
   zdifference[i] = abs(zcomputed[i] - zblackbox[i])
   write_in.write('<' + repr(zdifference[i]) + '> \n')
   

   
