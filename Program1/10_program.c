// PROGRAM TO REVERSE AN ARRAY 
#include <stdio.h>


int main()
{
  int a[5];
  
  
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  int b[5];
  int j=0;
  for(int i=4;i>=0;i--)
  {
    b[i]=a[j++];
  }
  for(int i=0;i<5;i++)
  {
    printf("%d ",b[i]);
  }
}
