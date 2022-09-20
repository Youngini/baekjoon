import sys
from collections import defaultdict
N = int(sys.stdin.readline())
ary = defaultdict(int) 
for x in sys.stdin.readline().split():ary[x] = 1
M = int(sys.stdin.readline())
for x in sys.stdin.readline().split():
    print(ary[x],end = ' ')