idnum = [
            10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,
            22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33
    ]

try:
    while True:
        s = input()
        sum = idnum[ord(s[0])-65]//10 + idnum[ord(s[0])-65]%10*9
        for i in range(9):
            sum += (int(s[i+1]))*(8-i)
        sum += int(s[9])
        print("{}".format(("fake" if (sum%10) else "real")))
except:
    pass