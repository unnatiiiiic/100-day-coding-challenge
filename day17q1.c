//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
int n,temp,c,d,an;
c=0;
an=0;
printf("Enter a Number ");
scanf("%d", &n);
temp=n;
while(n!=0)
{
c++;
n=n/10;
}
n=temp;
while(n!=0)
{
d=n%10;
an+=pow(d,c);
n=n/10;
}
if(an==temp)
printf("Armstrong number \n");
else
printf("Not Armstrong number \n");
return 0;
}
