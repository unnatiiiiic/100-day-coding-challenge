/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include <stdio.h>
int main()
{
int n,e,o;
printf("Enter array size: ");
scanf("%d",&n);
int ar[n];
e=0;o=0;
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d", &ar[i]);
for(int i=0;i<n;i++)
{
if(ar[i]%2==0)
e++;
else
o++;
}
printf("Even= %d, Odd= %d ",e,o);
return 0;
}
