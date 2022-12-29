import sys
N = int(sys.stdin.readline())
tri = [[int(x) for x in sys.stdin.readline().split()] for _ in range(N)]
dp = [[0 for _ in range(i)] for i in range(1,N+1)]
dp[0][0] = tri[0][0]

for i in range(1,N):
    for j in range(i+1):
        if(j==0):
            dp[i][j]=tri[i][j]+dp[i-1][j]
        elif(j == i):
            dp[i][j]=tri[i][j]+dp[i-1][j-1]
        else:
            dp[i][j]=tri[i][j]+max(dp[i-1][j-1],dp[i-1][j])

print(max(dp[N-1]))