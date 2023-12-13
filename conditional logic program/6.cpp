/*
6. Find the Character Is Vowel or Not
*/
#include<stdio.h>
int main(){
	char ch;
	
	printf("\n enter character to check");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("\n %c is vowel character",ch);
	}else {
		printf("\n it is not vowel character");
	}
	
	return 0;	
}
