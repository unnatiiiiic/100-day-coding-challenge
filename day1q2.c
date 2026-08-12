#include <stdio.h>
int main()
{
int a,b,s,d,p,q;
printf("Enter two numbers");
scanf("%d",&a);
scanf("%d",&b);
printf("Sum= %d ", a+b);
printf(" Difference= %d ", a-b);
printf(" Product= %d ", a*b);
if(b!=0)
printf(" Quotient= %d ", a/b);
else
printf(" Division not possible");
return 0;
}
