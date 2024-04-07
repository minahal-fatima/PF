#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//prints the square pattern by taking the size (dimensions) from the user
	
	int size;
	printf("Enter size for your pattern: ");
	scanf("%d", &size);

	while (size < 2 || size % 2 != 0)
	{
		printf("Invalid\nEnter size >=2 in even number: ");
		scanf("%d", &size);
	}

	for (int i = 1; i <= size; i++)//to iterate through rows/size
	{
		for (int j = 1; j < i; j++)//to print 0
		{
			printf("0");
		}
		for (int j = i; j <= size; j++)//loop from i to size
		{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}