/******************************************************************************

                            Find area of Triangle Formula : A = 1/2 × b × h


*******************************************************************************/

#include <stdio.h>

int main()
{
    float b,h,A;
    
    printf("Enter your value :");
    scanf("%f",&b);
    
    printf("Enter your value :");
    scanf("%f",&h);
    
    A = ((1/2)*b*h);
    
    printf("Area of triangle = %f",A);

    return 0;
}
