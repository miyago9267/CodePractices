for i in range(int(input())):
    s, d = map(int, input().split())
    x = int((s + d) / 2); y = int(x - d)
    if ((s + d) % 2) or (x < 0 or y <0):
        print("impossible")
    else:
        print(x, y)
