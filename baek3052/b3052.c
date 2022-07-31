#include<stdio.h>

int main()
{
	int n[42] = { 0, };// 0~41까지 나머지 중 출력된 나머지 값 표시 
	int x = 0; // 서로 다른 나머지 갯수 
	int A; // 값 대입

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &A);
		for (int j = 0; j < 42; j++)
		{
			if ((j == A % 42) && (n[j] == 0)) // 새로운 나머지값일 경우에만 카운팅
			{
				n[j] = 1; // 나머지 값 j 나왔음을 표시
				x++;
				break;
			}
		}
	}

	printf("%d", x);
	return 0;
}