/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>
int main()
{
int n;
printf("Enter array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int max=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
int max1=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]!=max)
{
if(arr[i]>max1)
max1=arr[i];
}
}
printf("second max number= %d \n",max1);
return 0;
}
