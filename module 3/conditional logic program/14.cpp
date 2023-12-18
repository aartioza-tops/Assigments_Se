/* 14.WAP to find the largest of three numbers.*/
#include<stdio.h>
int main(){
	int a,b,c;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\n %d is biggest number",a);
		}
	}else if(b>c){
		printf("\n %d is biggest number",b);
	}else{
		printf("\n %d is biggest number",c);
	}
}
