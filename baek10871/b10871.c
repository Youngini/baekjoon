#include<stdio.h>

int main()
{
	int N, x, y;
	scanf("%d %d", &N, &x);

	for (int i = 0; i < N; i++)
	{
		scanf(" %d", &y);
		if (x > y)
			printf("%d ", y);
	}
	return 0;
}