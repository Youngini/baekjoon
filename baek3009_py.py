import sys
from collections import defaultdict

rec_x = defaultdict(int)
rec_y = defaultdict(int)
for i in range(3):
    x,y = map(int,sys.stdin.readline().split())
    rec_x[x]+=1
    rec_y[y]+=1

for key, value in rec_x.items():
    if value == 2: continue
    x = key
for key, value in rec_y.items():
    if value == 2: continue
    y = key

print(x,y)