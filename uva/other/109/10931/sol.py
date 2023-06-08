while True:
    n = int(input())
    if not n:
        break
    s = "";ct = 0
    while n>0:
        if n&1:
            s = '1' + s;ct+=1
        else:
            s = '0' + s
        n/=2
    print("The parity of", s, "is", ct, "(mod 2).")
