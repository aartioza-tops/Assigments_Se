/*
20. WAP program to print below output using for loop 
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
.
.

*/
#include<stdio.h>
int main(){
		int i,j,a=1;
		
		for(i=1;i<=10;i++){
			for(j=1;j<=10;j++){
				printf(" %d ",a);
				a++;
			}
			printf("\n");
		}	
}
