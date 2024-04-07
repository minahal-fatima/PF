#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int start, end;
	printf("Enter starting range: ");
	scanf("%d", &start);

	while (start < 0)
	{
		printf("Invalid\nEnter starting range again: ");
		scanf("%d", &start);
	}

	printf("Enter ending range: ");
	scanf("%d", &end);

	while(end <0)
	{
		printf("Invalid\nEnter ending range again: ");
		scanf("%d", &end);
	}

	for (int i =start; i <= end; i++)//we assign start value to i and i should less than ending range
	{
		for (int j =i; j <=end; j++)//if i=1 then j=i,and j less than ending value
		{
			printf("(%d,%d)", i, j);
		}
		printf("\n");
		end = end - 1;
	}
	return 0;
}