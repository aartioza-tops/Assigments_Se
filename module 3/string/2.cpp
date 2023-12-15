/*
	2. Write a program in C to separate individual characters from a string.
*/
#include<stdio.h>
int main(){
	char str[20];
	int i;
	
	printf("\n Enter your string :");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
			printf("\n%c",str[i]);		
	}
	
	return 0;
}
