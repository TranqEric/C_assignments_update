#include<stdio.h>
main()
{
	int i,n,a;
	
	printf("\nEnter the First Value: ");
	scanf("%d",&n);
	
	printf("\nEnter the Second Value: ");
	scanf("%d",&a);
	
	for(i=n; i<=a; i++)
	{
		printf("\n%d",i);
	}
}