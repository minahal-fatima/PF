#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, sum = 0;
	int num3 = 0, num4 = 0;
	int remain = 0;
	int rem, i = 1;
	int rem1 = 0;
	int plus = 0;
	int digit1, digit2;
	printf("Enter a first number:");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("Invalid.\n");
		printf("Enter a first number again: ");
		scanf("%d", &num1);
	}
	printf("Enter a second number :");
	scanf("%d", &num2);
	while (num2 < 0)
	{
		printf("Invalid.\n");
		printf("Enter a second numbert again:");
		scanf("%d", &num2);
	}
	digit1 = num1;
	digit2 = num2;
	while (num1 / 10 != 0 || num2 / 10 != 0)
	{
		num3 = num1 % 10;
		num1 = num1 / 10;
		num4 = num2 % 10;
		num2 = num2 / 10;
		remain = num3 + num4;
		rem = remain % 10;
		remain = remain / 10;
		sum = (rem + rem1);

		sum = plus + (sum * i);
		plus = sum;
		i = i * 10;
		rem1 = remain;
	}
	remain = num1 + num2;
	rem = remain % 10;
	remain = remain / 10;
	sum = (rem + rem1);
	sum = plus + (sum * i);
	i = i * 10;
	plus = sum;
	sum = plus + (remain * i);
	printf("    %d\n", digit1);
	printf("  +  %d\n", digit2);
	printf("--------------\n");
	printf("    %d", sum);
	return 0;
}