// PROGRAa  M TO MERGE TWO ARRAYS  AND INTER INTO ONE ARRAY AND PRINT IT
#include <stdio.h>


int main()
{
  int a[5];
  
  
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  int b[5];
  for(int i=0;i<5;i++)
  {scanf("%d",&b[i]);
  }
  int c[10];
  int j=0;
  for(int i=0;i<10;i++)
  {
    if(i<5)
    c[i]=a[i];
    else
    c[i]=b[j++];
    
  }
  for(int i=0;i<10;i++)
  {
    printf("%d ",c[i]);
  }
}
