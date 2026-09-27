/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>
int main()
{
int s,ul,ll,mid,n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the sorted way: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the element to be searched: ");
scanf("%d",&s);
ll=0,ul=n-1;
while(ll<=ul)
{
mid=(ll+ul)/2;
if(s==arr[mid])
{
printf("Found at index %d",mid);
return 0;
}
else if(s>arr[mid])
ll=mid+1;
else
ul=mid-1;
}
printf("-1");
return 0;
}
