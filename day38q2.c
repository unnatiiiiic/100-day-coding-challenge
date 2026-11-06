/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include <stdio.h>
int main()
{
int m,c,n;
c=0;
printf("Enter the dimensions of the matrice: ");
scanf("%d",&m);
scanf("%d",&n);
if(m==n)
{
int ar[m][n],art[m][n];
printf("Enter the elements of the matrice: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&ar[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
art[j][i]=ar[i][j];
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(art[i][j]=ar[i][j])
c++;
}
}
if(c==(m*n))
printf("True ");
else
printf("False ");
}
else
printf("the matrice has to necesssarily be a square matrice ");
return 0;
}
