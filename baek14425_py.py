import sys
from collections import defaultdict
N,M = map(int,sys.stdin.readline().split())
ary=defaultdict(bool)
n=0
for i in range(N):
    ary[sys.stdin.readline()] = True

for i in range(M):
    if(ary[sys.stdin.readline()]):
        n+=1
print(n)