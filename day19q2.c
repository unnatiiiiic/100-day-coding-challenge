//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
int d,s,n;
s=0;
printf("Enter a numeber ");
scanf("%d", &n);
while(n>0)
{
d=n%10;
s+=d;
n=n/10;
}
printf("%d \n", s);
return 0;
}
