#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, elem, s_elem;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &elem);
        arr[i] = elem;
    }
    int low = 0, high = n-1;
    int index;
    printf("Enter the element to be searched: ");
    scanf("%d", &s_elem);
    while (low <= high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] == s_elem)
        {
            index = mid;
            break;
        }
        if (arr[mid] < s_elem)
        {
            low = mid+1;
            index = -1;
        }
        else
        {
            high = mid-1;
            index = -1;
        }
    }
    printf("Element found at: %d", index);
}