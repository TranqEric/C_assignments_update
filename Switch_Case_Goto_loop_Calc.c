#include<stdio.h>
main()
{
	int a,b,ans;
	char n,m;
	
	eric:
	printf("\nSelect an operation you want to perform:\n");
	printf("\n+ Addition \n- Subtraction \n* Multiplication \n/ Divide\n");
	fflush(stdin); //to flush any garbage value, mainly used while looping
	scanf("%c",&n);
	
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter A:");
	scanf("%d",&b);
	
	switch(n)
	{
		case '+':
		ans = a+b;
		printf("Addition is = %d",ans);
		break;
		
		case '-':
		ans = a-b;
		printf("Subtraction is = %d",ans);
		break;
		
		case '*':
		ans = a*b;
		printf("Multiplication is = %d",ans);
		break;
		
		case '/':
		ans = a/b;
		printf("Division is = %d",ans);
		break;
	}
	
	printf("\nDo you want to continue?(y/n)");
	fflush(stdin);
	scanf("%c",&m);
	
	if (m == 'y' || m == 'Y')
	{
		goto eric;
	}
	
	else if (m == 'n' || m == 'N')
	{
		printf("Thanks!");-
	}
	else
	{
		printf("\nInvalid Input. Please Enter again!");
		fflush(stdin);
		scanf("%c",&m);
		
		if(m == 'y' || m == 'Y')
		{
			goto eric;
		}
	}
}