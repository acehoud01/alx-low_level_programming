!#/usr/bin/python3

import ctypes

operations = ctypes.CDLL('./100-operations.so')
sums = operations.add(5, 3)
print(sums)
