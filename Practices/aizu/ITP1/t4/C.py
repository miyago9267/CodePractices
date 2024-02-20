import sys
for line in sys.stdin:
    arr = line.split()
    if arr[1] == '?':
        break
    if arr[1] == '/':
        arr[1] = '//'
    print(eval(' '.join(arr)))