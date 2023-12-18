/*
15.Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 ------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible
*/
#include<stdio.h>

main()
{
	int chemestry,maths,phisics,t2,t3;
	
	printf("\n enter chemestry marks :");
	scanf("%d",&chemestry);
	printf("\n enter maths marks :");
	scanf("%d",&maths);
	printf("\n enter phisics marks :");
	scanf("%d",&phisics);
	
	t3=chemestry+maths+phisics;

	t2=maths+phisics;

	
	if(maths>=65 && phisics>=55 && chemestry>=50 && t3>=188 && t2>=137)
		printf("\n Candidate is eligible...");
		
	else
		printf("\n Candidate is not eligible...");	
}
