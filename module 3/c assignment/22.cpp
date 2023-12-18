/*
22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/

#include <stdio.h> 
#include<math.h>  
  
main()  
{ 
  	double p=10000,r=5,t=2;  
  
  	// Calculating compound Interest 
  	double Amount = p*((pow((1 + r/ 100), t))); 
  	double CI = Amount-p; 
   
  	printf("\n\n\t Compound Interest is : %lf",CI); 

} 
