/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include <stdio.h>
int main()
{
int n,in;
printf("Enter array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter index of element to be removed: ");
scanf("%d",&in);
for(int i=in;i<n;i++)
{
arr[i]=arr[i+1];
}
printf("The array elements: ");
for(int i=0;i<n-1;i++)
printf("%d  ",arr[i]);
return 0;
}
