/*
	16. Convert country’s name in abbreviate form
*/
#include<stdio.h>
int main(){
	
	char cname[20],mname[20],lname[20];
	
	printf("\n enter country name :");
	scanf("%s",cname);
	
	 printf("Abbreviated name: ");
	 printf("%c%c%c\n", cname[0], cname[1], cname[2]);
	
	return 0;
}


