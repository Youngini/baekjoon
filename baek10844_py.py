import sys
N = int(sys.stdin.readline())
dp = [[0 for _ in range(10)] for _ in range(N)]
ans = 0
for i in range(1,10):
    dp[0][i] = 1

for i in range(1,N):
    for j in range(10):
        if(j == 0):
            dp[i][j] = dp[i-1][j+1] # 끝자리가 0이면 1밖에 못붙임
        elif(j == 9):
            dp[i][j] = dp[i-1][j-1] # 끝자리가 9일때 8이 붙는 경우
        else:
            dp[i][j] = dp[i-1][j+1] + dp[i-1][j-1]

for i in range(10):
    ans+=dp[N-1][i]

print(ans%1000000000)