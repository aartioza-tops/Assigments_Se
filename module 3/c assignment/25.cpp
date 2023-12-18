/*
25.Accept 5 expense from user and find average of expense
*/

#include<stdio.h>

main()
{
	int s1, s2,s3, s4, s5, TS, AVG;
	
	printf("\n\n\t Input 5 Users' Expenses : ");
	scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
	
	TS=s1+s2+s3+s4+s5;
	printf("\n\n\t Total Expense : %d",TS);
	
	AVG=TS/5;
	printf("\n\n\t Average Expense : %d",AVG);
	
}
