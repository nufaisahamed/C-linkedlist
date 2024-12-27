#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *newNode, *head, *temp;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",& newNode->data);

        newNode->next = NULL;
        if (head == NULL)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf(" do you want to continue(0 or 1) :");
        scanf("%d" ,&choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}