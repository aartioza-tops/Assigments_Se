/*
28.Convert years into days and months
*/


#include<stdio.h>

main()
{
	int years,months,days;
	
    printf("\n enter years: ");
	scanf("%d",&years);
	
	months=12*years;

    days=365*years;

    printf("\n Months : %d",months);
    printf("\n Days : %d",days);
}
