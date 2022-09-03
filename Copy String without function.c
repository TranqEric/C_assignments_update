#include<stdio.h>
#include<string.h>
main()
{
	char s1[20], s2[20], i;
	int length;
	
	printf("Enter First String : ");
	gets(s1);
	
	length = strlen(s1);
	
	for(i=0 ; i <= length; i++)
	{
		s2[i] = s1[i];
	}
	
	s2[i] = '\0';
	
	printf("String s2 : %s", s2);
}