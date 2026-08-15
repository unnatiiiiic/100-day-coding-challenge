//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
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
