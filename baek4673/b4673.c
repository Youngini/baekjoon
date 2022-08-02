#include<stdio.h>

int n[10001] = { 0, }; // 셀프 넘버인지 아닌지 확인하기위한 배열
void self_num(int k);

int main()
{
	for (int i = 1; i < 10001; i++)
	{
		if (n[i] == 0) // 셀프 넘버라면
			self_num(i); // 셀프 넘버 아닌 수 찾기
	}

	for (int i = 1; i < 10001; i++)
	{
		if (n[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}

void self_num(int k) // 셀프 넘버 아닌 수 찾기
{
	int a; // 각 자리수 구하기 위해
	while (k < 10001)
	{
		a = k;
		while (a != 0) // 각 자리수 더하기
		{
			k += (a % 10);
			a /= 10;
		}
		if (n[k] == 1) // 앞에 한번 나왔던 수라면 계산할 필요 없어서
			break;
		else
			n[k] = 1; // 셀프 넘버 아님 표시
	}
}