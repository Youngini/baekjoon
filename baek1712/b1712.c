#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c; // a는 고정 비용 b는 가변 비용 c는 판매비용
	int n; // 답
	scanf("%d %d %d", &a, &b, &c);

	if (b >= c) // a / (c - b)시 c-b=0인 경우를 제외
		n = -1;
	else
		n = ceil(a / (c - b) + 0.5); // 올림

	printf("%d", n);

	return 0;
}