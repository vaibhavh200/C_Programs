#include <stdio.h>
void main()
{ 
    float a,b,c;
    printf("Enter the base and height of a triangle:");
    scanf("%f %f",&a,&b);
    c=a*b/2;
    printf("Area of the triangle is %g sq.uinits",c);
}