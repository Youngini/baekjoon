import sys
import math

def in_out(x,y,cx,cy,r):
    l = math.sqrt((x-cx)*(x-cx)+(y-cy)*(y-cy))

    if(l<r): # 원안에 점 있으면
        return 1
    else: # 원 밖에 점 있으면
        return 0

T = int(sys.stdin.readline())

for i in range(T):
    ans = 0
    coor = [int (x) for x in sys.stdin.readline().split()]
    n =  int(sys.stdin.readline())
    for j in range(n):
        data = [int (x) for x in sys.stdin.readline().split()]
        a = in_out(coor[0],coor[1],data[0],data[1],data[2])
        b = in_out(coor[2],coor[3],data[0],data[1],data[2])
        # 둘 중 하나만 원 안에 있어야 그 원을 지나감
        if((a == 1 and b == 0) or (a == 0 and b == 1)): 
            ans+=1
    print(ans)


