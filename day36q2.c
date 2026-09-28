/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
#include <stdio.h>
int main()
{
int m,n;
printf("Enter the dimensions of the 2d array: ");
scanf("%d",&m);
scanf("%d",&n);
int arr[m][n];
int s=0;
printf("Enter the array elememts: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
s+=arr[i][j];
}
printf("Sum of the array elememts: %d ",s);
return 0;
}
