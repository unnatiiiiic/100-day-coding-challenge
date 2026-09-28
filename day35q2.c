/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>
int main()
{
int n,k;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
int arr2[n];
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter value of k: ");
scanf("%d",&k);
for(int i=0;i<n;i++)
{
if(i+k<n)
arr2[i+k]=arr[i];
else
arr2[k+i-n]=arr[i];
}
printf("the rotated array: ");
for(int i=0;i<n;i++)
printf("%d ",arr2[i]);
return 0;
}
