/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
int n1,n2;
printf("Enter array size of first array: ");
scanf("%d",&n1);
int ar1[n1];
printf("Enter the array elements: ");
for(int i=0;i<n1;i++)
scanf("%d",&ar1[i]);
printf("Enter array size of second array: ");
scanf("%d",&n2);
int ar2[n2];
printf("Enter the array elements: ");
for(int i=0;i<n2;i++)
scanf("%d",&ar2[i]);
int arr[n1+n2];
for(int i=0;i<n1;i++)
arr[i]=ar1[i];
for(int i=0;i<n1+n2;i++)
arr[n1+i]=ar2[i];
printf("resultant array: \n");
for(int i=0;i<n1+n2;i++)
printf("%d ", arr[i]);
return 0;
}
