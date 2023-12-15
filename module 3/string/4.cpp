/*
4. Write a program in C to count the total number of words in a string.
*/
#include<stdio.h>
int main(){
	
	char str[20];
	int l=0,i,w=0;
	
	printf("\n Enter your string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){	
			w++;
		}	
	}
	printf("\n total words %d",w+1);
	
	
	return 0;
}
