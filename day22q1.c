//Q43: Write a program to check if a number is a strong number.
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/
#include <stdio.h>
int main()
{
int t,n,s,f,d;
f=1;
s=0;
printf("Enter the number: ");
scanf("%d",&n);
t=n;
while(n>0)
{
d=n%10;
for(int i=1;i<=d;i++)
f=f*i;
s=s+f;
n=n/10;
f=1;
}
if(s==t)
printf("Strong number \n");
else
printf(" Not strong number \n");
return 0;
}
