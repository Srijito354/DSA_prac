#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6] = {5, 9, 8, 7, 1, 3};
    int temp = 0, small = 0;
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            small = i;
            if (arr[i]<arr[small])
            {
                small = j;
                break;
            }
        }
        temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }

    for (int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}