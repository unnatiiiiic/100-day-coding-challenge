/*Q51: Write a program to print the following pattern:
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
int k;
for(int j=1;j<=5;j++)
{
for(k=1;k<=5-j;k++)
printf(" ");
for(int p=k;p<=5;p++)
printf("%d",p);
printf("\n");
}
return 0;
}
