/*
	8. Write a program to find out the max from given number 
	(E.g., No: -1562 Max number is 6)

*/
#include<stdio.h>
int main(){
	
	int n,i,r=0,b=0,max=0;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
    	r = n % 10;
    	
   		if(r>max){
   			max=r;
		}
    	
    	n /= 10;
    	
    	
  }
	printf("%d",max);
	return 0;
}
