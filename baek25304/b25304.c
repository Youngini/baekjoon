#include <stdio.h>

int main()
{
	int X, N; // �� �ݾ�, ������ ���� ��
	int a, b; // �� ������ ���� �� ����
	int ans = 0; // ������ �� �ݾװ� ��ġ�ϴ��� Ȯ��

	scanf("%d %d", &X, &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		ans += a * b;
	}
	
	if (X == ans)
		printf("Yes");
	else
		printf("No");

	return 0;
}