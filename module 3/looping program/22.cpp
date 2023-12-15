/*
22. Accept 3 numbers from user using while loop and check each numbers 
palindrome
*/
#include<stdio.h>
int main(){
	
	int i,n,a,r,b=0;
	
	i=1;
	while(i<=3){
		printf("\n enter number to check :");
		scanf("%d",&n);
		
		a=n;
		
		while(n!=0)
		{
    		r = n % 10;
    		b = b * 10 + r;
    		n /= 10;
  		}
		
  		if(b==a){
  			printf("\n number is palidrome");
		  }else{
		  	printf("\n number is not palidrome");
		  }
		b=0;
		i++;
	}
	
	return 0;
}
