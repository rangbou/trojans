import sys
import subprocess

x = [1, 2, 3, 4]
#i = open('tes.txt','w').close()

#i = open('tes.txt', "a")
#i.write('<' + repr(x[1]) + '>')


answer = subprocess.check_output(['./blackbox', str(x[0]), str(x[1]), str(x[2])])


print(answer),

he = 1 + float(answer)

print(he)


