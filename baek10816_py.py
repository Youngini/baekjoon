import sys
from collections import defaultdict
N = int(sys.stdin.readline())
dic_card = defaultdict(int)
for i in sys.stdin.readline().split():
    dic_card[i]+=1
       
M = int(sys.stdin.readline())

for i in sys.stdin.readline().split():
    print(dic_card[i],end = ' ')