#include<stdio.h>

int main()
{
	int N; // 테스트 케이스 개수
	int R; // 반복 횟수
	char S[20];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &R);
		scanf("%s", &S);
		int j = 0;
		while (S[j] != '\0') // 문자열 끝은 항상 '\0'
		{
			for (int k = 0; k < R; k++) // 문자 R만큼 반복
				printf("%c", S[j]);
			j++;
		}
		printf("\n");
	}

	return 0;
}