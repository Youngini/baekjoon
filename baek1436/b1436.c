#include <stdio.h>

int find(int N); // N��° ������ ���� ã��

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", find(N));
	return 0;
}

int find(int N)
{
	int ans = 666; // N��° ���� ������ ����
	// p�� ans��,q�� p�� 10���� ���� ������
	// r�� 6�� ���Ӽ� ���Ϸ��� ���,max�� 6�� ������ �ִ� Ƚ��
	// k�� ���° ������ �������� ��Ÿ��, c�� 6�� ������ Ƚ��
	int p, q, r = 6, max, k = 1, c;


	while (k != N)
	{
		p = ++ans;
		max = 0, c = 0;

		while (1)
		{
			q = p % 10;
			p = p / 10;

			// 6 ���Ӽ� ���ϱ�
			if (q == r)
				c++;
			else
				c = 0;

			if (max < c)
				max = c;
			if ((p % 10 == 0) && (p / 10 == 0))
				break;
		}
		if (max > 2)
			k++;
	}
	return ans;
}