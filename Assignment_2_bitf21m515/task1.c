#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//prints a hollow rectangle after taking its height and width from the user.
	
	int height, width;
	printf("Enter height for your pattern: ");
	scanf("%d", &height);
	while (height < 4 || height % 2 ==1)
	{
		printf("Enter again height >4 in even numbers: ");
		scanf("%d", &height);
	}
	printf("Enter width for your pattern: ");
	scanf("%d", &width);
	while (width < 6 || width % 2 == 1)
	{
		
		printf("Enter again  width >6 in even numbers: ");
		scanf("%d", &width);
		
	}

	for (int i = 1; i <= height; i++)//to iterate through height/rows
	{
		
		for (int j = 1; j <= width; j++)//to iterate through width/column
		{
			//to print 1 row and last row put i==1 it print 1 row
			//and i==height if height is 6 then it print last row which is 6
			////to print 1 column keep j==1 and j==width if width is equal to 10
			//it make 10 column
			if (i == 1 || i==height || j == 1 || j==width)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");

	}
	return 0;
}