#include<stdio.h>

int main()
{
	int N; // �־����� ��
	int x, y, z; // ���� �ڸ�, ���� �ڸ�, x+y
	int n; // ���� ���� ��
	int length = 1; // ����Ŭ ����
	scanf("%d", &N);

	x = N / 10; 
	y = N % 10;
	z = (x + y) % 10;
	n = y * 10 + z;

	while (N != n)
	{
		x = n / 10;
		y = n % 10;
		z = (x + y) % 10;
		n = y * 10 + z;
		length++;
	}

	printf("%d", length);
	return 0;

}