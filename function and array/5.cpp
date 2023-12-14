/*
5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice

*/

#include<stdio.h>
main()
{
	int size, i, j, arr1[30], temp, arr2[30];
	

	printf("\n\n enter your array");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&arr1[i]);	
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
			
		}	
	}
	
	printf("\n\n\t Array-1 ... Ascending Order....");
	for(i=0;i<10;i++)
	{
		printf("\n %d", arr1[i]);
	}
	
	
	printf("\n enter second array elements");
	for(i=0;i<10;i++)
	{
	
		scanf("%d",&arr2[i]);	
	}
	
	temp=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(arr2[i]<arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
			
		}	
	}
	printf("\n\n\t Array-2 ... Descending Order....");
	for(i=9;i>=0;i--)
	{
		printf("\n%d", arr2[i]);
	}
	
		
}
