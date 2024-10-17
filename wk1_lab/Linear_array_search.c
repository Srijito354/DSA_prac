#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Defining the array
    int n, elem, elem1 = 0; 
    printf("Enter the number of elements you want to have: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        scanf("%d", &elem1);
        arr[i] = elem1;
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &elem);
    for (int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        if (elem == arr[i])
        {
            printf("Element found at poition: %d", i);
            break;
        }
    }
}