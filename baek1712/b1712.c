#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c; // a�� ���� ��� b�� ���� ��� c�� �Ǹź��
	int n; // ��
	scanf("%d %d %d", &a, &b, &c);

	if (b >= c) // a / (c - b)�� c-b=0�� ��츦 ����
		n = -1;
	else
		n = ceil(a / (c - b) + 0.5); // �ø�

	printf("%d", n);

	return 0;
}