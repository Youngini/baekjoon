#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t)(t=x,x=y,y=t)

int* ary;
void quicksort(int left, int right);
void print(int N);

int main()
{
	int N, k; // k´Â ·£´ý ¼ö
	scanf("%d", &N);
	ary = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		k = rand() % N;
		scanf("%d", &ary[i]);
	}

	quicksort(0, N);

	print(N);

	return 0;
}

void quicksort(int left, int right)
{
	int pivot, i, j, t;
	
	if (left < right)
	{
		pivot = ary[left];
		i = left, j = right;
		do
		{
			do i++; while ((ary[i] < pivot) && (i < right));
			do j--; while ((ary[j] > pivot) && (j > -1));
			if (i < j) SWAP(ary[i], ary[j], t);

		} while (i < j);
		SWAP(ary[left], ary[j], t);
		quicksort(left, j);
		quicksort(j + 1, right);
	}
}
void print(int N)
{
	for (int i = 0; i < N; i++)
		printf("%d\n", ary[i]);
}