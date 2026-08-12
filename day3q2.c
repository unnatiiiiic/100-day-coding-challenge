#include <stdio.h>
int main()
{
int a,b,t;
printf("Enter the two numbers that need to be swapped ");
scanf("%d", &a);
scanf("%d", &b);
t=a;
a=b;
b=t;
printf("After swap: %d %d", a,b);
return 0;
}
