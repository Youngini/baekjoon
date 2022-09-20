import sys

N = int(sys.stdin.readline())
ary = []

for i in range(N):
    ary.append([int(x) for x in sys.stdin.readline().split()])

ans = sorted(ary,key = lambda x:(x[1],x[0])) # sorting 할 때 우선순위 지정 

for i in range(N):
    print(ans[i][0],ans[i][1])