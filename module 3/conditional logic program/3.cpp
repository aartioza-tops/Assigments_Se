/*
3. WAP to check if the given year is a leap year or not
*/
#include<stdio.h>
int main(){
	int year;
	
	printf("\n enter year to check");
	scanf("%d",&year);
	
	if(year%4 == 0){
		printf("\n It is leap year.....");
	}else{
		printf("\n It is not leap year....");
	}
	
	return 0;	
}
