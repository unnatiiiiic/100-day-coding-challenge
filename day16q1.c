//Q31: Write a program to take a number as input and print its equivalent binary representation.
/*
Sample Test Cases:
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111
*/
#include <stdio.h>
#include <math.h>
int main()
{
int c,n,d,b;
b=0;
c=-1;
printf("Enter a number: ");
scanf("%d", &n);
while (n!= 0)
{
c++;
d=n%2;
if(d==1)
b=b+(pow(10,c));
n=n/2;
}
printf("Binary equivalent= %d \n", b);
return 0;
}
