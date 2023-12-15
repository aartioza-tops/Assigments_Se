/*
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that 
provides the following information -print and display
empno, empname, address andage
*/

#include<stdio.h>
struct Employee
 {
 		int eno;
 		char ename[30];
 		char address[30];
 		int age;
 }emp[5];
int main(){
		
		int i;
			
		for(i=0;i<5;i++)
	 	{
	 		printf("\n ----- employee[%d]------",i+1);
	 		printf("\n Number");
			scanf("%d",&emp[i].eno);
			printf("\n Name: ");
			scanf("%s",&emp[i].ename);
			printf("\n Address:  ");
			scanf("%s",&emp[i].address);
			printf("\n Age:  ");
			scanf("%d",&emp[i].age);		
		}	
		
		for(i=0;i<5;i++)
	 	{
	 		printf("\n\n -------employee %d------",i+1);
	 		printf("\n Employee No %d",emp[i].eno);
			printf("\n Employee's  Name : %s",emp[i].ename);
			printf("\n Employee's  Address :  %s",emp[i].address);
			printf("\n Employee's  Age :  %d",emp[i].age);		
		}	

return 0;
}
