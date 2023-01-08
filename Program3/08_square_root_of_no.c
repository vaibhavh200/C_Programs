#include <stdio.h>
#include <math.h>
void main()
{
    double a,b;                             // While using pow() and sqrt() , use double datatype
    printf("Enter the no:");
    scanf("%lf",&a);
    b=sqrt(a);
    printf("Required ans is %.3lf",b);
}