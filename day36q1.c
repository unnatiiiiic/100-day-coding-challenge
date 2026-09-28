/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/
#include <stdio.h>
int main()
{
int m,n;
printf("Enter the dimensions of the array in m*n manner: ");
scanf("%d",&m);
scanf("%d",&n);
int arr[m][n];
printf("Enter the array elements: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);
}
printf("The 2d array is: \n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
printf("%d  ",arr[i][j]);
printf("\n");
}
return 0;
}
