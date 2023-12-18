/*
29.Convert minutes into seconds and hours
*/

#include<stdio.h>

main()
{
	long int n=60,h,s; 
	
    s=n*3600;
	h=n/60; 
  
    printf("\n Seconds = %d",s);
    printf("\n Hours = %d",h);
}
