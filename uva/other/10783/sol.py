for i in range(int(input())):
    a = int(input()); b = int(input())
    a=a if a&1 else a+1
    b=b if b&1 else b-1
    res = "Case " + str(i+1) + ": " + str(int((a+b)*((b-a)/2+1)/2))
    print(res)
