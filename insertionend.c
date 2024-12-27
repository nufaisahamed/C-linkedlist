#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *temp)
{
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insertAtEnd(struct node **head)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    struct node *head = NULL;
    int choice = 1;
    while (choice)
    {
        insertAtEnd(&head);
        printf("Do you want to continue (0 or 1): ");
        scanf("%d", &choice);
    }
    printlist(head);

    return 0;
}
