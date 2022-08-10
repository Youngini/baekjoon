#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T, k, n; // T는 test case의 수, k는 층 수, n은 호수
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int** apart; // 아파트 호수에 서는 사람 수 저장

		scanf("%d %d", &k, &n);

		apart = (int**)malloc(sizeof(int*) * (k + 1)); // 2차원 배열 동적할당
		
		for (int j = 0; j < k + 1; j++)
			apart[j] = (int*)malloc(sizeof(int) * (n + 1));

		for (int j = 1; j < n + 1; j++) // 0층 거주자 수
			apart[0][j] = j;

		for(int j = 1;j < k+1;j++) // 아파트 거주자 수 구하기
			for (int t = 1; t<n+1; t++)
			{
				if (t == 1)
					apart[j][1] = 1; // XX01호에는 무조건 1명이 살아서
				else
					apart[j][t] = apart[j - 1][t] + apart[j][t - 1];
			}

		printf("%d\n", apart[k][n]);
	}
	return 0;
}