import sys
N = int(sys.stdin.readline())
ary = [int(x) for x in sys.stdin.readline().split()]
S = set(ary)
ans = list(S)
ans.sort()

for i in ary:
    for j in range(len(ans)):
        if(i == ans[j]):
            print(j, end=' ')
