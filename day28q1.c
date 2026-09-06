/*Q55: Write a program to print all the prime numbers from 1 to n.
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/
#include <stdio.h>
int main()
{
int c,n;
c=0;
printf("Enter the value of n ");
scanf("%d", &n);
for (int i=2;i<=n;i++)
{
for (int j=2;j<=i;j++)
{
if(i%j == 0)
c++;
}
if(c==1)
printf("%d  ",i);
c=0;
}
printf("\n");
return 0;
}
