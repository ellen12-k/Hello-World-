#include <stdio.h>
int main()
{
	int i, j, k;

	for (i = 0; i < 4; i++) //4����� �ݺ�
	{
		for (j = 0; j < (4 - i); j++) //����
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; k++) //�� ����: 8�� ���� Ȧ��
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < 5;i++) //�� �Ƕ�̵� �����
	{
		for (j = 0; j < i; j++) //����
		{
			printf(" ");
		}
		for (k = 0; k < (5 - i) * 2 - 1; k++) //�� ����: 10�� ���� Ȧ��
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}