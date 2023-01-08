/* To print the following pattern:
            11111
            11111
            11111
            11111
            11111
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
            printf("1");
        }
        printf("\n");
    }
}