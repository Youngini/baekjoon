import sys
N = int(sys.stdin.readline())
ary = []
for i in range(N):
    ary.append(int(sys.stdin.readline()))
ary.sort()
for i in range(N):
    print(ary[i])