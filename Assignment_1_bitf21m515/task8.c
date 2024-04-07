#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char character;
	char chr = 'y';
	
	
	while (chr == 'y')
	{
		printf("Enter a character: ");
		scanf("%c", &character);
		getchar();
		if (character >= 'a' && character <= 'z') 
		{
			
			printf("It is a small alphabet.\n");
		}
		else if (character >= 'A' && character <= 'Z')
		{
			
			printf("It is a Capital alphabet.\n");
		}
		else if (character >= '0' && character<='9')
		{
			printf("It is a digit.\n");
		}
		else
		{
			printf("it is some other character\n");
			
		}
		printf("Do you want to continue? ");
		scanf("%c", &chr);
		getchar();
	}
	return 0;
}