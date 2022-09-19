import sys

while 1:
    arr = [int (x) for x in sys.stdin.readline().split()]
    arr.sort()
    if(arr[0]==0 and arr[1] == 0 and arr[2] == 0):
        break
    else:
        a = arr[0]*arr[0]
        b = arr[1]*arr[1]
        c = arr[2]*arr[2]

        if(c == a+b):
            print('right')
        else:
            print('wrong')
