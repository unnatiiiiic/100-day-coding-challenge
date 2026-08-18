//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
double d,r1,r2,r;
printf("Enter the values of a,b and c in the format ax^2+bx+c=0 ");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
d=(pow(b,2)-4*a*c);
if (d>0)
{
r1=(-b+pow(d,0.5))/(2*a);
r2=-(b+pow(d,0.5))/(2*a);
printf("Roots are Real and Different: %.2f %.2f ", r1, r2);
}
else if(d==0)
{
r=-b/(2*a);
printf("Roots are Real and Same: %.2f ", r);
}
else
printf("No Real Roots \n");
return 0;
}
