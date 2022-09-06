import sys
N = int(sys.stdin.readline())
ary = []
for i in range(N):
    ary.append([int(x) for x in sys.stdin.readline().split()])

ary.sort()

for i in range(N):
    print(ary[i][0], ary[i][1])