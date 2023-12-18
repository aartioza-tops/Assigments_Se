/*
9. Find circumference of Triangle formula : triangle = a + b + c
*/
#include<stdio.h>
main()
{
	int circumference, a, b, c;


	printf("\n enter value of side a  : ");
	scanf("%d",&a);
	printf("\n enter value of side b  : ");
	scanf("%d",&b);
	printf("\n enter value of side c  : ");
	scanf("%d",&c);
	
	circumference=a+b+c;
	
	printf("\n circumference of triangle %d",circumference);
	

}
