#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N; // ���� ����
	int min, max; // �ּ�, �ִ�
	scanf("%d", &N);
	int* x; // 1���� �迭
	x = malloc(sizeof(x)*N); // ���� �Ҵ�

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}
	min = x[0];
	max = x[0];

	for (int i = 1; i < N; i++)
	{
		if (x[i] < min) // �ּ� ���ϱ�
			min = x[i];
		if (x[i] > max) // �ִ� ���ϱ�
			max = x[i];
	}

	printf("%d %d", min, max);
	

	return 0;
}