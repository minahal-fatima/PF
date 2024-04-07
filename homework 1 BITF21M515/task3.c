#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age in years: ");
	scanf("%d", &age);
	/*age in minutes*/
	//first we convert age into days then days into hours and finally hours into minutes
	age = age * 365 * 24 * 60;

	printf("you are %d %s", age, "minutes old");
	return 0;
}