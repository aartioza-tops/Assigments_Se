/*
13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array
*/
#include<stdio.h>
int main(){
	
	int numArray[10],i;
	
	printf("\n enter 5 numbers");
	
	for(i=0;i<10;i++){
		scanf("%d",&numArray[i]);
		if(numArray[i] % 2 == 0){
			printf("\n number is even");
		}else{
			printf("\n number is odd");
		}
	}
	return 0;
}
