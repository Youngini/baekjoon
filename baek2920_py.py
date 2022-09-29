import sys

Code = [int (x) for x in sys.stdin.readline().split()]

if(Code == [1,2,3,4,5,6,7,8]):
    print('ascending')
elif(Code == [8,7,6,5,4,3,2,1]):
    print('descending')
else:
    print('mixed')
