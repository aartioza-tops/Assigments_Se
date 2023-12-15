/*
6. WAP to print Fibonacci series up to given numbers
*/
#include<stdio.h>
int main(){
	
	int a=0,b=1,c,i,n;
	
	printf("\n Enter your number :");
	scanf("%d",&n);
	
	printf("\n %d ",a);
	printf("\n %d ",b);
	
	for(i=0;i<n;i++){
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
	
	return 0;
}
