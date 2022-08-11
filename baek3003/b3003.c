#include <stdio.h>

int main()
{
	int N[6]; // Èò»ö Å·, Äı, ·è, ºñ¼ó, ³ªÀÌÆ®, ÆùÀÇ °³¼ö
	int ans[] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &N[i]);
		printf("%d ", ans[i] - N[i]);
	}

	return 0;
}