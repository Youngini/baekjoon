import sys
N,K = map(int, sys.stdin.readline().split())
money = []

for i in range(N):
    money.append(int(sys.stdin.readline()))

while(1):
    n = K
    count = 0
    for i in range(N-1,0,-1):
        q = n//money[i]
        if(q > 0):
            n%=money[i]
            count+=q
    if(n == 0):
        break

print(count)