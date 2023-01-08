/* To print the following pattern:
            10101
            01010
            10101
            01010
            10101
*/

#include <stdio.h>
void main()
{
    int n,i,j,k=1;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",k);
            k=!k;
        }
        printf("\n");
    }
}