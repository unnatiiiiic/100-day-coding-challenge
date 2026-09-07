/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/
#include <stdio.h>
int main()
{
int n,po,ne,ze;
printf("Enter array size: ");
scanf("%d",&n);
int ar[n];
ne=0;po=0;ze=0;
printf("Enter array elements: ");
for(int i=0;i<n;i++)
scanf("%d", &ar[i]);
for(int i=0;i<n;i++)
{
if(ar[i]>0)
po++;
else if(ar[i]<0)
ne++;
else if(ar[i]==0)
ze++;
}
printf("Positive= %d, Negative= %d, Zero= %d \n",po,ne,ze);
return 0;
}
