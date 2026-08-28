//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
#include <math.h>
int main()
{
int temp,ni,d,c,n;
ni=0;c=0;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
d=n%10;
if(d!=0)
ni=ni*10+d;
c++;
n=n/10;
}
if(temp==ni)
printf("Palindrome \n");
else
printf("Not Palindrome \n");
return 0;
}
