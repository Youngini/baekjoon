#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	while (1)
	{
		if (N == 1)
			break;
		else
			for (int i = 2; i < N + 1; i++)
			{
				if (N % i == 0)
				{
					printf("%d\n", i);
					N /= i;
					break;	
				}
			}
	}
	return 0;
}