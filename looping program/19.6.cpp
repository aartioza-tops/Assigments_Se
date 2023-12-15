/*
19.
*/
#include<stdio.h>
int main(){
	int i,n,a=65,b=0,j;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		for(j=1;j<=i;j++)
		{
			printf(" %c ", a );		
			a++;
		}
		printf("\n");
		a=65;
	}

	return 0;
}
