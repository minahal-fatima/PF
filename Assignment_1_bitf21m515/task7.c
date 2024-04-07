#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	int lcm;
	printf("ENter first positive integer: ");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("Invalid\nENter first positive integer : ");
		scanf("%d", &num1);


	}
	printf("ENter second positive integer: ");
	scanf("%d", &num2);

	
	while (num2 < 0)
	{
		printf("Invalid\nENter second positive integer : ");
		scanf("%d", &num2);
	}

	for (int i = 1; i < num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			lcm = i;
		}
	}
	lcm = (num1 * num2) / lcm;
	printf("LCM is %d", lcm);
	return 0;
}