#include <stdio.h>

void chat_bot(int N, int a);

int main()
{
	int N;
	scanf("%d", &N);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	chat_bot(N, 0);
	return 0;
}

void chat_bot(int N, int a)
{
	if (N != a)
	{
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("\"����Լ��� ������?\"\n");
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");

		chat_bot(N, a + 1);
	}

	else
	{
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("\"����Լ��� ������?\"\n");
		for (int i = 0; i < a * 4; i++)
			printf("_");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	}

	for (int i = 0; i < a * 4; i++)
		printf("_");
	printf("��� �亯�Ͽ���.\n");



}