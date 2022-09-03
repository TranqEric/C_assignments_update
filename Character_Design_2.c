//nested for loop reverse number design
#include<stdio.h>
main()
{
	char i, j, k = 'a';
	
	for (i='a'; i<='e'; i++)
	{
		for (j='a'; j<=i; j++)
		{
			printf("%c ",k);
			k++;
		}
	printf("\n");
	}
}