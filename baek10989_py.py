import sys
N = int(sys.stdin.readline())
ary = [0]*10001

for i in range(N):
    data = int(sys.stdin.readline())
    ary[data]+=1

for i in range(10001):
    if(ary[i]!=0):
        for j in range(ary[i]):
            print(i)