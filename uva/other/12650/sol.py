try:
    while True:
        n, m = map(int, input().split())
        check = [0 for i in range(n+1)]
        back = input().split()
        for e in back:
            check[int(e)] = 1
        for u in range(1, len(check)):
            if not check[u]:
                print(u, end=' ')
        if n == m:
            print('*', end='')
        print()
except:
    pass