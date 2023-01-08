/* To print the following pattern:
            10001
            01010
            00100
            01010
            10001
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
            if(i==j || j+i==n+1)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }

}