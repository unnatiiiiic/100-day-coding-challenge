#include <stdio.h>
int main()
{
int i;
printf("Enter an integer ");
scanf("%d",&i);
if(i>=0)
{
if(i==0)
printf("Zero");
else
printf("Positive");
}
else
printf("Negative");
return 0;
}
