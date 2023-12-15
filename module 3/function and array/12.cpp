/*
12.WAP to accept 5 students name and store it in array
*/
#include<stdio.h>
int main(){
	char name[5];
	int i;
	
	
	for(i=0;i<5;i++)
	{
		printf("\n\n Input a name : ");
	
		gets(name[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n name [%d] : %s",i,name[i]);
    }   
    return 0;
}
