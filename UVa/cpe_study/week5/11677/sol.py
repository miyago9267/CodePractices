while True:
    h1, m1, h2, m2 = map(int, input().split())
    if not (h1+h2+m1+m2) and not (h1*h2*m1*m2):
        break
    if h1>h2 or (h1==h2 and m1>m2):
        h2+=24
    res = (h2*60+m2)-(h1*60+m1);
    print(res)
