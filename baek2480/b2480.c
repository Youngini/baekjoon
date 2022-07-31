#include<stdio.h>

int main()
{
	int x, y, z;
	int max;
	scanf("%d %d %d", &x, &y, &z);

	if ((x == y) && (y == z))
		printf("%d", 10000 + 1000 * x);
	else if (x == y)
		printf("%d", 1000 + 100 * x);
	else if(y == z)
		printf("%d", 1000 + 100 * y);
	else if(z == x)
		printf("%d", 1000 + 100 * x);
	else
	{
		max = x;
		if (max < y)
			max = y;
		if (max < z)
			max = z;
		printf("%d", 100 * max);
	}
	return 0;
}