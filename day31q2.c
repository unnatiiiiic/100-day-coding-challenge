/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>

int main()
{
    int n, t;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    // Reverse the array
    for(int i = 0; i < n/2; i++)
    {
        t = ar[i];
        ar[i] = ar[n - 1 - i];
        ar[n - 1 - i] = t;
    }

    // Print reversed array
    for(int i = 0; i < n; i++)
        printf("%d ", ar[i]);

    return 0;
}
