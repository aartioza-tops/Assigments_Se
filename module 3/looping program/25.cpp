/*
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/
#include<stdio.h>
int main(){
	int i,n,sum=0;
	
	printf("\n enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf(" (%d * %d) +",i,i);
		sum=sum+(i*i);
	}
	printf("\n answer is = %d",sum);
	return 0;
}
