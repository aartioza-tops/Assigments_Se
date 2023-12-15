#include<stdio.h>
int main(){
	int a,i,j,n,b;
	
	scanf("%d",&n);
	
	b=n/2;
	
	for(i=1;i<=n;i++){
	
		if(i<b){
			
			for(j=1;j<=i;j++)
			{
				printf(" * ");	
			}
			
		}else{
			for(j=n-i;j>=1;j--)
			{
				printf(" * ");		
			}	
		}
		printf("\n");
	}
	
	return 0;
}
