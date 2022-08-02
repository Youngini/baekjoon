#include<stdio.h>

long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i];
	return ans;
}

int main()
{
	int n;
	scanf("%d", &n);
	int* a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d", sum(a, n));
	
	return 0;
}

