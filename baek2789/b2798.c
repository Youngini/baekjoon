#include <stdio.h>
#define SWAP(t,x,y)(t = x, y = x, y = t)

void blackjack(int* n, int N, int M);

int main()
{
	int N, M;
	int t;
	int* n;
	scanf("%d %d", &N, &M);
	n = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &n[i]);
	
	blackjack(n, N, M);
	
	return 0;
}

void blackjack(int* n, int N, int M)
{
	int ans;
	int max = 0;

	for (int i = N - 1; i > -1; i--)
		for (int j = N - 1; j > -1; j--)
			for (int k = N - 1; k > -1; k--)
			{
				if ((i != j) && (j != k) && (k != i))
				{
					ans = n[i] + n[j] + n[k];

					if ((ans <= M) && (ans > max))
						max = ans;
				}
			}
				
	printf("%d", max);
}