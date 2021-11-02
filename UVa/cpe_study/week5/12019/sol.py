days = [0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334]
w = ["Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"]

try:
    while True:
        m, d = map(int, input().split())
        print(w[(days[m-1]+d)%7])
except EOFError:
    pass
