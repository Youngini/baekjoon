import sys

N,M = map(int, sys.stdin.readline().split())
A = []
B = []
C = []

for i in range(N):
    a = [int(x) for x in sys.stdin.readline().split()]
    A.append(a)

for i in range(N):
    b = [int(x) for x in sys.stdin.readline().split()]
    B.append(b)

for i in range(N):
    a = []
    for j in range(M):
       a.append(A[i][j]+B[i][j]) 
    C.append(a)


for i in range(N):
    for j in range(M):
        print(C[i][j], end = ' ')
    print()