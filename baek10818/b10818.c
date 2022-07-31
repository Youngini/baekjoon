#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N; // 정수 개수
	int min, max; // 최소, 최대
	scanf("%d", &N);
	int* x; // 1차원 배열
	x = malloc(sizeof(x)*N); // 동적 할당

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}
	min = x[0];
	max = x[0];

	for (int i = 1; i < N; i++)
	{
		if (x[i] < min) // 최소 구하기
			min = x[i];
		if (x[i] > max) // 최대 구하기
			max = x[i];
	}

	printf("%d %d", min, max);
	

	return 0;
}