/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
int d;
printf("Enter units consumed: ");
scanf("%d", &d);
if(d<=100)
printf("Bill= %d \n", d*5);
else if(d<=200)
printf("Bill= %d \n", 500+ (d-100)*7);
else if(d<=300)
printf("Bill= %d \n", 500+700+ (d-200)*10);
else if(d>300)
printf("Bill=%d \n", 500+700+1000+(d-300)*12);
return 0;
}
