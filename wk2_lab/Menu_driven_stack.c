#include <stdio.h>
#include <stdlib.h>

int push(int top, int elem, int *arr)
{
    arr[top] = elem;
    top+=1;
}

int pop(int top, int *arr)
{
    *(arr+top) = NULL;
    top-=1;
}

int peek(int index, int *arr)
{
    printf("%d", arr[index]);
}

int isEmpty(int isi, int top)
{
    if (top == 0)
        isi = 1;
    else
        isi = 0;
    return isi;
}

int main()
{
    int arr[5];
    int choice;
    printf("Enter 1 for pushing an element, 2 for popping and element from the end, and 3 for peeping into a specific element of the array based on index provided: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            int top = 0, elem;
            printf("Enter the element: ");
            scanf("%d", &elem);
            push(elem, top, arr);
            break;
        case 2:
            pop(top, arr);
            break;
        case 3:
            int index;
            printf("Enter index you want to peep into: ");
            scanf("%d", &index);
            peek(index, arr);
            break;
        case 4:
            int isi = isEmpty(isi, top);
            if (isi == 1)
                printf("Array is empty: ");
            else
                printf("Array is not empty: ");
            break;
    }
}