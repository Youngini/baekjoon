#include<stdio.h>

int count(int N);

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", count(N));
	return 0;
}

int count(int N)
{
	int ans;
	int k[4];

	if (N < 100) // 세자리수 미만의 수는 모두 등차수열 이룸
		ans = N;
	else
	{
		ans = 99;
		for (int i = 100; i < N + 1; i++)
		{
			int a = i;
			int j = 0;
			while (a != 0)
			{
				k[j++] = a % 10;
				a /= 10;
			}
			if (j == 3) // 3자리 수 자연수
			{
				if (k[1] * 2 == (k[0] + k[2]))
					ans++;
			}
			else // 1000때문에 만들었다! 이거 아니었으면 훨씬 짧았는데,,,
			{
				if ((k[0] + k[3]) == (k[1] + k[2]))
					ans++;
			}
		}
	}
	
	return ans;
}