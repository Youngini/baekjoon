#include<stdio.h>

int n[10001] = { 0, }; // ���� �ѹ����� �ƴ��� Ȯ���ϱ����� �迭
void self_num(int k);

int main()
{
	for (int i = 1; i < 10001; i++)
	{
		if (n[i] == 0) // ���� �ѹ����
			self_num(i); // ���� �ѹ� �ƴ� �� ã��
	}

	for (int i = 1; i < 10001; i++)
	{
		if (n[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}

void self_num(int k) // ���� �ѹ� �ƴ� �� ã��
{
	int a; // �� �ڸ��� ���ϱ� ����
	while (k < 10001)
	{
		a = k;
		while (a != 0) // �� �ڸ��� ���ϱ�
		{
			k += (a % 10);
			a /= 10;
		}
		if (n[k] == 1) // �տ� �ѹ� ���Դ� ����� ����� �ʿ� ���
			break;
		else
			n[k] = 1; // ���� �ѹ� �ƴ� ǥ��
	}
}