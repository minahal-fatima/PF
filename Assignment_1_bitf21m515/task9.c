#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//CGPA are calculated by dividing the sum of the grade points
//earned by the total credit value of courses
int main()
{
	//CGPA calculator
	int rollNo, noOfsemesters,  i = 0, creditHoursBase = 11, sumOfCreditHours = 0;
	double result = 0, gpa = 0, sum = 0;

	printf("Enter your roll no: ");
	scanf("%d", &rollNo);
	while (rollNo < 0)
	{
		printf("Invalid..\nEnter roll no geater than 0: ");
		scanf("%d", &rollNo);
	}
	printf("Enter number of semesters completed: ");
	scanf("%d", &noOfsemesters);
	while (noOfsemesters < 1 || noOfsemesters>8)
	{
		printf("Invalid semesters\nEnter again: ");
		scanf("%d", &noOfsemesters);

	}

	for (int i = 1; i <= noOfsemesters; i++)
	{
		printf("Enter your %d semester GPA: ", i);
		scanf("%lf", &gpa);
		while (gpa < 0 || gpa > 4)
		{
			printf("Enter your gpa again: ");
			scanf("%lf", &gpa);
		}
		sumOfCreditHours = sumOfCreditHours + (creditHoursBase + i);
		sum = sum + (gpa * (creditHoursBase + i));
	}
	printf("*******Result Card*******\n");
	printf("Roll No is: %d\n", rollNo);
	printf("sum %f\n", sum);
	printf("sumOfCreditHours %d\n", sumOfCreditHours);
	printf("CGPA: %lf", sum / sumOfCreditHours);
	return 0;
}