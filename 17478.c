#include <stdio.h>

int print(int n, int a)
{
	int i;
	//base case
	if (a == n)
	{
		for (i = 0; i < 4*a;i++)
		{
			printf("_");
		}
		printf("\"����Լ��� ������?\"\n");
		for (i = 0; i < 4 * a; i++)
		{
			printf("_");
		}
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for (i = 0; i < 4 * a; i++)
		{
			printf("_");
		}
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	//
	
	for (i = 0; i < 4 * a; i++)
	{
		printf("_");
	}
	printf("\"����Լ��� ������?\"\n");
	for (i = 0; i < 4 * a; i++)
	{
		printf("_");
	}
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	for (i = 0; i < 4 * a; i++)
	{
		printf("_");
	}
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	for (i = 0; i < 4 * a; i++)
	{
		printf("_");
	}
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	print(n, a + 1);
	for (i = 0; i < 4 * a; i++)
	{
		printf("_");
	}
	printf("��� �亯�Ͽ���.\n");
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	print(n, 0);
}