// Program to print minimum and maximum of array 
#include <stdio.h>


int main()
{
  int a[5];
  int s=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  int t=a[0];
  for(int i=0;i<5;i++)
  { 
    if(a[i]>s)
    s=a[i];
    if(t>a[i])
    t=a[i];
    }
printf("maximum %d\n",s);
printf("minimum %d\n",t);

    
    
}
