#include<stdio.h>
main()
{
	char a1, a2, a3, a4, i;
	
	printf("Welcome To KBC!");
		
		printf("\n\nQuestion 1: What is the First Color in National Flag?");
		printf("\nA. Orange B. White");
		printf("\nC. Blue   D. Green");
		printf("\n");
		scanf("%c",&a1);
		
	if(a1 == 'a' || a1 == 'A')
	
	{
		printf("\nWhat Number Comes first?");
		printf("\nA. One     B. Two");
		printf("\nC. Three   D. Four");
		printf("\n");
		fflush(stdin);
		scanf("%c",&a2);
		
		if(a2 == 'A' || a2 == 'a')
		{
			printf("\nWhat Alphabet Comes first?");
			printf("\nA. B     B. D");
			printf("\nC. A   D. E");
			printf("\n");
			fflush(stdin);
			scanf("%c",&a3);
			
			if(a3 == 'c' || a3 == 'C')
			{
				printf("\nWhat Alphabet Comes first?");
				printf("\nA. B     B. D");
				printf("\nC. A   D. E");
				printf("\n");
				fflush(stdin);
				scanf("%c",&a4);
			}
			else
			{
				printf("Game Over!");
			}
		}
		else
		{
			printf("Game Over!");
		}
	}
	else
	{
		printf("Game Over!");
	}
		
	
	
	
	
}