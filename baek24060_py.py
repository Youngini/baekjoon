import sys

def merge_sort(ary,left,right):
    global ans
    if((left == 0)and (right == len(ary)-1)):
        ans = []
    if(left<right):
        mid = (left+right)//2
        merge_sort(ary,left,mid)
        merge_sort(ary,mid+1,right)
        return merge(ary,left,mid,right)

def merge(ary,left,mid,right):
    global ans
    i = left
    j = mid+1
    t = left
    temp = []
    while((i<=mid) and (j <= right)):
        if(ary[i] <= ary[j]):
            temp.append(ary[i])
            t+=1
            i+=1
        else:
            temp.append(ary[j])
            t+=1
            j+=1
    
    while(i <= mid):
        temp.append(ary[i])
        t+=1
        i+=1
    
    while(j <= right):
        temp.append(ary[j])
        t+=1
        j+=1
    
    i = left
    t = 0

    while(i<=right):
        ary[i] = temp[t]
        ans.append(ary[i])
        i+=1
        t+=1
    return ans

N, K = map(int, sys.stdin.readline().split())
ary = [int(x) for x in sys.stdin.readline().split()]
ans = merge_sort(ary,0,len(ary)-1)

if(len(ans)-1 < K-1):
    print(-1)
else:
    print(ans[K-1])