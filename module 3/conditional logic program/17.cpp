/*
17.Write a C program to check whether a triangle can be formed with the given 
values for the angles.
*/
#include<stdio.h>
main()
{
		float a,b,c,total; 
		
		printf("\n enter three angles : "); 
		scanf("%f %f %f",&a,&b,&c);
		 
		total= a+b+c;
		if(total==180) 
			printf("\n Triangle formed"); 
		else 
			printf("\n Triangle not formed"); 
}
