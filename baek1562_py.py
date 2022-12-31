import sys
N = int(sys.stdin.readline())
dp = [[[0 for _ in range(2**10)] for _ in range(10) ] for _ in range(N)]
dp[0][0][0] = 0

for i in range(1,10):
    dp[0][i][2**i]+=1

for i in range(1,N):
    for j in range(10):
        if(i == 1 and j == 1):
            for k in range(2**10):
                if(dp[i-1][j+1][k]!=0):
                    a = k|2**j
                    dp[i][j][a] += dp[i-1][j+1][k]

        elif(j == 0):
            for k in range(2**10):
                if(dp[i-1][j+1][k]!=0):
                    a = k|2**j
                    dp[i][j][a] += dp[i-1][j+1][k]

        elif(j == 9):
            for k in range(2**10):
                if(dp[i-1][j-1][k]!=0):
                    a = k|2**j
                    dp[i][j][a] += dp[i-1][j-1][k]

        else:
            for k in range(2**10):
                if(dp[i-1][j-1][k]!=0):
                    a = k|2**j
                    dp[i][j][a] += dp[i-1][j-1][k]

                if(dp[i-1][j+1][k]!=0):
                    a = k|2**j
                    dp[i][j][a] += dp[i-1][j+1][k]

ans = 0

for i in range(10):
    ans+=dp[N-1][i][1023]

print(ans%1000000000)