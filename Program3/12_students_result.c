#include <stdio.h>
void main()
{
    float a,b,c,d,e,f,g,h;
    printf("Enter the marks of Maths, Physics, Chemisty, C.S., English respectively:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    printf("Total of marks is %g\n",f);
    g=f/5;
    printf("Average of marks is %g\n",g);
    h=f/500*100;
    printf("Final percentage is %g%%.",h);
}
