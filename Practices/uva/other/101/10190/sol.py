try:
    while True:
        n, m = map(int, input().split())
        num = []
        while n and m and m!=1 and n%m:
            num.append(n)
            n//=m
        if num and num[-1] == m:
            for e in num:
                print(num, end=' ')
            print(1)
        else:
            print("boring!")
except:
    pass