// Program to right shift an array 
#include <stdio.h>


#include <stdio.h>


int main()
{
  int a[5];
  
  
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("how many numbers to be rotated\n");
  int n;
  scanf("%d",&n);
  for(int i=5-n;i<5;i++)
  {
    printf("%d ",a[i]);
  }
  for(int i=0;i<5-n;i++)
  {
    printf("%d ",a[i]);
  }
}
