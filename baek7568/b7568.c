#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	// 2�����迭 �����Ҵ� ������,Ű,��ġ ��� ǥ��
	int** data = (int*)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++)
		data[i] = malloc(sizeof(int) * 3);

	// ������ �ֱ�
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &data[i][0], &data[i][1]);
		data[i][2] = 1;
	}

	// ��� ǥ��
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if ((data[i][0] < data[j][0]) && (data[i][1] < data[j][1]))
				data[i][2]++;

	// ��� ����Ʈ
	for (int i = 0; i < N; i++)
		printf("%d ", data[i][2]);

	return 0;
}