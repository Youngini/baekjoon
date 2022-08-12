#include <stdio.h>

int find_prime(int n); // 소수 맞으면 1, 아니면 0

int main()
{
	int M, N;
	int sum = 0;
	int min;
	scanf("%d %d", &M, &N);

	for (int i = M; i < N + 1; i++)
	{
		if (find_prime(i) == 0)
		{
			if (sum == 0)
				min = i;
			sum += i;
		}
	}

	if (sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, min);

	return 0;
}

int find_prime(int n)
{
	int b = 0;

	if (n == 1)
		b = 1;
	else
		for (int i = 2; i < n; i++)
			if (n % i == 0)
				b = 1;
			
	return b;
}