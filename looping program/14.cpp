/*
14.Accept 5 numbers from user and find those numbers factorials

*/
#include<stdio.h>
int main(){
	
	int result = 1, i,n,a;
	
	for(a=1;a<=5;a++){
		
			printf("\n enter your number :");
			scanf("%d",&n);
	
			for (i = n; i >=1; i--) {
				result *= i;
			}
			printf("\n factorial is %d",result);
			result = 1;
	}

	
	
	return 0;	
}
