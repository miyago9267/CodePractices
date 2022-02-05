import math

n = 265625471
maxn = -1
for i in range(2, n):
    if not n%i:
        maxn = i
        while not n%i:
            n//=i

print(maxn)