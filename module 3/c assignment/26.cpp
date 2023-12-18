/*
26.Convert temperature Fahrenheit to Celsius
*/
#include<stdio.h>
main()
{
	float Fahrenheit,Celsius;  
	
	printf("\n enter temprature in Fahrenheit");
    scanf("%f",&Fahrenheit);
    Celsius = ((Fahrenheit-32)*5)/9;  
    printf("\nCelsius is : %f",Celsius);  
}
