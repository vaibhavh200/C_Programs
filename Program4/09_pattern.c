/* To print the following pattern:
            01110
            10001
            10001
            10001
            01110
*/

#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1 && j==1) || (i==1 && j==n) || (i==n && j==1) || (i==n && j==n))
            printf("0");
            else if(i==1 || i==n || j==1 || j==n)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
}