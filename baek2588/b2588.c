#include<stdio.h>
#include<math.h>

int main()
{
	int A, B, C;
	scanf("%d %d", &A, &B);
	C = B;

	for (int i = 1; i < 4; i++)
	{
		printf("%d\n", A * (C % 10));
		C = B / pow(10,i);
	}
	printf("%d\n", A * B);

	return 0;
}