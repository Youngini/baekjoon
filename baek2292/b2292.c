#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i = 1;// �� ���� ���� �����ϴ°� 
			  //�� �� = ���������ϴ� �� ��
	int k = 1;

	while (1)
	{
		k += i * 6;
		if (N == 1)
			break;
		else if (N <= k)
		{
			i++;
			break;
		}
		i++;
	}
	printf("%d", i);
	return 0;
}