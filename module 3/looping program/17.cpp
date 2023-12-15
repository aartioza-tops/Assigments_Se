/*
17.Calculate 5 numbers from user and calculate number of even and odd using 
of while loop
*/
#include<stdio.h>
int main(){
	
	int a,i,odd=0,even=0;
	
	i=1;
	while(i<=5){
		printf("\n enter value :");
		scanf("%d",&a);
		
		if(a%2 == 0){
			even++;
		}else{
			odd++;
		}
		
		i++;
	}
	
	printf("\n total even = %d,odd = %d",even,odd);
	return 0;
}
