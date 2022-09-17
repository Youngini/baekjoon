import math
import sys

def find_shortestpath(x,y,w,h):
    m = 0
    if((x == 0 or x == w)and(y==0 or y==h)):
        return m
    elif(0<x<w)and(0<y<h):
        return min(abs(x-0),abs(x-w),abs(y-0),abs(y-h))
    elif(0<=x<=w):
        return min(abs(y-0),abs(y-h))
    elif(0<=y<=h):
        return min(abs(x-0),abs(x-w))
    elif(x<0 and y>h):
        a = (0-x)
        b = (y-h)
        m = math.sqrt((a*a)+(b*b))
        return m
    elif(x>w and y>h):
        a = (x-w)
        b = (y-h)
        m = math.sqrt((a*a)+(b*b))
        return m
    elif(x<0 and y<0):
        a = (x-0)
        b = (y-0)
        m = math.sqrt((a*a)+(b*b))
        return m
    elif(x>w and y<0):
        a = (x-w)
        b = (y-0)
        m = math.sqrt((a*a)+(b*b))
        return m

x,y,w,h = map(int,sys.stdin.readline().split())
m = find_shortestpath(x,y,w,h)
print(m) 
