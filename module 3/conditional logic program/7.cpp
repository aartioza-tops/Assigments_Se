/*
7. Accept marks from user and check pass or fail
*/
#include<stdio.h>
int main(){
	int marks;
	
	printf("\n enter marks to check");
	scanf("%d",&marks);
	
	if(marks>=35){
		printf("\n      pass    ");
	}else{
		printf("\n         fail       ");
	}
	
	return 0;	
}
