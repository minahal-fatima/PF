#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//a C++ program which takes a positive integer N from the user, and prints the 
	//multiplication table of size N by N.

	int size;
	printf("Enter positive integer(size) for your pattern: ");
	scanf("%d", &size);

	while (size < 0)//checking validation
	{
		printf("invalid\n Enter valid input: ");
		scanf("%d", &size);
	}
	
	for (int a = 1; a <= size; a++)//it print upper line like 1 2 3 4 5
	{
		printf("\t%d", a);

	}
	printf("\n   +--------------------------------------------------------------------------------\n");
	
	for (int i = 1; i <= size; i++)//it print counting from 1 to size
	{
		printf("%d  |", i);
		for (int a = 1; a <= size; a++)
		{

			printf("\t%d", i * a);//to multiply a number ,to print tables <= size
			
		}
		printf("\n");
	}
	
	return 0;
}