#include <stdio.h>
int main()
{
    float l,b,p;
    printf("Enter the length and breadth:");
    scanf("%f %f",&l,&b);
    p=2*(l+b);
    printf("Required Perimeter is %f units.",p);
    return 0;
}