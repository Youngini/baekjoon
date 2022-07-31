#include<stdio.h>

int main()
{
	int N; // 주어지는 수
	int x, y, z; // 십의 자리, 일의 자리, x+y
	int n; // 새로 만든 수
	int length = 1; // 사이클 길이
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