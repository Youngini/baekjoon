#include<stdio.h>

int main()
{
	int C; // �׽�Ʈ ���̽� ��
	int* N; // �� �׽�Ʈ ���̽��� �л� ��
	int* test; // �׽�Ʈ�� �л����� ����
	int* mean; // �� �׽�Ʈ�� ���� ���
	int* n; // �� �׽�Ʈ�� ����� �Ѵ� �л� ��

	scanf("%d", &C);
	N = malloc(sizeof(int) * C);
	mean = malloc(sizeof(int) * C);
	n = malloc(sizeof(int) * C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N[i]);
		test = malloc(sizeof(int) * N[i]);
		mean[i] = 0;
		n[i] = 0;
		for (int j = 0; j < N[i]; j++)
		{
			scanf("%d", &test[j]);
			mean[i] += test[j];
		}
		mean[i] /= N[i];
		for (int j = 0; j < N[i]; j++)
		{
			if (mean[i] < test[j])
				n[i]++;
		}
		free(test);
	}

	for(int i=0;i<C;i++)
		printf("%.3f%%\n", (double)n[i] / N[i] * 100);
	// %��ȣ ����Ϸ��� \��¶�ó�� �ι��ؾ���

	free(N);
	free(mean);
	free(n);
	return 0;
}