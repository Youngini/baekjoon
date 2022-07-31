#include<stdio.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (C >= 60) 
	{
		A += C / 60;
		C = C % 60;

		if (B + C >= 60)
		{
			if (A >= 23)
				printf("%d %d", A - 23, B + C - 60);
			else
				printf("%d %d", A + 1, B + C - 60);
		}
		else
		{
			if (A > 23)
				printf("%d %d", A - 24, B + C);
			else
				printf("%d %d", A , B + C);
		}
	}
	else
	{
		if (B + C >= 60)
		{
			if (A == 23)
				printf("%d %d", 0, B + C - 60);
			else
				printf("%d %d", A + 1, B + C - 60);
		}
		else
		{
			if (A == 23)
				printf("%d %d", 0, B + C);
			else
				printf("%d %d", A , B + C);
		}
	}


	return 0;
}