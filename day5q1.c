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
