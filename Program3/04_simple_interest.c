#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the Principal,Rate and Time:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Required Simple Interest is %g",si);
    return (0);
}