#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main()
{
	int divisor, dividend, rem, quotient, product, product1=0, num=1;
	printf("Enter a number (dividend): ");
	scanf("%d", &dividend);
	printf("Enter a number (divisor): ");
	scanf("%d", &divisor);

	while (divisor > dividend)
	{
		printf("Invalid!!plz enter divisor les than dividend");
		printf("Enter divisor again..");
    	scanf("%d", &divisor);
	}
	while (divisor < 0 && dividend < 0)
	{
		printf("plz enter positive integers(dividend): ");
		scanf("%d", &dividend);
		printf("Enter enter positive integers (divisor): ");
		scanf("%d", &divisor);
	}
	if(dividend==divisor)
	{
		printf("Both are equal\n");
	}

		bool isQuotientFound = false;

		for (int i = 1; !isQuotientFound; i++)//product<dividend if product > dividend then decrement
		{
			product1 = divisor * i;
			if (product1 > dividend) {
				printf("Quotient is: %d\n", (i - 1));
				printf("Remainder is: %d", dividend-(divisor*(i-1)));//17-(3*(16-1)=17-15=2

				isQuotientFound = true;
			}
			else if (product1 == dividend) {
				printf("Quotient is: %d\n", i);
				printf("Remainder is: %d", 0);
				isQuotientFound = true;
			}
		}

	
	return 0;
}