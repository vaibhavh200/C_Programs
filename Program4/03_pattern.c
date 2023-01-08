/* To print the following pattern:
            01010
            01010
            01010
            01010
            01010
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
            if(j%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
}