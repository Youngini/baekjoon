#include <stdio.h>

int find_prime(int a);

int main()
{
	int T, n, a; // T는 test case 수, n은 짝수, a는 n의 절반인 수

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		a = n / 2;
		if (n == 4)
			printf("%d %d\n", 2, 2);
		else
			for (int j = (a / 2) * 2 + 1; j > 1; j -= 2)
			{
				if (find_prime(j) == 1)
				{
					if (find_prime(n - j) == 1)
					{
						if (j >= n - j)
							printf("%d %d\n", n - j, j);
						else
							printf("%d %d\n", j, n - j);
						break;
					}
				}
			}
		
	}
	return 0;
}

int find_prime(int a)
{
	int b = 1;
	for (int i = 3; i * i <= a; i+=2)
		if (a % i == 0)
		{
			b = 0;
			break;
		}
	return b;
}