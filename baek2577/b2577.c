#include<stdio.h>

int main()
{
	int n[10] = { 0, }; // 0~9���� ���� ��� �������� ����ϱ����� �迭,0���� �ʱ�ȭ
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C); 
	int x = A * B * C;
	int i, j;
	for (i = 0; i < 10; i++) // �� �ڸ��� ���� ���Ϸ���
	{
		for(j = 0; j < 10; j++) //  �� �ڸ��� ���� ��� Ƚ�� ī����
			if (j == x % 10)
			{
				n[j]++;
				break; // ���� ī��Ʈ �Ǹ� break
			}
		if ((x /= 10) == 0) // ���� �ڸ��� �Ѿ�� ī���� ���ϵ���
			break;
	}
	
	for (i = 0; i < 10; i++)
		printf("%d\n", n[i]);

	
	return 0;
}