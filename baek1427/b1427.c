#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t)(t=x,x=y,y=t)

int sort(int* ary, int N);
void print(int* ary, int N);

int main()
{
	int N;
	scanf("%d", &N);
	int n = N;
	int k = 0;
	int* ary = malloc(sizeof(int) * 10);
	while (1)
	{
		if (n == 0)
			break;
		ary[k++] = n % 10;
		n /= 10;
	}
	ary = sort(ary, k);
	print(ary, k);
	return 0;
}
int sort(int* ary, int N)
{
	int t;
	for (int i = 0; i < N; i++)
		for (int j = 1; j < N - i; j++)
			if (ary[j - 1] < ary[j])
				SWAP(ary[j - 1], ary[j], t);
	return ary;
}
void print(int* ary, int N)
{
	for (int i = 0; i < N; i++)
		printf("%d", ary[i]);
}