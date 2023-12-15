/*
	15.Calculate sum of 10 numbers using of while loop
*/
#include<stdio.h>
int main(){
	int sum=0,n,a;
	
	a=1;
	printf("\n enter your values:");
	while(a<=10){
		scanf("%d",&n);
		sum=sum+n;
		a++;
	}
	printf("\n sum of values = %d",sum);
	return 0;
}
