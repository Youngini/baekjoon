#include<stdio.h>

int main()
{
	int n[10] = { 0, }; // 0~9까지 숫자 몇번 쓰였는지 기록하기위한 배열,0으로 초기화
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C); 
	int x = A * B * C;
	int i, j;
	for (i = 0; i < 10; i++) // 각 자리수 숫자 구하려고
	{
		for(j = 0; j < 10; j++) //  각 자리수 숫자 사용 횟수 카운팅
			if (j == x % 10)
			{
				n[j]++;
				break; // 숫자 카운트 되면 break
			}
		if ((x /= 10) == 0) // 숫자 자릿수 넘어가게 카운팅 안하도록
			break;
	}
	
	for (i = 0; i < 10; i++)
		printf("%d\n", n[i]);

	
	return 0;
}