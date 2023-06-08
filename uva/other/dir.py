import os

pwd = os.path.dirname(__file__)
dirs = os.listdir(pwd)

dirs.remove('dir.py')
dirs.remove('0')

for d in dirs:
    tmp_d = d[:-2]
    if not os.path.exists(tmp_d):
        os.makedirs(name=tmp_d, exist_ok=True)
    os.system(f'mv {d} {tmp_d}')
    print(tmp_d)