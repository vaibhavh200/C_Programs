// Program to  copy all elements from one array to another
#include <stdio.h>


int main()
{
  int a[5];
  int s=0;
  
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  int b[5];
  for(int i=0;i<5;i++)
  {
    b[i]=a[i];
  }
  for(int i=0;i<5;i++)
  {
    printf("%d ",b[i]);
  }
}
