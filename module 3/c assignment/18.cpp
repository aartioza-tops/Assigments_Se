/*
	18.Calculate person’s Annual salary
*/
#include<stdio.h>
int main(){
	
	int h_salary,no_of_hour,annual_salary;
	
	printf("\n enter hour salary of person");
	scanf("%d",&h_salary);
	
	printf("\n enter number of hours person work");
	scanf("%d",&no_of_hour);
	
	printf("\n monthly salary = %d",(h_salary*no_of_hour)*30);
	
	annual_salary = ((h_salary * no_of_hour)*30)*12;
	printf("\n person's Annual Salary = %d",annual_salary);
	
	return 0;
}
