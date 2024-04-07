#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float num;
	printf("Enter a number: ");
	scanf("%f", &num);
	num = num * num;
	printf("The square of a number is: %f", num);

	return 0;
}