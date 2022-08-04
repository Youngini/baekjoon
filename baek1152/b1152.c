#include <stdio.h>

int main()
{
	char string[1000000];
	int n = 0;
	while (scanf("%s", &string) != EOF) // 문자 입력이 끝나면 while문 정지
		n++;
	printf("%d", n);

	return 0;
}