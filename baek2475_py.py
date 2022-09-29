import sys

def verify_num(a):
    n = 0
    for i in a:
        n+=i*i
    return n%10

N = [int (x) for x in sys.stdin.readline().split()]
print(verify_num(N))