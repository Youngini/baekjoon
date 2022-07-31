#include<stdio.h>

int main()
{
	int n[9]; // 서로다른 9개의 자연수 주어짐
	int max; // 최댓값
	int index; // 최댓값이 존재하는 인덱스 번호
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}
	max = n[0];
	index = 0;
	for (int i = 1; i < 9; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d", index + 1); // index는 0부터 시작하니까 +1 해주기
	return 0;
}