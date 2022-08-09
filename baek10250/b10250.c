#include <stdio.h>

int main()
{
	int T, H, W, N;
	scanf("%d", &T);
	int a, b;// a는 층 수, b는 호 수
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0)
		{
			a = H;
			b = N / H;
		}
		else
		{
			a = N % H;
			b = N / H + 1;
		}

		if (b < 10)
			printf("%d0%d\n", a, b);
		else
			printf("%d%d\n", a, b);

	}
	return 0;
}

