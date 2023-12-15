
/*
	8. WAP to reverse a string and check that the string is palindrome or not.
*/
#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
    int i, length;
    int flag=0;

    
    printf("Enter a string: ");
    scanf("%s", str);

   
    length=strlen(str);

   
    for(i=0;i<length;i++) 
	{
        if(str[i]!=str[length-i-1]) 
		{
            flag=1;
            break;
        }
    }

    
    if (flag) 
	{
        printf("\n not palindrome...");
    } 
	else 
	{
        printf("\n palindrome...");
    }

}
