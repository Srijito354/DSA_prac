#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int push(int )
{

}

int pop()
{

}


















    

}

int main()
{
    int choice;
    int top = 0;
    printf("Enter choice. 1 for pushing, 2 for popping, 3 for peeping in a particular location, 4 for checking if the array is empty, and 5 to check if it's full.");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            push(top, arr);
            break;
        case 2:
            pop(arr);
            break;
        case 3:
            peep(arr, index);
            break;
        case 4:
            isEmpty(arr, top);
            break;
        case 5:
            isFull(arr, top);
            break;
    }
}