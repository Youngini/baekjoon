#include <stdio.h>

int find(int N); // N번째 종말의 숫자 찾기

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", find(N));
	return 0;
}

int find(int N)
{
	int ans = 666; // N번째 작은 종말의 숫자
	// p는 ans값,q는 p를 10으로 나눈 나머지
	// r은 6의 연속성 구하려고 사용,max는 6이 연속한 최대 횟수
	// k는 몇번째 종말의 숫자인지 나타냄, c는 6이 연속한 횟수
	int p, q, r = 6, max, k = 1, c;


	while (k != N)
	{
		p = ++ans;
		max = 0, c = 0;

		while (1)
		{
			q = p % 10;
			p = p / 10;

			// 6 연속성 구하기
			if (q == r)
				c++;
			else
				c = 0;

			if (max < c)
				max = c;
			if ((p % 10 == 0) && (p / 10 == 0))
				break;
		}
		if (max > 2)
			k++;
	}
	return ans;
}