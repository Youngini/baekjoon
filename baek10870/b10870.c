#include <stdio.h>

int Fibo(int n);

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", Fibo(n));

	return 0;
}
int Fibo(int n)
{
	int ans;
	if (n == 0)
		ans = 0;
	else if (n < 3)
		ans = 1;
	else
		ans = Fibo(n - 1) + Fibo(n - 2);

	return ans;
}