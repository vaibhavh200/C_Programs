/* To print the following pattern:
          *****
          *****
          *****
          *****
          *****
*/

#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of rows or columns:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}