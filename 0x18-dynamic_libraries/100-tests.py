#!/usr/bin/python3
import ctypes

cops = ctypes.CDLL('./100-operations.so')

a = 66
b = -76

result_add = cops.add(a, b)
result_sub = cops.sub(a, b)
result_mul = cops.mul(a, b)
result_div = cops.div(a, b)
result_mod = cops.mod(a, b)

print(f"{a} + {b} = {result_add}")
print(f"{a} - {b} = {result_sub}")
print(f"{a} x {b} = {result_mul}")
print(f"{a} / {b} = {result_div}")
print(f"{a} % {b} = {result_mod}")
