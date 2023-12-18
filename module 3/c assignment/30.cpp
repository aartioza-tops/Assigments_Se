/*
30.WAP to convert years into days and days into years
*/

#include<stdio.h>

main()
{
	int years,months,days,d,y;
	
    printf("\n enter the number of years : ");
	scanf("%d",&years);
	
	months=12*years;
    days=365*years;

    printf("\n Total Months are : %d",months);
    printf("\n Total Days are : %d",days);
    
    printf("\n enter Days : ");
   	scanf("%d",&d);
   	
   	y=d/365;
   	printf("\n Total Years : %d",y);
   	
}
