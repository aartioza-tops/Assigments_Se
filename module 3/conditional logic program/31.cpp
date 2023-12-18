/*
31.Write a program in C to read any Month Number in integer and display the 
number of days for this month
*/
#include<stdio.h>
int main(){
	int month;
	
	printf("\n enter month number");
	scanf("%d",&month);
	
	if(month==1 || month==3 || month==5|| month==7|| month==8|| month==10|| month==12)
	{
		printf("\n 31 days in month");
	}else if(month==4 || month==6|| month==9|| month==11){
		printf("\n 30 days in month");
	}else{
		printf("\n 28 days in month");
	}

}
