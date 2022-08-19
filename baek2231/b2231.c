#include <stdio.h>
#include <math.h>

void resolution(int N);
int make(int N, int n);

int main()
{
	int N;
	scanf("%d", &N);
	resolution(N);

	return 0;
}

void resolution(int N)
{
	int ans = 0;
	int n;
	int k;

	for (int i = N - 1; i > -1; i--)
	{
		ans = N - i;
		k = ans;
		n = 0;
		while (1)
		{
			if (k / 10 == 0)
			{
				n += k % 10;
				break;
			}
			else
			{
				n += k % 10;
				k /= 10;
			}
		}
		if (N == ans + n)
			break;
		if (i == 0)
			ans = 0;
	
	}

	printf("%d", ans);
}
