import sys
N = int(sys.stdin.readline())
cost = [[int(x) for x in sys.stdin.readline().split()] for _ in range(N)]
dp = [[0 for _ in range(3)] for _ in range(N)]
dp[0] = cost[0]

for i in range(0,N):
    for j in range(3):
        if j==0:
            dp[i][j] = min(dp[i-1][1],dp[i-1][2]) + cost[i][j]
        elif j==1:
            dp[i][j] = min(dp[i-1][0],dp[i-1][2]) + cost[i][j]
        else:
            dp[i][j] = min(dp[i-1][0],dp[i-1][1]) + cost[i][j]

print(min(dp[N-1]))