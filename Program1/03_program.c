// Program to print the sum of all negative elements of array 
#include <stdio.h>


int main()
{
  int a[5];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<5;i++)
  { 
   if(a[i]<0)
   sum=sum+a[i];
  
  }
printf("sum=%d",sum);
    
    
}
