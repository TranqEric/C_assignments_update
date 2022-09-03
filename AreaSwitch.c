#include<stdio.h>
main()
{
	int a,b,ans,n;
	
	printf("\nSelect an operation you want to perform:\n");
	printf("\n1. Area of Triangle \n2. Area of Square \n3. Area of Circle \n4. Area of Rectangle\n");
	scanf("%d",&n);
	
	switch (n)
	{
		case 1:
		printf("Enter Lenth:");
		scanf("%d",&a);
		printf("Enter Breadth:");
		scanf("%d",&b);
		ans = 0.5*a*b;
		printf("Area of triangle is = %d",ans);
		break;
		
		case 2:
		printf("Enter Length:");
		scanf("%d",&a);
		ans = a*a;
		printf("Area of Square is = %d",ans);
		break;
		
		case 3:
		printf("Enter Radius:");
		scanf("%d",&a);
		ans = 3.14*a*a;
		printf("Area of Circle is = %d",ans);
		break;
		
		case 4:
		printf("Enter Lenth:");
		scanf("%d",&a);
		printf("Enter Breadth:");
		scanf("%d",&b);
		ans = a*b;
		printf("Area of Rectangle is = %d",ans);
		break;
		
		default:
		printf("\nInvalid Input.");
	}
}