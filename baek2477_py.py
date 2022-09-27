import sys
from collections import defaultdict
N = int(sys.stdin.readline())
rec = defaultdict(int) # 각 방향 몇번 나왔는지
dir = [] # 방향 순서
length = [] # 길이 순서
n = [] # 직사각형 진짜 길이가 저장된 방향
index = [0,0,0,0]  # 직사각형 진짜 가로,세로 
            # 잘린 직사각형 가로,세로 인덱스값 저장

# 값 저장
for i in range(6):
    a,b = map(int,sys.stdin.readline().split())
    rec[a]+=1
    dir.append(a)
    length.append(b)

# 잘리기 전 직사각형 가로,세로 구하기
for i in range(1,5):
    if(rec[i] == 1):
        n.append(i)

# 케이스 4개
k = n[0]*n[1]
if(k==3):
    for i in range(6):
        if(dir[i] == 1):
            index[0]=i
        elif(dir[i] == 3):
            index[1]=i

elif(k==4):
    for i in range(6):
        if(dir[i] == 4):
            index[0]=i
        elif(dir[i] == 1):
            index[1]=i

elif(k==6):
    for i in range(6):
        if(dir[i] == 3):
            index[0]=i
        elif(dir[i] == 2):
            index[1]=i

else:
    for i in range(6):
        if(dir[i] == 2):
            index[0]=i
        elif(dir[i] == 4):
            index[1]=i

# 잘린 직사각형의 인덱스값 찾기
index[2] = (index[0]+2)%6
index[3] = (index[0]+3)%6

#값 구하기

ans = (length[index[0]]*length[index[1]]-length[index[2]]*length[index[3]])*N
print(ans)
