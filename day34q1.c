/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include <stdio.h>
int main()
{
int n,e,in;
printf("Enter array size: ");
scanf("%d",&n);
int arr[n+1];
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter element to be added and the index: ");
scanf("%d",&e);
scanf("%d",&in);
for(int i=n;i>in;i--)
{
arr[i]=arr[i-1];
}
arr[in]=e;
printf("The array elements: ");
for(int i=0;i<=n;i++)
printf("%d  ",arr[i]);
return 0;
}
