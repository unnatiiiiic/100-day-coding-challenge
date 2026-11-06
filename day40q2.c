/*Q80: Multiply two matrices.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/
#include <stdio.h>
int main()
{
int r1,c1;
printf("enter the dimensions of the first matrice: ");
scanf("%d",&r1);
scanf("%d",&c1);
int ar1[r1][c1];
int r2,c2;
printf("enter the dimensions of the second matrice: ");
scanf("%d",&r2);
scanf("%d",&c2);
int ar2[r2][c2];
printf("enter the elements of the first matrice: ");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
scanf("%d",&ar1[i][j]);
}
printf("enter the elements of the second matrice: ");
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
scanf("%d",&ar2[i][j]);
}
if(c1==r2)
{
int arp[r1][c2];
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
arp[i][j]=0;
}
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
for(int k=0;k<c1;k++)
arp[i][j]+=ar1[i][k]*ar2[k][j];
}
}
printf("the array having products: \n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
printf("%d ", arp[i][j]);
printf("\n");
}
}
else
printf("The number of rows is not equal to the number of columns so multiplication cant be performed ");
return 0;
}
