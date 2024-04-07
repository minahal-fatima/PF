#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int kilometers, liters ,Kmpl;
	printf("Enter the numbers of kilometers driven: ");
	scanf("%d", &kilometers);
	printf("Enter the liters of petrol used: ");
	scanf("%d", &liters);
	Kmpl = kilometers / liters;
	printf("KMPL of the car %d",Kmpl);
	return 0;
}