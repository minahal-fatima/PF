#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//formula for Pythagorean triples is sum of the squares of two 
//of the sides is equal to the square of the hypotenuse ,a^2+b^2=c^2
//to avoid repetition,it start from 1,,2,3  base=1,perp=1+base=2, hyp=perp+1=3
//loop starts from 3 
//and first pair is 3 4 5 
int main()
{
	for (int base=1; base < 200; base++)
	{
		for (int perp=base+1; perp <200; perp++)
		{
			for (int hyp=perp+1; hyp < 200; hyp++)
			{
				
				if((base * base) + (perp * perp)==(hyp*hyp))
				{
					printf("%d + %d = %d\n", base, perp, hyp);
				}
				
				
			}
		}
	}
	return 0;
}