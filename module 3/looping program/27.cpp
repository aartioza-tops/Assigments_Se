/*
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
*/
#include<stdio.h>
int main(){
	
	int i=1,j=2,s=0,a,n;
	float div,final;
	
	printf("\n enter n :");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		
		printf(" %d/%d ",i,j);
		
		div=i/j;
		
		if(s==0){
			printf("-");
			final=final-div;
			s=1;
		}else{
			printf("+");
			final=final+div;
			s=0;
		}
		i++;
		j++;
		
	}
	
	printf("\n %f",final);
	
	return 0;
}
