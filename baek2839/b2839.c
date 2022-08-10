#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N; // 킬로그램
	int ans = 0; // 가져가야하는 봉지 수
	int r; // 나머지
	scanf("%d", &N);
	
	if (N % 5 == 0)
		ans = N / 5;
	else
	{
		ans = N / 5;
		r = N % 5;
		if (r % 3 == 0)
			ans += 1;
		else
			while (1)
			{
				ans--;
				r += 5;
				if (ans == -1)
					break;
				if (r % 3 == 0)
				{
					ans += r / 3;
					break;
				}
			}

	}
	printf("%d", ans);
}
