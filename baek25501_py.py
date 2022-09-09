import sys

def isPalindrome(s):
    return recursion(s,0,len(s)-2)

def recursion(s,i,l):
    if(i>=l-i): return 1,i+1
    else:
        if(s[i] == s[l-i]): return recursion(s,i+1,l)
        else: return 0,i+1

T = int(sys.stdin.readline())

for i in range(T):
    s = sys.stdin.readline()
    x,y = isPalindrome(s)
    print(x ,y)