#include <stdio.h>
#include <math.h>
void main()
{
    double a,b,p;
    printf("Enter the base and the exponrnt:");
    scanf("%lf %lf",&a,&b);
    p=pow(a,b);
    printf("Required ans is %.3lf",p);
}