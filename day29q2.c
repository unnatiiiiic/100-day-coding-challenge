/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/
#include <stdio.h>
int main()
{
int n,max,min;
printf("Enter the size of the array: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
max=ar[0];min=ar[0];
for(int i=0;i<n;i++)
{
if(ar[i]>max)
max=ar[i];
if(ar[i]<min)
min=ar[i];
}
printf("Max= %d , Min=%d \n", max, min);
return 0;
}
