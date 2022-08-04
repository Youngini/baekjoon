#include<stdio.h>

int main()
{
	char string[15];
	scanf("%s", &string);
	int time = 0; // 걸린 시간
	int i = 0;
	while (string[i] != '\0') //문자 범위마다 시간 나눔
	{
		if ((int)string[i] < 68)
			time += 3;
		else if ((int)string[i] < 71)
			time += 4;
		else if ((int)string[i] < 74)
			time += 5;
		else if ((int)string[i] < 77)
			time += 6;
		else if ((int)string[i] < 80)
			time += 7;
		else if ((int)string[i] < 84)
			time += 8;
		else if ((int)string[i] < 87)
			time += 9;
		else
			time += 10;
		i++;
	}
	printf("%d", time);
	return 0;
}