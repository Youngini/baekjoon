#include<stdio.h>
#include<math.h> // �ŵ����� �Լ� pow ������

int main()
{
	int n1, n2; // ������ ��
	scanf("%d %d", &n1, &n2);
	int k1, k2; // �� �ڸ��� ���� �� ���
	int max; // �� ū ��
	int ans = 0; // ��� ���
	k1 = n1;
	k2 = n2;
	for (int i = 0; i < 3; i++)
	{
		if ((k1 % 10) > (k2 % 10))
		{
			max = n1;
			break;
		}
		else if ((k2 % 10) > (k1 % 10))
		{
			max = n2;
			break;
		}
		k1 /= 10;
		k2 /= 10;;
	}
	for (int i = 2; i > -1; i--)
	{
		ans += (max % 10) * pow(10,i);
		max /= 10;
	}
	printf("%d", ans);

	return 0;
}