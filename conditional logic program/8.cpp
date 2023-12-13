/*
8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/
#include<stdio.h>
int main(){
	float height;
	
	printf("\n enter person's height");
	scanf("%f",&height);
	
	if(height >=5.2){
		printf("long person");
	}else if(height < 5.2 && height > 5){
		printf("average height person");
	}else{
		printf("short person");
	}
	
	return 0;	
}
