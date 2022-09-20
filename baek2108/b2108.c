#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t)(t = x,x=y,y=t)

void mean(int* ary, int N);
void middle(int* ary, int N);
void mode(int* ary, int N);
void range(int* ary, int N);

int main()
{
	int N;
	scanf("%d", &N);
	int* ary = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &ary[0]);

	mean(ary, N);
	middle(ary, N);
	mode(ary, N);
	range(ary, N);

	return 0;
}

void mean(int* ary, int N)
{
	int m = 0;
	for (int i = 0; i < N; i++)
		m += ary[i];
	m = ((double)m / N + 0.5);
	printf("%d\n", m);
}
void middle(int* ary, int N)
{
	

}
void mode(int* ary, int N);
void range(int* ary, int N);