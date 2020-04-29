#include <stdio.h>
int main()
{
	int i, j, k;

	for (i = 0; i < 4; i++) //4행까지 반복
	{
		for (j = 0; j < (4 - i); j++) //공백
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; k++) //별 개수: 8개 이하 홀수
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < 5;i++) //역 피라미드 만들기
	{
		for (j = 0; j < i; j++) //공백
		{
			printf(" ");
		}
		for (k = 0; k < (5 - i) * 2 - 1; k++) //별 개수: 10개 이하 홀수
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}