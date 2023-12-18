/*
6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.
*/
#include<stdio.h>
main()
{
	char s[200]; 
    int i,alphabets=0,digits=0,spec_char=0;
 
    printf("\n enter string : ");
    gets(s);
     
    for(i=0;s[i]!='\0';i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) ) 
           	alphabets++;
        
		else if(s[i]>=48 && s[i]<=57)
         	digits++;
        
		else
         	spec_char++;
 
 	}
 	  
    printf("\n Total alphabets are  = %d",alphabets);
    printf("\n Total Digits = %d",digits);
    printf("\n Special characters = %d",spec_char);
}
