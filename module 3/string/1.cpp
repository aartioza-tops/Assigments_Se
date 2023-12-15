/*
1. Write a program in C to find the length of a string without using library 
functions.
*/
#include<stdio.h>
int main(){
	
	char str[20];
	int l=0,i;
	
	printf("\n Enter your string :");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		l++;	
	}
	printf("\n length of string is %d",l);
	
	return 0;
}
