#include <stdio.h>

int count(char** ary, int M, int N);
int compare(char** ary, int i, int j, char B);

int main()
{
	int M, N, ans; // ans�� ��

	scanf("%d %d", &M, &N);
	// ���ڿ� 2���� ���� �迭
	char** ary = (char**)malloc(sizeof(char*) * M); 
	for (int i = 0; i < M; i++)
		ary[i] = (char*)malloc(sizeof(char) * (N + 1));
	// ���ڿ� ����
	for (int i = 0; i < M; i++)
		scanf("%s", ary[i]);
	ans = count(ary, M, N);

	printf("%d", ans);

	return 0;
}

int count(char** ary, int M, int N)
{
	int ans = 33;
	int k;
	int r1, r2;
	

	for (int i = 0; i <= M - 8; i++) // 8�྿ ���Ѻ�����
		for (int j = 0; j <= N - 8; j++) // 8���� ���Ѻ�����
		{
			k = 0;
			// 8X8 �迭���� �������� ��� ���� ���ϱ�
			r1 = compare(ary, i, j, 'B');
			r2 = compare(ary, i, j, 'W');

			if (r1 > r2)
				k = r2;
			else
				k = r1;
			
			if (ans > k)
				ans = k;
		}

	return ans;
}
int compare(char** ary, int i, int j, char B)
{
	int k = 0;

	for (int a = i; a < i + 8; a++)
		for (int b = j; b < j + 8; b++)
		{
			if ((a % 2 == i % 2) && (b % 2 == j % 2)) // 8*8 ü���ǿ��� Ȧ����,Ȧ����
			{
				if (ary[a][b] != B)
					k++;
			}
			else if ((a % 2 == i % 2) && (b % 2 != j % 2)) // 8*8 ü���ǿ��� Ȧ����,¦����
			{
				if (ary[a][b] == B)
					k++;
			}
			else if ((a % 2 != i % 2) && (b % 2 == j % 2)) // 8*8 ü���ǿ��� ¦����,Ȧ����
			{
				if (ary[a][b] == B)
					k++;
			}
			else // 8*8 ü���ǿ��� ¦����,¦����
			{
				if (ary[a][b] != B)
					k++;
			}

		}


	return k;
}