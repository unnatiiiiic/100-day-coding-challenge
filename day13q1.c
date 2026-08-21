//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
int a,b,d;
char ch;
printf("Enter two numbers and the operation to be performed: ");
scanf("%d", &a);
scanf("%d", &b);
scanf(" %c", &ch);
switch (ch)
{
case '+':
d=a+b;
printf("%d \n",d);
break;
case '-':
d=a-b;
printf("%d \n",d);
break;
case '*':
d=a*b;
printf("%d \n",d);
break;
case '/':
d=a/b;
printf("%d \n",d);
break;
case '%':
d=a%b;
printf("%d \n",d);
break;
}
return 0;
}
