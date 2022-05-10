while True:
    k = int(input())
    if k == 0:
        break
    n, m = map(int, input().split())
    for i in range(k):
        x, y = map(int, input().split())
        if x == n or y == m:
            print('divisa')
            continue
        posx = 'E' if x > n else 'O'
        posy = 'N' if y > m else 'S'
        print(posy+posx)
