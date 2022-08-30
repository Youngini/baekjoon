#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 10
#define MALLOC(p,s)\
		if(!((p) = malloc(s))){\
			fprintf(stderr,"Insufficient Memory");\
			exit(EXIT_FAILURE);}

typedef struct queue* queuePointer;
typedef struct queue {
	int n;
	queuePointer link;
}queue;

queuePointer front[max], rear[max]; // 양수들 저장

void add(int i, int n);
int delete(int i);
int queueEmpty();
void queueFull();

queuePointer makeQ(int n);

int radix_sort(int N, int* ary, int k);
int put(int N, int* ary);

void print(int N, int* ary);

int main()
{
	int N, M = 0; // N은 개수, M은 최대값 
	int k = 0; // k는 최대 자리 수
	scanf("%d", &N);
	int* ary = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ary[i]);
		if (ary[i] > M)
			M = ary[i];
	}

	while (M != 0)
	{
		M /= 10;
		k++;
	}
	
	ary = radix_sort(N, ary, k);
	print(N, ary);

	return 0;
}

void add(int i, int n)
{
	queuePointer temp = makeQ(n);

	if (front[i])
		rear[i]->link = temp;
	else
		front[i] = temp;
	rear[i] = temp;

}
int delete(int i)
{
	int n;
	queuePointer temp = front[i];
	if (!temp)
		return queueEmpty();

	front[i] = temp->link;
	return temp->n;
}
int queueEmpty()
{
	printf("queue is Empty\n");
}
void queueFull()
{
	printf("queue is full\n");
}

queuePointer makeQ(int n)
{
	queuePointer temp;
	MALLOC(temp, sizeof(*temp));
	temp->n = n;
	temp->link = NULL;

	return temp;
}

int radix_sort(int N, int* ary, int k)
{
	int index; // front랑 rear 몇번째 인덱스에 들어갈지
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int a = pow(10, i + 1);
			int b = pow(10, i);
			index = (ary[j] % a) / b;

			add(index, ary[j]);
		}
		ary = put(N, ary);
	}
	return ary;
}
int put(int N, int* ary)
{
	queuePointer temp;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		while (1)
		{
			temp = front[i];
			if (!temp)
				break;
			else
			{
				ary[j++] = temp->n;
				front[i] = temp->link;
			}
		}
	}
	return ary;
}

void print(int N, int* ary)
{
	for (int i = 0; i < N; i++)
		printf("%d\n", ary[i]);
}


