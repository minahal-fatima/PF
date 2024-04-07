#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float futureValue( float presentValue, float monthlyInterestRate, float numberOfMonths)
{
	float f = 1;
	for (int i = 1; i <= numberOfMonths; i++)//loop for calculate future val
	{
		f = presentValue * pow((1 + monthlyInterestRate) , numberOfMonths);
	}
	
	return f;
}

	
int main()
{
	float preValue, monthlyInterRate, months;
	printf("Enter your present value: ");
	scanf("%f", &preValue);

	printf("Enter your monthlyInterestRate value: ");
	scanf("%f", &monthlyInterRate);

	printf("Enter number of months: ");
	scanf("%f", &months);

	printf("Future value is %f ", futureValue(preValue,
		monthlyInterRate,
		months));
}