/*
23.WAP to calculate swap 2 numbers with using of multiplication and division
*/
#include<stdio.h>  
  
main()  
{  
    int a, b;  
      
	printf("\n a = ");  
	scanf("%d",&a);
	printf("\n b = ");  
	scanf("%d",&b);
    
    a=a*b;  
    b=a/b;  
    a=a/b;  
  
    printf("\n  a = %d and b = %d", a ,b);  
    
}  
