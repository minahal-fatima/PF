#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, a = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("invalid input1!!\n");
		printf("Enter a positive integer: ");
		scanf("%d", &num);
	}
	for (int i = 1; i <= num; i++)//if (5 % 5 == 0) then a is incremented, 5 % 5 = 0 and so a is incremented.//a = 2
    	                          
	{
		if (num % i == 0)
		{
			a++;
		}

	}
	if (a == 2)
	{
		printf("%d %s", num, "is prime");
	}
	else
	{
		printf("%d %s", num, "is not  prime");
	}
		
	return 0;
}