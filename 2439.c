#include <stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i = n-1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < n - i; j++)
		{
			printf(("*"));
		}
		printf("\n");
	}
}