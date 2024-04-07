#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double getSales(int i)
{
	double sales;
	printf("Enter quarterly sales of division %d:  ", i);//i represents division
	scanf("%lf", &sales);//taking input from user
	while (sales < 0)//checking vlidation
	{
		printf("Invalid\nEnter again: ");
		scanf("%lf", &sales);
	}

	return sales;
}
void findHighest(double divisionQuarterSales1,
	double divisionQuarterSales2,
	double divisionQuarterSales3,
	double divisionQuarterSales4)//finding highest sales figure
{
	double large = divisionQuarterSales1;//checking amount of sales
	int largeNumber = 1;//to check division has largest sales figure
	if (divisionQuarterSales2 > large)
	{
		large = divisionQuarterSales2;
		largeNumber = 2;
	}
	if (divisionQuarterSales3 > large)
	{
		large = divisionQuarterSales3;
		largeNumber = 3;
	}
	if (divisionQuarterSales4 > large)
	{
		large = divisionQuarterSales4;
		largeNumber = 4;
	}
	printf("Division no. %d has highest sales: %lf", 
		largeNumber, large);//to find which division has largeest saleFigure
	
}
int main()
{
	double divisionQuarterSales1 = getSales(1);
	double	divisionQuarterSales2= getSales(2);
	double	divisionQuarterSales3 = getSales(3);
	double	divisionQuarterSales4 = getSales(4);
	
	findHighest(divisionQuarterSales1, 
		divisionQuarterSales2, 
		divisionQuarterSales3, 
		divisionQuarterSales4);
}