/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include <stdio.h>
int main()
{
int m,n;
printf("Enter the array dimensions: ");
scanf("%d",&m);
scanf("%d",&n);
int ar1[m][n],ar2[n][m];
printf("Enter array elements: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&ar1[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
ar2[j][i]=ar1[i][j];
}
printf("Original array: \n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
printf("%d ",ar1[i][j]);
printf("\n");
}
printf("Transponsed array: \n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
printf("%d ",ar2[i][j]);
printf("\n");
}
return 0;
}
