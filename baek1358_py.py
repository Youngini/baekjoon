import sys

def count(W,H,X,Y,x,y):
    if((x<X) and ((x-X)*(x-X)+(y-Y-H/2)*(y-Y-H/2) <= (H/2)*(H/2))):
        return 1
    elif((X<=x<=X+W)and(Y<=y<=Y+H)):
        return 1
    elif((X+W<=x)and((X+W-x)*(X+W-x)+(Y+H/2-y)*(Y+H/2-y)<=(H/2)*(H/2))):
        return 1
    else:
        return 0

N = [int (x) for x in sys.stdin.readline().split()]
ans = 0
for i in range(N[4]):
    coor = [int (x) for x in sys.stdin.readline().split()]
    ans+=count(N[0],N[1],N[2],N[3],coor[0],coor[1])

print(ans)