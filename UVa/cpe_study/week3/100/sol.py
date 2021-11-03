import sys

def leng(n):
    l = 1
    while n!=1:
        if n%2:
            n=3*n+1
        else:
            n/=2
        l+=1
    return l 
def maxn(a, b):
    n = 0
    for i in range(a,b+1):
        l =leng(i)
        if n < l:
            n = l
    return n

for s in sys.stdin:
    arr = [int(x) for x in s.split()]
    if arr[0]>arr[1]:
        arr[0], arr[1] = arr[1], arr[0]

    print(arr[0], arr[1], maxn(arr[0], arr[1]))
    
