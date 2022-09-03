//WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int a,b;
	
	printf("\nTo Convert years into days press 1.");
	printf("\nTo Convert days into years press 2.\n");
	scanf("%d",&b);
	
	switch (b)
	{
		case 1:
			printf("\nEnter years: ");
			scanf("%d",&a);
			a = a*365;
			printf("\nYears into days is: %d",a);
			break;
			
		case 2:
			printf("\nEnter Days: ");
			scanf("%d",&a);
			a=a/365;
			printf("\nDays into Years is: %d",a);
			break;
			
		default: 
		printf("Enter Valid Value");
	}
	
	
}