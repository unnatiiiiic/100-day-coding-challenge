#include <stdio.h>
int main()
{
int input,h,m,s;
printf("Enter the time in seconds");
scanf("%d", &input);
h=input/3600;
m=(input%3600)/60;
s=(input-3600)%60;
printf("%d:%d:%d", h,m,s);
return 0;
}
