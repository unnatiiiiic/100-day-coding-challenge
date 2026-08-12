#include <stdio.h>
int main()
{
int a,b;
printf("Enter 2 numbers to be swapped ");
scanf("%d",&a);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap: %d %d", a,b);
return 0;
}
