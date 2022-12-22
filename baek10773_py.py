import sys

k = int(sys.stdin.readline())
arr = []
ans = 0
for i in range(k):
    n = int(sys.stdin.readline())
    if(n == 0):
        delete = arr.pop()
    else:
        arr.append(n)

for i in arr:
    ans+=i

print(ans)