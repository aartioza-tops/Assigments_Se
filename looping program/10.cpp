/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/
#include<stdio.h>
int main(){
	
	int n,r=0,sum=0,first,last;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n!=0)
	{
    	r = n % 10;
    	
    	n /= 10;	
    }
    first=r;
	printf("%d",last+first);
	
	return 0;
}
