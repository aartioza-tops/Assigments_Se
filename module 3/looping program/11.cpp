/*
11.Accept 5 names from user at run time
*/
#include<stdio.h>
int main(){
	char name[20],i;
	
	printf("\n enter any 5 names;");
	scanf("%s",&name);
	
	for(i=1;i<5;i++){
		scanf("%s",&name);
	}
	
	return 0;
}
