/*
3. Write a program in C to print individual characters of a string in reverse order
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
	
		
	for(i=l-1;i>=0;i--){
			printf("\n%c",str[i]);		
	}
	
	return 0;
}
