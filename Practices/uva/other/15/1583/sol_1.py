def getDig(a):
    res = a
    while a:
        res+=a%10
        a//=10
    return res

if __name__ == '__main__':
    T = int(input())
    while T:
        T -= 1
        n = int(input())
        hasDig = 0
        for i in range(n-50, n):
            if getDig(i) == n:
                print(i)
                hasDig = 1
                break
        if not hasDig:
            print(0)