import sys
N = int(sys.stdin.readline())
data = [int(x) for x in sys.stdin.readline().split()]
v = int(sys.stdin.readline())
ans = 0
for i in data:
    if(v == i):
        ans+=1
print(ans)