#include<stdio.h>
main()
{
	int a,b,ans;
	char n;
	
	printf("\nSelect an operation you want to perform:\n");
	printf("\n+ Addition \n- Subtraction \n* Multiplication \n/ Divide\n");
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
}