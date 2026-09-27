/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>
int main()
{
int n,nn;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n+1];
printf("Enter the array elements in a sorted manner: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the new element to be inserted: ");
scanf("%d",&nn);
for(int i=0;i<n;i++)
{
if(arr[i+1]>nn)
{
for(int j=n;j>i+1;j--)
{
arr[j]=arr[j-1];
}
arr[i+1]=nn;
}
}
printf("the new array: ");
for(int i=0;i<n+1;i++)
printf("%d  ",arr[i]);
return 0;
}
