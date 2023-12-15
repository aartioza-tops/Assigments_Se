/*
23. C Program to Reverse a Number Using FOR Loop
*/
#include<stdio.h>
int main(){
	
	int n,i,r=0,b=0;
	
	printf("\n enter your number :");
	scanf("%d",&n);
	

  	
  	for(i=n;i!=0;){
  		r = i % 10;
    	b = b * 10 + r;
    	i /= 10;
	  }
  	

  printf("Reversed number = %d", b);
	
	return 0;
}
