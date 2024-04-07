#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float amountOfPerchase, federalSaleTax, provincialSaleTax, totalSale;
	printf("Enter amount of purchase: ");
	scanf_s("%f", &amountOfPerchase);
	printf("The amount of purchase is: %f\n",amountOfPerchase);
	federalSaleTax = amountOfPerchase * 6 / 100;
	printf("The amount of federal sale tax is: %f\n",federalSaleTax);
	provincialSaleTax = amountOfPerchase * 4 / 100;
	printf("The amount of provincial sale tax is: %f\n", provincialSaleTax);
	totalSale = federalSaleTax + provincialSaleTax;
	printf("The amount of total sale tax is: %f", totalSale);
	

	return 0;
}