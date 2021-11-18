import fileinput as fi

try:
    for n in fi.input():
        s = n.lstrip().rstrip(); n = int(n.rstrip())
        if not n:
            break
        print("{} is{} a multiple of 11.".format(s, (" not" if n%11 else "")))
except:
    pass