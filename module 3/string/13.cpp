/*
13.Write a program in C to remove characters from a string except alphabets.
*/
#include<stdio.h>
int main(){
	char str[30],i;
	
	printf("\n enter your string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] < 'A' || str[i] > 'Z' && str[i] < 'a'
            || str[i] > 'z'){
            	str[i]=' ';
			}
	}
	printf("%s",str);	
}






