#include <stdio.h>

int main()
{
	char string[1000000];
	int n = 0;
	while (scanf("%s", &string) != EOF)
		n++;
	printf("%d", n);

	return 0;
}