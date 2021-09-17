from math import floor

v = int(input())
p = int(input())

parcelas = []

if v % p == 0:
    for i in range(p):
        print(int(v / p))
else:
    resto = v % p
    for i in range(p):
        parcelas.append(int(floor(v / p)))
    for i in range(resto):
        parcelas[i] += 1
    
    for i in parcelas:
        print(i)