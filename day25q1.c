/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:
Output 1:
5
45
345
2345
12345
*/
#include <stdio.h>
int main()
{
int c,t;
c=0;
t=5;
for(int i=1;i<=5;i++)
{
for(int j=1;j<=i;j++)
{
c++;
printf("%d",t);
t++;
}
t=5;
t-=c;;
printf("\n");
c=0;
}
return 0;
}
