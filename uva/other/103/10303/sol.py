catalan = [1, 1]
for i in range(2, 1001):
    catalan.append(catalan[i-1] * (4*i - 2) // (i + 1))

try:
    while True:
        n = int(input())
        print(catalan[n])

except EOFError:
    pass