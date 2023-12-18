/*
20.Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.
*/
#include<stdio.h>
main()
{
	long int salary,remaining_salary,insurance,loan;
	
	printf("\n enter salary : ");
	scanf("%ld",&salary);
	
	insurance=(salary*10)/100;
	loan=(salary*10)/100;
	
	remaining_salary=salary-insurance-loan;
	
	printf("\n remaining salary is : %ld", remaining_salary);
	
	
}
