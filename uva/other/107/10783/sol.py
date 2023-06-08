for i in range(int(input())):
    a, b = int(input()), int(input())
    a += not a&1; b -= not b&1
    res = "Case " + str(i+1) + ": " + str(int((a+b)*((b-a)/2+1)/2))
    print(res)
