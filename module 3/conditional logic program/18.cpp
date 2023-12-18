/*
18.Write a C program to calculate profit and loss on a transaction.
*/
#include<stdio.h>
main()
{
	int price,sale,diff;  

    printf("\n enter price: ");  
    scanf("%d", &price);  
    scanf("%d", &sale);  

    if(sale>price)  
    {  
        diff=sale-price;  
        printf("\n profit of %d", diff);  
    }  
    else 
    {  
        diff=price-sale;  
        printf("\n loss of %d", diff);  // Print loss message.
    }  
    
    
}
