#include<stdio.h>
int find_cro(int n); // 크로아티아 알파벳 확인
char* string;
int main()
{
	string = malloc(sizeof(char) * 100);
	scanf("%s", string);
	int i = 0;
	int count = 0;
	while (string[i] != '\0')
	{
		i = find_cro(i);
		count++; // 크로아티아 알파벳 카운팅
		i++;
	}
	printf("%d", count);
	return 0;
}

int find_cro(int n)
{
	int index = n;
	if ((string[n] == 'c') && (string[n + 1] == '=' || string[n + 1] == '-'))
		index++;
	else if (string[n] == 'd')
	{
		if ((string[n + 1] == 'z') && (string[n + 2] == '='))
			index += 2;
		else if (string[n + 1] == '-')
			index++;
	}
	else if ((string[n] == 'l') && (string[n + 1] == 'j'))
		index++;
	else if ((string[n] == 'n') && (string[n + 1] == 'j'))
		index++;
	else if (((string[n] == 's') || (string[n] == 'z')) && (string[n + 1] == '='))
		index++;

	return index;
}