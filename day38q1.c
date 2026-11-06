/*Q75: Add two matrices.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include <stdio.h>
int main()
{
int m,n;
printf("Enter the array dimensions: ");
scanf("%d",&m);
scanf("%d",&n);
int ar1[m][n],ar2[m][n],ars[m][n];
printf("Enter array elements of first array: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&ar1[i][j]);
}
printf("Enter array elements of second array: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&ar2[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
ars[i][j]=ar2[i][j]+ar1[i][j];
}
printf("Sum of the two arrays: \n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
printf("%d ",ars[i][j]);
printf("\n");
}
return 0;
}
