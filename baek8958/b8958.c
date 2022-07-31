#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	int length;
	int n = 0;
	char test[80];
	int score = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int j = 1;
		while (strcmp(test[j], '\0') != 0)
		{
			if (strcmp(test[j], 'O') == 0)
			{
				if (strcmp(test[j - 1], 'O') != 0)
				{
					n = 1;
					score += n;
				}
				else
				{
					score += (++n);
				}
			}
			
		}
	}


	printf("%s %d", test, length);

	return 0;
}