import sys

x = [1, 2, 3, 4]

i = open('tes.txt', "a")
i.write('<' + repr(x[1]) + '>')

