/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/
#include<stdio.h>
int main(){
	char c;
	
	printf("\n enter your character");
	scanf("%c",&c);
	
	if(c>=32 && c<=47){
		printf("special character");
	}else if(c>=65 && c<=90){
		printf("uppercase character");
	}else if(c>=97 && c>=122){
		printf("lowercase character");
	}else{
		printf("other");
	}
	
	
	return 0;	
}
