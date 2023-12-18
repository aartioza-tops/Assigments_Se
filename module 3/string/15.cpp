/*
15.Write a program in C to find the largest and smallest words in a string
*/
#include<stdio.h>
int main(){
		char str[50];
		int i,max=0,j,count=0;
		
		printf("\n enter your string :");
		gets(str);
		
		for(i=0;str[50]!='\0';i++){
			
			for(j=0;str[j]!=' ';j++){
				printf("j = %d",j);
				count++;
			}
			if(count>max){
					max=count;
			}
		}		
}
