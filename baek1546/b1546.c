#include<stdio.h>

int main()
{
	int N;
	int* grade;
	int max = 0;
	double mean = 0.0;
	scanf("%d", &N);
	grade = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &grade[i]);
		if (max < grade[i])
			max = grade[i];
	}

	for (int i = 0; i < N; i++)
	{
		mean += (double)grade[i] / max * 100;
	}
	mean /= N;
	printf("%f", mean);
	return 0;
}