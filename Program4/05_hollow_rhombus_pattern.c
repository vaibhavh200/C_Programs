/* To print the following pattern:
                *****
               *   *
              *   *
             *   *
            ***** 
*/

#include <stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the no. of rows or colomns:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}