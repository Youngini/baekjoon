import sys
import math

def interpoint_count(x1,y1,r1,x2,y2,r2):
    M = max(r1,r2)
    m = min(r1,r2)
    l = math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
    r = (r1+r2)
    if((x1 == x2) and (y1 == y2) and (r1 == r2)):
        return -1
    elif((l>r) or (l+m < M)):
        return 0
    elif((l == r) or (l+m == M)):
        return 1
    else:
        return 2
    
    
N = int(sys.stdin.readline())

for i in range(N):
    coor = [int(x) for x in sys.stdin.readline().split()]
    ans = interpoint_count(coor[0],coor[1],coor[2],coor[3],coor[4],coor[5])
    print(ans)