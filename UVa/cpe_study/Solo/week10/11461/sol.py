sqr = [i*i for i in range(1, 1001)]

try:
    while True:
        n, m = map(int, input.split())
        if not n and not m:
            break
        ct = 0
        for i in range(n, m+1):
            if i in sqr:
                ct+=1
        print(ct)
except:
    pass