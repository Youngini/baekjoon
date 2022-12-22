import sys

T = int(sys.stdin.readline())
ANS = []
for i in range(T):
    arr = [int (x) for x in sys.stdin.readline().split()]
    index = [int (x) for x in sys.stdin.readline().split()]
    ans = []

    #찾는 값 표시
    for j in range(arr[0]):
        if(j == arr[1]):
            ans.append([index[j],1])
        else:
            ans.append([index[j],0])
    
    #정렬
    for j in range(arr[0]):
        k = j+1
        while(k < arr[0]):
            if(ans[j][0] < ans[k][0]):
                for h in range(j,k):
                    ans.append(ans[j])
                    del(ans[j])
                k = j
            k+=1
            
    #프린트           
    for j in range(arr[0]):
        if(ans[j][1] == 1):
            print(j+1)
