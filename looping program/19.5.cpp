/*
19.
*/
#include<stdio.h>
int main(){
	int i,n,a=1,b=0,j;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		for(j=1;j<=i;j++)
		{
			printf(" %d ", a );		
			a++;
		}
		printf("\n");
	}

	return 0;
}
