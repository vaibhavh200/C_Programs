/* To print the following pattern:
            *****
            ****
            ***
            **
            *
*/

#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

}