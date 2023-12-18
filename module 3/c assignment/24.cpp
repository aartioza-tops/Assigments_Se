/*
24.Accept 5 employees name and salary and count average and total salary
*/

#include<stdio.h>

main()
{
	char emp1[20],emp2[20],emp3[20],emp4[20],emp5[20];
	int s1,s2,s3,s4,s5,total_salary,average_salary;
	
	printf("\n enter 5 Employees' Name : ");
	scanf("%s",emp1);
	scanf("%s",emp2);
	scanf("%s",emp3);	
	scanf("%s",emp4);
	scanf("%s",emp5);

	printf("\n\n\t enter 5 Employees' Salary : ");
	scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
	
	total_salary=s1+s2+s3+s4+s5;
	printf("\n Total Salary : %d",total_salary);
	
	average_salary=total_salary/5;
	printf("\n Average Salary : %d",average_salary);
	
}
