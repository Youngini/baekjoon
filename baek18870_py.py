import sys
N = int(sys.stdin.readline())
ary = [int(x) for x in sys.stdin.readline().split()]
dic = {}
S = set(ary)
ans = list(S)
ans.sort()
for i in range(len(ans)):
    dic[ans[i]] = i

for i in ary:
    print(dic[i],end = ' ')

