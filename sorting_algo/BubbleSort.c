#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6] = {5, 9, 8, 7, 1, 3};
    int temp = 0;
    for (int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        for (int j = 0; j<sizeof(arr)/sizeof(int); j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
}