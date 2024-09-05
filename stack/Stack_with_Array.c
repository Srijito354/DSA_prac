#include <stdio.h>
#include <stdlib.h>

int push(int *arr, int elem, int top)
{
   *(arr+top) = elem;
}

int pop(int *arr, int top)
{
    
}

int display(int *arr, int n)
{
    for (i = 0; i<n; i++)
    {
        printf("%d ", *(arr+i));
    }
}

int main()
{
    int arr[5];
    int top = -1;
    int elem;
    char ch;
    printf("You want to enter elements?: (y/n)");
    scanf("%c", &ch);
    if (ch == 'y')
        top=0;
    else
        top = -1;
    while (1)
    {
        if (top > -1 && top < sizeof(arr)/sizeof(int))
        {
            printf("Enter element: ");
            scanf("%d", &elem);
            //arr[top] = elem;
            push(arr, elem, top);
            top+=1;
        }
        else if (top = -1)
        {
            printf("Stack underflow: ");
            break;
        }
        else if (top = sizeof(arr)/sizeof(int))
        {
            printf("Stack overflow: ");
            break;
        }
    }

    printf("Woud you like to print the contents of the stack?: ");
    display(arr, sizeof(arr)/sizeof(int));
}