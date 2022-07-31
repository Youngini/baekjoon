#include<stdio.h>

int main()
{
	int n, ans;
	ans = 0;
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++)
		ans += i;
	printf("%d", ans);
	return 0;
}