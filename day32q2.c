/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
int main()
{
int temp,d,t,n;
printf("Enter a number: ");
scanf("%d",&n);
int arr[10];
for(int i=0; i<10;i++)
arr[i]==0;
temp=n;
while(temp!=0)
{
d=temp%10;
arr[d]++;
temp=temp/10;
}
int max=arr[0];
for(int i=1;i<10;i++)
{
if(arr[i]>max)
{
max=arr[i];
t=i;
}
}
printf("%d \n",t);
return 0;
}
