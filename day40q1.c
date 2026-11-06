/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>
int main()
{
int n,m;
printf("Enter the dimesnsions of the matrice: ");
scanf("%d",&n);
scanf("%d",&m);
int arr[m][n];
printf("Enter the elements of the matrice: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);
}
for(int d=0;d<m+n-1;d++)
{
for(int i=m-1;i>=0;i--)
{
for(int j=0;j<n;j++)
{
if((i+j)==d)
printf("%d ",arr[i][j]);
}
}
}
return 0;
}
