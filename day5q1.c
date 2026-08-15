//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include <math.h>
int main()
{
double p,r,t;
double amount;
printf("Enter principal,rate and time");
scanf("%lf",&p);
scanf("%lf",&r);
scanf("%lf",&t);
printf("Simple Interest= %.2lf ",(p*r*t)/100.0 );
amount = p * pow((1 + r/ 100), t);
printf(" Compound Interest = %.2lf", amount-p);
return 0;
}
