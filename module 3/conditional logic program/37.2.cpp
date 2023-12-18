#include<stdio.h>
main()
{
	char ch, choice;
	
	printf("\n Enter a character to check : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a'  : 				  
		case 'e'  : 
		case 'i'  : 
		case 'o'  : 
		case 'u'  : printf("\n It is a vowel...");
					break;
					
		case 'A'  : 				  
		case 'E'  : 
		case 'I'  : 
		case 'O'  : 
		case 'U'  : printf("\n It is a vowel...");
					break;
		
		default : printf("\n It is a consonant..");
				  break;
	}
	
}
