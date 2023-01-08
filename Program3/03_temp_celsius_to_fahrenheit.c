#include <stdio.h>
void main()
{
    float c,f;
    printf("Enter the temp. in degree celsius:");
    scanf("%f",&c);
    f=(c*9/5) + 32;                                 //to convert fahrenheit into celsius use c=(f-32)*5/9
    printf("Temp. in fahrenheit is %g",f);
}