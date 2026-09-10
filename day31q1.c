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
    int n, key, index = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
        printf("-1 \n");
    else
        printf("Found at index %d \n", index);

    return 0;
}
