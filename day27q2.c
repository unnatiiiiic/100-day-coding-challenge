/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main()
{
for(int i=1;i<=7;i++)
{
if(i%2 != 0)
{
for(int j=1;j<=((7-i)/2);j++)
printf(" ");
for(int k=1;k<=i;k++)
printf("*");
for(int l=1;l<=((7-i)/2);l++)
printf(" ");
printf("\n");
}
}
for(int i=5;i>=0;i--)
{
if(i%2 != 0)
{
for(int j=1;j<=((7-i)/2);j++)
printf(" ");
for(int k=1;k<=i;k++)
printf("*");
for(int l=1;l<=((7-i)/2);l++)
printf(" ");
printf("\n");
}
}
return 0;
}
