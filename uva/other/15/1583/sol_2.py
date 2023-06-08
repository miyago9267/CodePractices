dig = {}

def genDig():
    for i in range(100000):
        dig[i] = 0
    for i in range(100000, 0, -1):
        sum = i; tmp = i
        while tmp > 0:
            sum += tmp%10
            tmp //= 10
        dig[sum] = i

if __name__ == '__main__':
    genDig()
    n = int(input())
    while n:
        n -= 1
        targ = int(input())
        if (dig[targ]):
            print(dig[targ])
        else:
            print(0)