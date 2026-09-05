/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main()
{
for(int i=1;i<=10;i++)
{
if(i%2!=0)
{
for(int j=1;j<=i;j++)
printf("*");
printf("\n");
}
}
for(int i=8;i>=0;i--)
{
if(i%2!=0)
{
for(int j=1;j<=i;j++)
printf("*");
printf("\n");
}
}
return 0;
}
