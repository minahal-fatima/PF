#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	int rem1 = 0, rem2 = 0,add = 0, carry = 0, base = 1, sum = 0;

	printf("Enter first binary number: ");
	scanf("%d", &num1);

	printf("Enter second binary number: ");
	scanf("%d", &num2);
	
	int digit1;
	digit1= num1;
	int digit2;
	digit2 = num2;


	while (num1 > 0 || num2 > 0 || carry!=0)
	{
		rem1 = num1 % 10;
		num1 = num1 / 10;
		rem2 = num2 %10;
		num2 = num2 / 10;
		sum = carry + rem1 + rem2;

		if (sum == 0)
		{
			sum = 0;
			carry = 0;
		}
		else if (sum == 1)
		{
			sum = 1;
			carry = 0;
		}
		else if (sum == 2)
		{
			sum = 0;
			carry = 1;
		}
		else if (sum == 3)
		{
			sum = 1;
			carry = 1;
		}
		
		sum = add + (sum * base);
		add = sum;
		base = base * 10;


	}


	printf("  %d\n  +%d\n---------- \n %d", digit1,digit2,sum);
	return 0;
}