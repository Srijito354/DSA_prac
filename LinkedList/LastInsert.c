#include <stdio.h>
#include <stdlib.h>

struct lk2
{
    int data;
    struct lk2 *next;
};

struct lk2 *head;

void lastsert()
{
    struct lk2 *ptr, *temp;

    int item;
    ptr = malloc(sizeof(struct lk2));
    if (ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter value to be inserted\n");
        scanf("%d", &item);
        ptr->data=item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp=head;
            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted.");
        }
    }
    
}

int main()
{
    lastsert();
    return 0;
}