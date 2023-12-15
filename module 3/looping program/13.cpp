/*
13.calculate the Factorial of a Given Number using while loop
*/
#include<stdio.h>

int main(){
	
	int result = 1, i,n;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	
	i=2;	
	while(i<=n){
		result *= i;
		i++;
	}	
	printf("\n factorial is %d",result);
}

