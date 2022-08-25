#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	// 2차원배열 동적할당 몸무게,키,덩치 등수 표시
	int** data = (int*)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++)
		data[i] = malloc(sizeof(int) * 3);

	// 데이터 넣기
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &data[i][0], &data[i][1]);
		data[i][2] = 1;
	}

	// 등수 표시
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if ((data[i][0] < data[j][0]) && (data[i][1] < data[j][1]))
				data[i][2]++;

	// 등수 프린트
	for (int i = 0; i < N; i++)
		printf("%d ", data[i][2]);

	return 0;
}