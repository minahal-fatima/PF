#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, d1, n1, d2;
	printf("Enter a number for first series: ");
	scanf("%d", &a);

	printf("Enter a difference: ");
	scanf("%d", &d1);
	
	printf("Enter a number for second series: ");
	scanf("%d", &n1);

	printf("Enter a difference");
	scanf("%d", &d2);

	int tem1;
	tem1 = a;

	for (int i = 1; i <= 6; i++)
	{
		printf("%d,", a);
		a = a + d1;
		
	}
	printf("\n");

	int tem2;
	tem2 = n1;
	for (int i = 1; i <= 6; i++)
	{
		printf("%d,", n1);
		n1 = n1 + d2;

	}
	
	
	int num = 0, i = 1, crossNum = 0, index = 0;	// entering any number from series 1

	printf("\n\nEnter any number from series 1: ");
	scanf("%d", &num);

	if (num == tem1)
	{
		printf("The corresponding number is: %d", tem2);
	}

	else {

		index = num - tem1; 	// finding position of 
								// number entered
		index = index / d1;

		crossNum = tem2 + d2;

		while (i < index)
		{
			crossNum = crossNum + d2; // calculating corresponding number
			i++;
		}

		printf("The corresponding number is: %d", crossNum);

	}
	return 0;
}