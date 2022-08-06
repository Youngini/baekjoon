#include<stdio.h>

int main()
{
	int N;
	char* string;
	int count;  // 그룹 단어 개수 세기
	int k; // (소문자 아스키코드 - 97)로 n의 인덱스 나타냄
	scanf("%d", &N);
	count = N;
	string = malloc(sizeof(char) * N);

	for (int i = 0; i < N; i++)
	{
		int n[26] = { 0, }; // 영단어 나왔었는지 확인
		scanf("%s", string);
		int j = 1;
		k = (int)string[0] - 97;
		n[k] = 1;
		while (string[j] != '\0')
		{
			if (string[j - 1] != string[j]) // 앞 뒤 문자가 다름
			{
				k = (int)string[j] - 97;
				if (n[k] == 1) // 한번 나왔던 문자가 떨어져서 다시 나옴
				{
					count--; // 그룹단어에서 뺌
					break;
				}
				else
					n[k] = 1;
			}
			j++;
		}
	}

	printf("%d", count);

	return 0;
}