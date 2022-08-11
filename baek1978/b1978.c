#include <stdio.h>

int main()
{
	int N, n; // N은 수의 개수, n은 그 수를 저장
	int ans = 0;
	int i, k, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);
		if (n == 1)
			continue;
		else if (n % 2 == 0)
		{
			if (n / 2 == 1)
				ans++;
		}
		else
		{
			j = 0;
			while (1)
			{
				k = (j++) * 2 + 3;
				if ((n / k != 1) && (n % k == 0))
					break;
				else if (k == n)
				{
					ans++;
					break;
				}
			}
		}
	}

	printf("%d", ans);

	return 0;
}