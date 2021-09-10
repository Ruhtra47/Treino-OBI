s = int(input())
a = int(input())
b = int(input())

res = 0

for i in range(a, b+1):
    si = str(i)
    soma = 0
    for x in si:
        soma += int(x)
    if soma == s:
        res+=1

print(res)