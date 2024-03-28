from ctypes import CDLL, c_int

lib = CDLL("./100-operations.so")

# Set the return types of the C functions
lib.add.restype = c_int
lib.subtract.restype = c_int
lib.multiply.restype = c_int
lib.divide.restype = c_int

# Call the functions
a = 10
b = 5

print(f"{a} + {b} = {lib.add(a, b)}")
print(f"{a} - {b} = {lib.subtract(a, b)}")
print(f"{a} * {b} = {lib.multiply(a, b)}")
print(f"{a} / {b} = {lib.divide(a, b)}")
