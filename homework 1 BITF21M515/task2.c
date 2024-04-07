#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age in years: ");
	scanf_s("%d", &age);
	age = 365 * age;
	printf("You are %d %s", age,"days old");
	
	
	return 0;
}