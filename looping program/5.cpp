/*
5. WAP to print factorial of given numbe
*/
#include<stdio.h>

int main(){
	
	int result = 1, i,n;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	for (i = 2; i <= n; i++) {
		result *= i;
		}
	printf("\n factorial is %d",result);
}

