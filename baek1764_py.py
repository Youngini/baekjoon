import sys
from collections import defaultdict
dic_people = defaultdict(int)
unknown = []
N, M = map(int, sys.stdin.readline().split())

for i in range(N):
    j = sys.stdin.readline()
    dic_people[j] = 1

for i in range(M):
    j = sys.stdin.readline()
    dic_people[j]+=1
    if(dic_people[j]==2):
        unknown.append(j)
unknown.sort()
print(len(unknown))
for i in unknown:
    print(i, end= '')