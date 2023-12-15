/*
7. WAP Find out length of string without using inbuilt function
*/

#include<stdio.h>
void strLenght();
main()
{
	strLenght();	
	
}
void strLenght(){
	char str[100];
	int i, len=0;
    
	printf("\n enter string :");
	scanf("%s",str);
    
	for(i=0;str[i]!='\0';i++)
    {
			len++;
    }
   
   
	printf("\n\n\t String Length : %d ", len);
}
