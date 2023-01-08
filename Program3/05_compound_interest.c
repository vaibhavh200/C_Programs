#include <stdio.h>
#include <math.h>
void main()
{
    float p,r,n,a,ci;
    printf("Enter the Principal,Rate and Time:");
    scanf("%f %f %f",&p,&r,&n);
    a=p*(pow((1+r/100),n));
    ci=a-p;
    printf("Required Compound Imterest is %g",ci);
}