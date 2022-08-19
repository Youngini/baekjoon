#include <stdio.h>
#define SWAP(t,x,y)(t=x,x=y,y=t)

int sorting(int* n, int N);
void print(int* n, int N);

int main()
{
	int N;
	int* n;
	scanf("%d", &N);
	n = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &n[i]);

	n = sorting(n,N);
	print(n, N);

}

int sorting(int* n, int N)
{
	int t;

	for (int i = 0; i < N; i++)
		for (int j = 1; j < N - i; j++)
		{
			if (n[j - 1] > n[j])
				SWAP(t, n[j - 1], n[j]);
		}

	return n;
}

void print(int* n, int N)
{
	for (int i = 0; i < N; i++)
		printf("%d\n", n[i]);
}