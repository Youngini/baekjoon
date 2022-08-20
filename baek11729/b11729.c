#include <stdio.h>
#include  <math.h>

void hanoi(int N, int s, int v, int e);
// N은 옮겨야하는 원판 수, s는 시작점, v는 통로, e는 도착지

int main()
{
	int N;
	int n = 0; // 옮긴 횟수
	scanf("%d", &N);
	n = pow(2, N) - 1;
	printf("%d\n", n);

	hanoi(N, 1, 2, 3);

	return 0;
}

void hanoi(int N, int s, int v, int e)
{
	if (N == 1)
		printf("%d %d\n", s, e);
	else
	{
		hanoi(N - 1, s, e, v);
		printf("%d %d\n", s, e);
		hanoi(N - 1, v, s, e);
	}
}