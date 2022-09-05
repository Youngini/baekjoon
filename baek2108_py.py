import sys

def mean(ary,N):
    m=int(0)
    for i in range(N):
        m+=ary[i]
    print("%d" %round(m/N))

def middle(ary,N):
    print(ary[int(N/2)])

def mode(ary,N,max):
    data = []
    j=0
    for i in range(8002):
        if(n[i] == max):
            data.append(int(i)-4000)
            j+=1
    if(j == 1):
        print(data[0])
    else:
        print(data[1])

def Range(ary,N):
    print(ary[N-1]-ary[0])

N = int(sys.stdin.readline())
ary=[]
n = [0]*8002
max=0
for i in range(N):
    ary.append(int(sys.stdin.readline()))
    n[ary[i]+4000]+=1
    if(max<n[ary[i]+4000]):
        max = n[ary[i]+4000]
ary.sort()

mean(ary,N)
middle(ary,N)
mode(ary,N,max)
Range(ary,N)
