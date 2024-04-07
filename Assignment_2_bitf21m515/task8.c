#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//program calculates avg number of days employess absent
int noOfEmploye()
{
	int emp;
	printf("How many employes in the company: ");//asking number of employes
	scanf("%d", &emp);
	while (emp < 1)//checking validation
	{
		printf("invalid\nenter again: ");
		scanf("%d", &emp);
	}
	return emp;
}
int  absentDays(int numberOfemployes)
{
	int  sum = 0, numberOfdays;
	for (int i = 0; i < numberOfemployes; i++)
	{
		printf("How many days %d employe left: ", i + 1);//finding how many days each emp missed
		scanf("%d", &numberOfdays);//taking absent days from user
		while (numberOfdays < 0)//checking validation
		{
			printf("Invalid input\nPlz enter days again: ");
			scanf("%d", &numberOfdays);
			
		}
		sum = sum + numberOfdays;//calculating sum
	}
	return sum;//returning sum bcz we have to know total days emp missed
}
double calculatedays(int employe,int daysLeft)//find avg in double
{
	double avg=0;
	avg = (double)daysLeft / employe;
	return avg;
}
int main()
{
	int empNo, dayAbsent;
	double avgDays;
	empNo = noOfEmploye();
	dayAbsent = absentDays(empNo);
	avgDays = calculatedays(empNo, dayAbsent);

	printf("The avg days are: %.4lf", avgDays);
	
}