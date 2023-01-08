#include <stdio.h>
int main()
{ 
   float r,d,c,a;
   printf("Enter the radius of circle:");
   scanf("%f",&r);
   d=2*r;
   c=2*3.14*r;
   a=3.14*r*r;
   printf("\nIts Diameter is %g units",d);
   printf("\nIts Circumference is %g units",c);
   printf("\nIts Area is %g sq.units",a);
}
