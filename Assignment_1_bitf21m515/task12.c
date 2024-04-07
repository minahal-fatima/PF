#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	printf("Enter odd positive integer:");
	scanf("%d", &num);
	while (num < 3 || num % 2 == 0)
	{
		printf(" Ivalid!Enter number again:");
		scanf("%d", &num);
	}

	for (int i = 0; i <= (num + 1) / 2; i++)
	{

		for (int j = 1; j <= num - i; j++)//num m sy bari bari hr row ko minus kry gy
		{
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++)// if 1 row it multiply with 2,2*1=2-1=1 it print one star in one row
		{
			printf("*");
		}

		printf("\n");
	}

	for (int i = ((num - 1) / 2); i >= 1; i--)
	{

		for (int j = 1; j <= num - i; j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}
