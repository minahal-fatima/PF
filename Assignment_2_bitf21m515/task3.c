#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//prints the window pattern after taking height and width
	//from the user.

	int height, width;
	printf("Enter height in odd integers: ");
	scanf("%d", &height);

	while (height < 3 || height%2==0)
	{
		printf("Invalid Height\nEnter odd integers again >=3: ");
		scanf("%d", &height);
		
	}

	printf("Enter width in odd integers: ");
	scanf("%d", &width);

	while (width < 5 || width%2==0)
	{
		
		printf("Invalid width\nEnter odd integers >=5 again: ");
		scanf("%d", &width);
	}

	for (int i = 1; i <= height; i++)//to iterate through rows/height
	{
		for (int j = 1; j <= width; j++)//to iterate through column/width
		{
			//to print odd rows we check the condition like 1 row should print
			//then 3rd and 5th and so on
			if (i%2==1 || i == height)
			{
				printf("+");
			}
			else if ( j=j+1)//it print one + then 3rd the 5th
			{
				printf("+ ");
				
			}
			
		}
		printf("\n");
	}
	return 0;
}