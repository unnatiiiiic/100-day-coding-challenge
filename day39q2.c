/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/
#include <stdio.h>
int main()
{
int m,s;
s=0;
printf("Enter the dimension for the square matrice: ");
scanf("%d",&m);
int ar[m][m];
printf("Enter the elements of the matrice: ");
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
scanf("%d",&ar[i][j]);
}
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
if(i==j)
s+=ar[i][j];
}
printf("Sum= %d \n",s);
return 0;
}
