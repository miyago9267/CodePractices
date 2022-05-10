import sys

for s in sys.stdin:
    for char in s:
        print(chr(ord(char)-7),end='')
    print()
