/*
21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable
*/
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n a= : ");
	scanf("%d",&a);
	printf("\n b= : ");
	scanf("%d",&b);

	printf("\n using 3rd variable");
	c=a;
	a=b;
	b=c;
	
	printf("\n a = %d", a);
	printf("\n b = %d", b);

	
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping without using 3rd variable");
	printf("\n a = %d", a);
	printf("\n b = %d", b);
	
	
	
}
