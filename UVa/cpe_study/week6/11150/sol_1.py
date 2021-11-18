try:
    while True:
        n = int(input())
        res = emp = 0
        while n+emp>2:
            res+=n
            emp+=n
            n=emp//3
            emp%=3
        res+=n
        if n+emp==2:
            res+=1
        print(res)

except:
    pass