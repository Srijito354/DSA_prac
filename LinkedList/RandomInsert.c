#include <stdio.h>
#include <stdlib.h>

struct lk3
{
    int data;
    struct lk3 *next;
};

struct lk3 *head;

void randomsert()
{
    int loc, item;
    struct lk3 *ptr, *temp;
    ptr=malloc(sizeof(struct lk3));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &item);
        ptr->data=item;
        printf("\nEnter the location you want to insert the value at: ");
        scanf("%d", &loc);
        temp=head;
        for(int i = 0; i<loc; i++)
        {
            temp=temp->next;
            if (temp==NULL)
            {
                printf("\nCant insert\n");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\nNode inserted");
    }
}

void dispaly()
{
    struct lk
}

int main()
{
    int option;
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        randomsert();
        break;
        case 2:
        display();
        break;
    }
    return 0;
}