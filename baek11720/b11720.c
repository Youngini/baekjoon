#include<stdio.h>

int main()
{
	int N;
	char string[100];
	int ans = 0;
	scanf("%d", &N);
	scanf("%s", &string);

	for (int i = 0; i < N; i++)
		ans += string[i] - 48; // 0�� �ƽ�Ű �ڵ� 48

	printf("%d", ans);
	return 0;
}