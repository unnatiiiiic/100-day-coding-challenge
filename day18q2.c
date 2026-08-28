//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
int n1,n2,s,hcf;
printf("Enter two number ");
scanf("%d %d", &n1, &n2);
if(n1>n2)
s=n2;
else
s=n1;
for(int i=1; i<=s; i++)
{
if( (n1%i)==0 && (n2%i)==0)
hcf=i;
}
printf("%d \n",hcf);
return 0;
}
