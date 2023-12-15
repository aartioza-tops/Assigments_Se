/*
7. WAP to print number in reverse order 
	e.g.: number = 64728 ---> reverse = 82746
*/

#include<stdio.h>
int main(){
	
	int n,i,r=0,b=0;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
    	r = n % 10;
    	b = b * 10 + r;
    	n /= 10;
  }

  printf("Reversed number = %d", b);
	
	return 0;
}
