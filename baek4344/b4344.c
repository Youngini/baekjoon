#include<stdio.h>

int main()
{
	int C; // 테스트 케이스 수
	int* N; // 각 테스트 케이스의 학생 수
	int* test; // 테스트의 학생들의 점수
	int* mean; // 각 테스트의 점수 평균
	int* n; // 각 테스트의 평균을 넘는 학생 수

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
	// %기호 출력하려면 \출력때처럼 두번해야함

	free(N);
	free(mean);
	free(n);
	return 0;
}