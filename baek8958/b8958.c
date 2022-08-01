#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	int n, j, score; // n은 O 갯수에 따른 점수, j는 문자열의 인덱스, score은 총점
	char test[80];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		j = 0;
		n = 0;
		score = 0;
		scanf("%s", &test);
		while (test[j]!='\0') // 문자열 끝엔 무조건 '\0'이 들어감
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