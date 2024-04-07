#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("invalid input1!!\n");
		printf("Enter a positive integer: ");
		scanf("%d", &num);
	}
	
	printf("The twin prime numbers 2 and %d are: \n",num);
	
		int a;
		for (int i = 3; i < num; i++)
		{
			a = 0;
			for (int j = 3; j < i; j++)
			{
				if ((i % j == 0) || ((i + 2) % j == 0))
				{
					a = 1;
				}
			}
			if (a == 0)
			{
				printf(" (%d, %d)\n", i, i + 2);
			}
		}
	return 0;
}

