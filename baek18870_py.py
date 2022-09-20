import sys
N = int(sys.stdin.readline())
ary = [int(x) for x in sys.stdin.readline().split()]
dic = {}
ans = list(set(ary))
ans.sort()
for i in range(len(ans)):
    dic[ans[i]] = i

for i in ary:
    print(dic[i],end = ' ')