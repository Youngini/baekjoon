import sys

def star_maker(n):
    if(n==1):  
        return ['*']
    Stars = star_maker(n//3)
    arr = []
    for i in Stars:
        arr.append(i*3)
    for i in Stars:
        arr.append(i+" "*(n//3)+i)
    for i in Stars:
        arr.append(i*3)
    return arr
        
N = int(sys.stdin.readline())
print('\n'.join(star_maker(N)))