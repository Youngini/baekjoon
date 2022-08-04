#include<stdio.h>

int main()
{
	char* string; //문자열 저장
	string = malloc(sizeof(char) * 1000000); // 메모리 낭비하기 싫어서 동적 할당
	scanf("%s", string);

	int n[26] = { 0, }; // 알파벳 A~Z까지 사용 빈도 표시
	int max = 0; // 문자 최대 사용 빈도 수 
	int index; // 최대 사용 문자의 인덱스 저장
	int i = 0;
	int t = 0; // 같은 빈도인 수 검사

	while (string[i] != '\0')
	{
		int k = (int)string[i];
		if (k >= 97)
			k -= 97;
		else
			k -= 65;
		n[k]++;
		if (max < n[k]) // 최대 빈도 수 구하기
			max = n[k];
		i++;
	}

	for (i = 0; i < 26; i++) // 같은 빈도인 문자 검사!
		if (max == n[i])
		{
			t++;
			index = i;
		}

	if (t > 1)
		printf("?");
	else
		printf("%c", index + 65);

	return 0;
}