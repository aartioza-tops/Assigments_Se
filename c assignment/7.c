// Find area of Rectangle Formula : A=wl
#include <stdio.h>

int main() {
    float A,w,l;
    
    printf("\n enter width of rectangle ");
    scanf("%f",&w);
    
    printf("\n enter lenght of rectangle ");
    scanf("%f",&l);
    
    A = w * l;
    
    printf("Area of rectangle is %f",A);

    return 0;
}