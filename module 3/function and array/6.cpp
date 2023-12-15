/*
6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include<stdio.h>

main()
{
	int A[2][2],B[2][2], C[2][2],i,j,k;
	
	printf("\n Enter element of matrix A:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&A[i][j]);		
		}
	}
	
	printf("\n Enter element of matrix B:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&B[i][j]);		
		}
	}
	
	
	printf("\n Addition of two matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n substraction of two matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",A[i][j]-B[i][j]);
		}
		printf("\n");
	}
	

	printf("\n Multiplication of two matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]=0;
			for(k=0;k<j;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
		
	}
	

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",C[i][j]);	
		}
		printf("\n");
	}
	
	
	
	
	
}
