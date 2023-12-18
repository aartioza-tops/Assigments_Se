/*
12.Write a program in C to find the number of times a given word 'is' appears in 
the given string.
*/
#include<stdio.h>
int main(){
	char str[50];
	int i,count=0;
	
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='i'){
			
			if(str[i+2]=='s'){
				count++;
			}
		}
	}
	printf("\n total 'is' = %d",count);
	
}
