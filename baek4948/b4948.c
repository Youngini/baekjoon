#include <stdio.h>
#include <math.h>

int find_prime(int n);

int main()
{
	int n; // 대입 받을 수
	int ans;
	scanf("%d", &n);
	while (n != 0)
	{
		ans = 0;
		if (n <= 2)
			ans = 1;
		else
			for (int i = ((n + 1) / 2) * 2 + 1; i < 2 * n; i += 2)
				if (find_prime(i) == 1)
					ans++;
			
		printf("%d\n", ans);
				
		scanf("%d", &n);
	}
	return 0;
}

int find_prime(int n)
{
	int b = 1;
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
		{
			b = 0;
			break;
		}
	}
	return b;

}