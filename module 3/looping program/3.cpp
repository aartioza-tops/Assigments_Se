/*
3. WAP to take 10 no. Input from user find out below values
	a. How many Even numbers are there
	b. How many odd numbers are there
	c. Sum of even numbers
	d. Sum of odd numbers
*/
#include<stdio.h>
int main(){
	int num[10],i,even=0,odd=0,sum_of_even=0,sum_of_odd=0;
	
	
	for(i=0;i<10;i++){
		printf("enter %d number",i+1);
		scanf("%d",&num[i]);
		if(num[i]%2==0){
			even=even+1;
			sum_of_even=sum_of_even+num[i];
		}else{
			odd=odd+1;
			sum_of_odd=sum_of_odd+num[i];
		}
	}
	
	printf("\n Total even number = %d",even);
	printf("\n Total odd number = %d",odd);		
	printf("\n sum of even number = %d",sum_of_even);
	printf("\n sum of odd number = %d",sum_of_odd);
	return 0;	
}
