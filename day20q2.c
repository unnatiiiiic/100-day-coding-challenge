//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
#include <stdio.h>
int main()
{
int d,n,a[20],i=0;
printf("Enter a number: ");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
if(d==1)
a[i]=0;
else if(d==0)
a[i]=1;
i++;
n=n/10;
}
for(i=i-1;i>=0;i--)
printf("%d", a[i]);
return 0;
}
