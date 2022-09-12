import sys
from collections import defaultdict
N,M = map(int,sys.stdin.readline().split())
dic_pockemon = defaultdict(int)
dic_number = defaultdict(str)
for i in range(N):
    string = (sys.stdin.readline()).strip()
    dic_pockemon[string] = i+1
    dic_number[i+1] = string
for i in range(M):
    string = sys.stdin.readline()
    ans = string.strip()
    if(ans.isdigit()):  
        print(dic_number[int(ans)])
    else:
        print(dic_pockemon[ans])