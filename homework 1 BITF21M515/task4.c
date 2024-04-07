#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float mass1, mass2, distance, force, k = 6.67*pow(10,-8);;
	printf("Enter mass of first body: ");
	scanf_s("%f", &mass1);
	printf("Enter mass of second body: ");
	scanf_s("%f", &mass2);
	printf("Enter distance: ");
	scanf_s("%f", &distance);
	force = (k * mass1 * mass2 )/ (distance * distance);
	printf("The force between bodies: %.3e", force);

	return 0;
}