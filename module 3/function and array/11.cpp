/*
11.WAP to accept 5 numbers from user and display in reverse order using for 
loop and array
*/

#include<stdio.h>
int main(){
	
	int a[5],i,sum=0; 
	printf("\n enter 5  element");
	for(i=0;i<5;i++)
	{
			scanf("%d",&a[i]);
	}
	
	printf("\n reverse order");
	for(i=4;i>=0;i--)
	{
			printf("\n %d",a[i]);
			
	}
	return 0;
}
