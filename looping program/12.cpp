/*
	12.Program of Armstrong Number in C Using For Loop & While Loop
*/
#include<stdio.h>
int main(){
	
	int a,n,r=0,sum=0,q;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	a=n;
	
	
	while(n!=0)
	{
    	r = n % 10;
    	q = r*r*r;
    	sum = sum + q;
    	n /= 10;	
    }
   
	if(sum==a){
		printf("\n armstrong number");
	}else{
		printf("\n not an armstrong number");
	}
	
	return 0;
}
