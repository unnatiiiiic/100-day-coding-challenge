/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/
#include <stdio.h>
int main()
{
int m,n;
printf("Enter the dimensions of the array: ");
scanf("%d",&m);
scanf("%d",&n);
int ar[m][n];
printf("Enter the elements of the matrice: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&ar[i][j]);
}
if(ar[0][0]==ar[m-1][n-1])
printf("False \n");
else
printf("True \n");
return 0;
}
