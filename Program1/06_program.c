// Program to odd and even numbers in array
#include <stdio.h>


int main()
{
  int a[5];
  int s=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  int t=0;
  for(int i=0;i<5;i++)
  { 
    if(a[i]%2==0)
    s++;
    else
    t++;
    }
printf("even %d\n",s);
printf("odd %d\n",t);

    
    
}

