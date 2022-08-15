#include <stdio.h>


void factorial(int n,int a);

int main()
{
	int N; 
	scanf("%d", &N);
	factorial(N, N - 1);
	return 0;
}

void factorial(int n, int a)
{
	if (a > 1)
	{
		n *= a;
		factorial(n, a - 1);

	}
	else if (a == 1)
		printf("%d", n);
	else
		printf("%d", 1);
}