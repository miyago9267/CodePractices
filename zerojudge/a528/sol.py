try:    
    while True:
        arr = []
        for i in range(int(input())):
            arr.append(input())
        arr.sort()
        for x in arr:
            print(x)
        arr.clear()
except:
    pass