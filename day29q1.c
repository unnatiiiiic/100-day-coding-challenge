/*Q57: Find the sum of array elements.
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/
#include <stdio.h>
int main()
{
int n,s;
s=0;
printf("Enter the size of the array: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
for(int i=0;i<n;i++)
s+=ar[i];
printf("Sum= %d \n",s);
return 0;
}
