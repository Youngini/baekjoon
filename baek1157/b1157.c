#include<stdio.h>

int main()
{
	char* string; //���ڿ� ����
	string = malloc(sizeof(char) * 1000000); // �޸� �����ϱ� �Ⱦ ���� �Ҵ�
	scanf("%s", string);

	int n[26] = { 0, }; // ���ĺ� A~Z���� ��� �� ǥ��
	int max = 0; // ���� �ִ� ��� �� �� 
	int index; // �ִ� ��� ������ �ε��� ����
	int i = 0;
	int t = 0; // ���� ���� �� �˻�

	while (string[i] != '\0')
	{
		int k = (int)string[i];
		if (k >= 97)
			k -= 97;
		else
			k -= 65;
		n[k]++;
		if (max < n[k]) // �ִ� �� �� ���ϱ�
			max = n[k];
		i++;
	}

	for (i = 0; i < 26; i++) // ���� ���� ���� �˻�!
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