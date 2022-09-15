import sys
N,M = map(int,sys.stdin.readline().split())
arr1 = [int(x) for x in sys.stdin.readline().split()]
arr2 = [int(x) for x in sys.stdin.readline().split()]
A = set(arr1)
B = set(arr2)

C = A-B
C.update(B-A)
print(len(C))