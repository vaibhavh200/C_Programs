/* To print the following pattern:
            *****
             *  *
              * *
               **
                *
*/

#include <stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            if(i==1 || i==n || j==n || j==i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

}