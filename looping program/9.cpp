/*
9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/
#include<stdio.h>
int main(){
	
	int n,i,r=0,b=0,max=0,sum=0;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
    	r = n % 10;
    	
   		sum=sum+r;
    	
    	n /= 10;
    	
    	
  }
	printf("%d",sum);
	
	return 0;
}
