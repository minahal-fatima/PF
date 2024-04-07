#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(double num, double start, double end)//function declaration
{
	int valid;
	if (num >= start && num <= end)
	{
		valid = 1;
	}
	else
	{
		valid = 0;
		printf("Invalid input\n");
	}
	return valid;
}
int getRadius()
{
	double radius;
	printf("Enter Radius in the range of (10.0-50.0): ");//input from user
	scanf("%lf", &radius);
	//we should keep running the loop when isvalid return 0
	while (isValid(radius, 10.0, 50.0) == 0)
	{
		printf("Enter Radius in the range of (10.0-50.0): ");
		scanf("%lf", &radius);

	}
	return radius;
}
void calculateArea(int radius, double* area)
{
	
	*area = 3.14 * (radius * radius);
}
void displayArea(double area)
{
	printf("The area of circle is %lf", area);
}
int main()
{
	double area = 0;
	calculateArea(getRadius(), &area);//calculating area
	displayArea(area);//displat that area
}