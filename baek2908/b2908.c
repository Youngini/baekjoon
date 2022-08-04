#include<stdio.h>
#include<math.h> // 거듭제곱 함수 pow 쓰려구

int main()
{
	int n1, n2; // 대입할 수
	scanf("%d %d", &n1, &n2);
	int k1, k2; // 각 자리수 비교할 때 사용
	int max; // 더 큰 수
	int ans = 0; // 상수 대답
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