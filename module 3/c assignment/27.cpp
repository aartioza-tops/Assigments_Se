/*
27.Convert days into months
*/

#include<stdio.h>

main()
{	
   int months,days ;
   
   printf("\n enter days : ") ;
   scanf("%d",&days) ;
   
   months=days/30 ;
   days=days%30 ;
   
   printf("\n Months = %d Days = %d", months, days) ;
} 
