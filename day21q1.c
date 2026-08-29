//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main()
{
int t,s,n,c,d;
c=0; s=0;
printf("Enter a number: ");
scanf("%d",&n);
t=n;
while(n!=0)
{
c++;
n=n/10;
}
n=t;
while(n!=0)
{
d=n%10;
s=s+(d* pow(10,c-1));
c--;
n=n/10;
}
printf("%d \n",s);
return 0;
}
