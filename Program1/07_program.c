// Program to store the even odd number in different array and the print tha array 
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
int even[s];
int odd[t];

int j=0;
int k=0;
for(int i=0;i<(s+t);i++)
{
   if(a[i]%2==0)
  even[j++]=a[i];
  else
   odd[k++]=a[i];
}
printf("even\n");
for(int i=0;i<s;i++)
{

printf ("%d ",even[i]);
}
printf("\n");
printf("odd\n");
for(int i=0;i<t;i++)
{

printf("%d ",odd[i]);
}

    
    
}

