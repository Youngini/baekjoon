#include<stdio.h>

int main()
{
	int n[9]; // ���δٸ� 9���� �ڿ��� �־���
	int max; // �ִ�
	int index; // �ִ��� �����ϴ� �ε��� ��ȣ
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}
	max = n[0];
	index = 0;
	for (int i = 1; i < 9; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			index = i;
		}
	}

	printf("%d\n", max);
	printf("%d", index + 1); // index�� 0���� �����ϴϱ� +1 ���ֱ�
	return 0;
}