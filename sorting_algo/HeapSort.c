#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6] = {5, 9, 8, 7, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    int parent = arr[0];
    int temp, temp2, temp3=0;
    int max = 0;
    loop:
        for (int i = temp3; i<n; i++)
        {
            if (arr[i]>max)
            {
                max = arr[i];
                temp = i;
            }
        }
    temp2 = arr[temp3];
    arr[temp3] = max;
    arr[temp] = temp2;
    temp3++;
    goto
    //printf("%d", parent);

    for (int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}