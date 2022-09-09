import sys

def isPalindrome(s):
    return recursion(s,0,len(s)-2,1)

def recursion(s,i,l,n):
    if(i>=l-i): return 1,n
    else:
        if(s[i] == s[l-i]): return recursion(s,i+1,l,n+1)
        else: return 0,n

T = int(sys.stdin.readline())

for i in range(T):
    s = sys.stdin.readline()
    x,y = isPalindrome(s)
    print(x ,y)