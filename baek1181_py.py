import sys

N = int(sys.stdin.readline())
S=set()
for i in range(N):
    S.add(sys.stdin.readline())

ary = list(S)
ary.sort()
ary.sort(key =lambda x:len(x))

for i in ary:
    print(i,end='')