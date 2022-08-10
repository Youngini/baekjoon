#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T, k, n; // T�� test case�� ��, k�� �� ��, n�� ȣ��
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int** apart; // ����Ʈ ȣ���� ���� ��� �� ����

		scanf("%d %d", &k, &n);

		apart = (int**)malloc(sizeof(int*) * (k + 1)); // 2���� �迭 �����Ҵ�
		
		for (int j = 0; j < k + 1; j++)
			apart[j] = (int*)malloc(sizeof(int) * (n + 1));

		for (int j = 1; j < n + 1; j++) // 0�� ������ ��
			apart[0][j] = j;

		for(int j = 1;j < k+1;j++) // ����Ʈ ������ �� ���ϱ�
			for (int t = 1; t<n+1; t++)
			{
				if (t == 1)
					apart[j][1] = 1; // XX01ȣ���� ������ 1���� ��Ƽ�
				else
					apart[j][t] = apart[j - 1][t] + apart[j][t - 1];
			}

		printf("%d\n", apart[k][n]);
	}
	return 0;
}