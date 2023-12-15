/*
26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n
*/
#include<stdio.h>
int main(){
	int i,n,total=0,sum=0,j;
	
	printf("\n enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("(");
		
		for(j=1;j<=i;j++){
			
				printf("%d+",j);
				sum=sum+j;
		}
		total=total+sum;
		sum=0;
		printf(")+");
		
//		sum=sum+(i*i);
	}
	printf("\n answer is = %d",total);
	return 0;
}
