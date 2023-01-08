#include <stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the two angles of a triangle:");
    scanf("%f %f",&a,&b);
    c=180-a-b;
    printf("The third angle of a triangle is %g",c);
}