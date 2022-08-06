#include<stdio.h>

int main() 
{
	int N;
	scanf("%d", &N);
	int a = 1; // 분자
	int b = 1; // 분모
	int n = 1; // 이동 수

	while (1)
	{
		if (n == N)
			break;
		if (a == 1)
		{

			if (b % 2 == 1)
			{
				b++;
				n++;
			}
			else
				while (b != 1)
				{
					if (n == N)
						break;
					b--;
					a++;
					n++;
				}
		}
		else if (b == 1)
		{
			if (a % 2 == 1)
				while (a != 1)
				{
					if (n == N)
						break;
					b++;
					a--;
					n++;
				}
			else
			{
				a++;
				n++;
			}
		}

	}
	printf("%d/%d", a, b);
	return 0;
}