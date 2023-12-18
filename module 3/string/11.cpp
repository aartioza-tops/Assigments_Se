/*
11.Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa.

*/

#include<stdio.h>

int main(){
	char name[30];
	int l,i;
	
	printf("\n enter your name :");
	gets(name);
	
	
	
	for(i=0;name[i]!='\0';i++){
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}else{
			name[i]=name[i]-32;
		}
	}
	printf("%s",name);
	
}
