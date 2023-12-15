/******************************************************************************
    module 3
3 - WAP to Find Area And Circumference of Circle
*******************************************************************************/

#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;
    printf("enter radius of circle");
    scanf("%f",&radius);
    
    printf("Area of circle %f \n",PI*radius*radius);
    printf("Circumference of circle %f",2*PI*radius);

    return 0;
}
