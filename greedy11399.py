import sys

N = int(sys.stdin.readline())
time = [int (x) for x in sys.stdin.readline().split()]
time.sort()
min = 0

for i in range(N):
    for j in range(i+1):
        min+=time[j]

print(min)