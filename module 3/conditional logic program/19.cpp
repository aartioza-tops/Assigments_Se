/*
19.Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.0
*/
#include<stdio.h>
main()
{
	int Customer_ID,unit;
	char cname[30];
    float amt;

    printf("\n enter Customers' ID : ");
    scanf("%d",&Customer_ID);
    printf("\n enter Customers' Name : ");
    scanf("%s",&cname);
    printf("\n unit :");
    scanf("%d", &unit);	
    
    if(unit>=800)
    {
        amt = unit * 2.00;
    }
    
    else if(unit>=600)
    {
        amt = unit * 1.80;
    }
    
    else if(unit>=350)
    {
        amt = unit * 1.50;
    }
    
    else
    {
    	amt = unit * 1.20;
	}
	
	printf("\n Electricity Bill = Rs. %f", amt);
}
