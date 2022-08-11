#include <stdio.h>

int main()
{
	int X, N; // 총 금액, 물건의 종류 수
	int a, b; // 각 물건의 가격 및 개수
	int ans = 0; // 영수증 총 금액과 일치하는지 확인

	scanf("%d %d", &X, &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		ans += a * b;
	}
	
	if (X == ans)
		printf("Yes");
	else
		printf("No");

	return 0;
}