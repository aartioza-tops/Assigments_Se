/*
14.Write a program in C to combine two strings manually
*/
#include<stdio.h>
int main(){
	
	char str1[20],str2[20],str3[20];
	int i=0,j=0,k,total,l,m;
	
	printf("\n enter first string :");
	scanf("%s",str1);
	
	printf("\n enter second string :");
	scanf("%s",str2);
	
	for(i=0;str1[i]!='\0';i++){
		i++;
	}
	
	for(j=0;str2[j]!='\0';j++){
		j++;
	}
	
	total=i+j;
	l=0;
	m=0;
	for(k=0;k<=total;k++){
		if(k<i){
			str3[k]=str1[l];
			l++;
		}else{
				str3[k]=str2[m];
				m++;
		}
	}
	
	printf("%s",str3);
}
