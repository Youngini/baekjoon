#include <stdio.h>
#include <math.h>

int find_prime(int n); // 소수면 1 아니면 0

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	if (M <= 2)
	{
		printf("%d\n", 2);
		for (int i = 3; i < N + 1; i += 2)
			if (find_prime(i) == 1)
				printf("%d\n", i);
	}
	else
	{
		for (int i = (M / 2) * 2 + 1; i < N + 1; i += 2)
			if (find_prime(i) == 1)
				printf("%d\n", i);
		
	}
	
	return 0;
}

int find_prime(int n)
{
	int b = 1;

	if (n == 1)
		b = 0;
	else
		for (int i = 3; i <= sqrt(n); i++)
			if (n % i == 0)
			{
				b = 0;
				break;
			}
	return b;

}