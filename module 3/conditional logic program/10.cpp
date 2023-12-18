/*
10.WAP to check whether a number is negative, positive or zero
*/
#include<stdio.h>
int main(){
	int n;
	
	scanf("%d",&n);
	if(n==0){
		printf("\n number is zero");
	}
	else if(n>0){
		printf("\n number is positive");
	}else{
		printf("\n numner is negative");
	}
}
