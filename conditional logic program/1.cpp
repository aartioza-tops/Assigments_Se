/*
1. Write a C program to accept two integers and check whether they are equal
or not
*/
#include<stdio.h>
int main(){
	
	int int1,int2;
	
	printf("\n enter first integer :");
	scanf("%d",&int1);
	
	printf("\n enter second integer :");
	scanf("%d",&int2);
	
	if(int1==int2){
		printf("they are equal");
	}else{
		printf("thet are not equal");
	}
	
	return 0;
}
