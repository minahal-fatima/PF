#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//find product without * untill user enters positive integers

	int number1, number2, product = 0;
	printf("Enter a first positive integer: ");
	scanf("%d", &number1);

	while (number1 < 0)
	{
		printf("Invalid input\n");
		printf("Enter a first positive number again: ");
		scanf("%d", &number1);
	}

	printf("Enter a second positive integer: ");
	scanf("%d", &number2);

	
	while (number2 < 0)
	{
		printf("Invalid\nEnter a second positive integer again: ");
	    scanf("%d", &number2);

	}
		for (int j = 1; j <= number2; j++)
		{
			product = product + number1;
			
		}

	
	
	printf("The product of two numbers is: %d" ,product);
	return 0;
}