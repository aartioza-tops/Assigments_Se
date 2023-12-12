/******************************************************************************

                            Module 3
                            Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int choice,fval,sval;
    printf(" 1. addition \n 2. substraction \n 3. multiplication \n 4. division \n 5. modulo \n enter your choice :");
    scanf("%d",&choice);
    
    printf("\n enter first value :");
    scanf("%d",&fval);
    
    printf("\n enter second value :");
    scanf("%d",&sval);
    
    if(choice == 1){
        printf("\n Additon is : %d",fval+sval);
    }else if(choice == 2){
        printf("\n substraction is : %d",fval-sval);
    }else if(choice == 3){
        printf("\n multiplication is : %d",fval*sval);
    }else if(choice == 4){
        printf("\n division is : %d",fval/sval);
    }else if(choice == 5){
        printf("\n reminder is : %d",fval%sval);
    }
    else{
        printf("\n wrong choice");
    }
    
    return 0;
}
