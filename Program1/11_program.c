// linear search 
#include <stdio.h>


int main()
{
  int a[5];
  
  
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the number to be found\n");
  int n;
  int f=0;
  scanf("%d",&n);
  for(int i=0;i<5;i++)
  {
    if(a[i]==n)
    f=1;
  }
  if(f==1)
  printf("number founded");
  else
  printf("number not founded");
}
