#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i = 1;// 몇 번쩨 고리에 존재하는가 
			  //고리 수 = 지나가야하는 방 수
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