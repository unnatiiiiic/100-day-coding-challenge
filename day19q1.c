//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
int hcf,s,n1,n2,lcm;
printf("Enter two numbers ");
scanf("%d", &n1);
scanf("%d", &n2);
if(n1>n2)
s=n2;
else
s=n1;
for(int i=1; i<=s; i++)
{
if( (n1%i)==0 && (n2%i)==0)
hcf=i;
}
lcm=(n1*n2)/hcf;
printf("%d \n",lcm);
return 0;
}
