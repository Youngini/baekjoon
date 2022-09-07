import sys

N = int(sys.stdin.readline())
ary = []
for i in range(N):
    a,b = sys.stdin.readline().split()
    a = int(a)
    ary.append([a,b])

ary.sort(key = lambda x:x[0])

for i in ary:
    print(i[0],i[1])
