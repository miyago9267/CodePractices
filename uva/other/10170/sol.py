try:
	while True:
        s, d = map(int, input().split())
        sum = 0; i = s
		while sum<d:
            sum+=i; i+=1
		print(i-1)
except:
    pass