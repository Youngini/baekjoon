#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	int n, j, score; // n�� O ������ ���� ����, j�� ���ڿ��� �ε���, score�� ����
	char test[80];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		j = 0;
		n = 0;
		score = 0;
		scanf("%s", &test);
		while (test[j]!='\0') // ���ڿ� ���� ������ '\0'�� ��
		{
			if (test[j] == 'O')
				score += (++n);
			else
				n = 0;
			j++;
		}
		printf("%d\n", score);
		
	}
	return 0;
}