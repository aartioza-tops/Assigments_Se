/*
2 . WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/

#include<stdio.h>
void menu();
int main(){

	menu();

return 0;
}

void menu(){
	
    int choice,fval,sval;
    printf(" 1. addition \n 2. substraction \n 3. multiplication \n 4. division \n 5. modulo \n enter your choice :");
    scanf("%d",&choice);
    
    printf("\n enter first value :");
    scanf("%d",&fval);
    
    printf("\n enter second value :");
    scanf("%d",&sval);
    
    switch(choice){
    	
		case 1:
        printf("\n Additon is : %d",fval+sval);
        break;
        
    	case 2:
        printf("\n substraction is : %d",fval-sval);
        break;
        
    	case 3:
        printf("\n multiplication is : %d",fval*sval);
        break;
        
    	case 4:
        printf("\n division is : %d",fval/sval);
        break;
        
    	case 5:
        printf("\n reminder is : %d",fval%sval);
        break;
        
        default:
        printf("\n wrong choice");
		break;	
        
    }
    
    

}
