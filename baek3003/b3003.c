#include <stdio.h>

int main()
{
	int N[6]; // ��� ŷ, ��, ��, ���, ����Ʈ, ���� ����
	int ans[] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &N[i]);
		printf("%d ", ans[i] - N[i]);
	}

	return 0;
}