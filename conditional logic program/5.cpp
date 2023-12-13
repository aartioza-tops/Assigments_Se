/*
5. Check Number Is Positive or Negative
*/
#include<stdio.h>
int main(){
	int num;
	printf("\n enter your number");
	scanf("%d",&num);
	
	if(num > 0){
		printf("\n it is positive");
	}else if(num < 0){
		printf("\n it is nagetive");
	}else{
		printf("\n it is zero");
	}
	
	return 0;	
}
