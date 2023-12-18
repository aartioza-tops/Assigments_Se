/*
19.Calculate compound interest
*/

#include <stdio.h> 
#include<math.h>  
main()  
{ 
  	double p,r=5,t=2,a,c;  
  	
  	printf("\n enter principal amount");
  	scanf("%lf",&p);
  	
  	printf("\n enter rate of interest");
  	scanf("%lf",&r);
  	
  	printf("\n enter time periods");
  	scanf("%lf",&t);
  
  	a = p*((pow((1 + r/ 100),t))); 
  	c = a-p; 
   
  	printf("\n Compound Interest is : %lf",c); 

} 
