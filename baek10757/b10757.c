#include <stdio.h>
#include <string.h>

void sum_print(char* ans);

int main()
{
	char* A, * B, * ans;
	A = malloc(sizeof(char) * 10009);
	B = malloc(sizeof(char) * 10009);
	ans = malloc(sizeof(char) * 10009);
	scanf("%s %s", A, B);
	int a = strlen(A) - 1;
	int b = strlen(B) - 1;
	int c; // c는 A와 B 각 자리수 더한 값 % 10
	int r = 0; // r은 A와 B 각 자리수 더한 값 / 10
	int j = 0; // ans의 index

	if (a > b)
	{
		while (1)
		{
			if (b == -1)
			{
				for (int i = a; i > -1; i--)
				{
					c = (A[i] - '0') + r;
					r = c / 10;
					c = c % 10;
					if ((i == 0) && (r == 1))
					{
						ans[j++] = '0';
						ans[j++] = '1';
						break;
					}
					ans[j++] = (c + '0');
				}
				break;
			}
			c = (A[a--] - '0') + (B[b--] - '0') + r;
			r = c / 10;
			c %= 10;
			ans[j++] = (c + '0');
		}
		ans[j] = '\0';
	}

	else if (a == b)
	{
		while (1)
		{
			if (b == -1)
				break;
			c = (A[a] - '0') + (B[b] - '0') + r;
			r = c / 10;
			c %= 10;
			if ((a == 0) && (b == 0) && (r == 1))
			{
				ans[j++] = (c + '0');
				ans[j++] = '1';
				break;
			}
			ans[j++] = (c + '0');
			a--;
			b--;
		}
		ans[j] = '\0';
	}

	else
	{
		while (1)
		{
			if (a == -1)
			{
				for (int i = b; i > -1; i--)
				{
					c = (B[i] - '0') + r;
					r = c / 10;
					c = c % 10;
					if ((i == 0) && (r == 1))
					{
						ans[j++] = '0';
						ans[j++] = '1';
						break;
					}
					ans[j++] = (c + '0');
				}
				break;
			}
			c = (A[a--] - '0') + (B[b--] - '0') + r;
			r = c / 10;
			c %= 10;
			ans[j++] = (c + '0');
		}
		ans[j] = '\0';
	}

	sum_print(ans);
	return 0;
}

void sum_print(char* ans)
{
	int n = strlen(ans);
	for (int i = n - 1; i > -1; i--)
		printf("%c", ans[i]);
}