#include<stdio.h>

int main()
{
	int N;
	char* string;
	int count;  // �׷� �ܾ� ���� ����
	int k; // (�ҹ��� �ƽ�Ű�ڵ� - 97)�� n�� �ε��� ��Ÿ��
	scanf("%d", &N);
	count = N;
	string = malloc(sizeof(char) * N);

	for (int i = 0; i < N; i++)
	{
		int n[26] = { 0, }; // ���ܾ� ���Ծ����� Ȯ��
		scanf("%s", string);
		int j = 1;
		k = (int)string[0] - 97;
		n[k] = 1;
		while (string[j] != '\0')
		{
			if (string[j - 1] != string[j]) // �� �� ���ڰ� �ٸ�
			{
				k = (int)string[j] - 97;
				if (n[k] == 1) // �ѹ� ���Դ� ���ڰ� �������� �ٽ� ����
				{
					count--; // �׷�ܾ�� ��
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