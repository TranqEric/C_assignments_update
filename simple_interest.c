//WAP to find simple interest
#include<stdio.h>
main()
{	
	float p, r, t;
	//float ans 
	
	printf("\nEnter Your Principle Amount: ");
	scanf("%f",&p);
	
	printf("\nEnter Your Rate of Interest: ");
	scanf("%f",&r);
	
	printf("\nEnter Your Period of time in years: ");
	scanf("%f",&t);
	
	//ans = (p*r*t)/100;
	
	printf("\nYour Simple interest will be: %f",(p*r*t)/100);
}