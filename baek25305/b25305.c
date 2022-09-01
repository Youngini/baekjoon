#include <stdio.h>
#define SWAP(x,y,t)(t=x,x=y,y=t)
int sort(int* grade, int N);

int main()
{
	int N, k; // 응시자 수, 상 받는 사람 수
	scanf("%d %d", &N, &k);
	int* grade = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) // 성적 입력
		scanf("%d", &grade[i]);

	grade = sort(grade, N);

	printf("%d", grade[k - 1]);
	
	return 0;
}

int sort(int* grade, int N)
{
	int t;
	for(int i=0;i<N;i++)
		for (int j = 1; j < N - i; j++)
		{
			if (grade[j - 1] < grade[j])
				SWAP(grade[j - 1], grade[j], t);
		}

	return grade;
}
