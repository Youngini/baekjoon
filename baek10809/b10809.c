#include<stdio.h>

int main()
{
	char S[100];
	int n[26];
	scanf("%s", &S);
	for (int j = 0; j < 26; j++)
		n[j] = -1;
	int i = 0;
	int index;
	while (S[i] != '\0') // ���ڿ� ������ �׻� '\0' �� ��
	{
		index = S[i] - 97; // a�� askii �ڵ尡 97
		if (n[index] == -1)
			n[index] = i;
		i++;
	}
	for (int j = 0; j < 26; j++)
		printf("%d ", n[j]);

	return 0;
}