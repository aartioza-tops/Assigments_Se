/*

WAP to show
			i. Monday to Sunday using switch case
			ii. Vowel or Consonant using switch case

*/
#include<stdio.h>
main()
{
	int day;

	printf("\n Enter a day (in numbers) : ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1 : printf("\n Sunday");
				 break;
		
		case 2 : printf("\n Monday");
				 break;
		
		case 3 : printf("\n Tuesday");
				 break;
				 
		case 4 : printf("\n Wednesday");
				 break;	
				 
		case 5 : printf("\n Thursday");
				 break;
				 
		case 6 : printf("\n Friday");
				 break;
				 
		case 7 : printf("\n Saturday");
				 break;
				 
		default: printf("\n wrong input");
				 break;
				 
	}
}
