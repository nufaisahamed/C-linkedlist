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
    printf("NULL");
}
void insertAtpos(struct node *temp, int count)
{
    int pos, i = 1;
    printf("enter  the pos you want to insert :");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("enter vallid postition!");
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter the data you want to insert  :");
        scanf("%d", &newNode->data);

        newNode->next = NULL;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
int main()
{
    struct node *newNode, *head, *temp;
    head = NULL;

    int choice = 1;
    int count = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &newNode->data);

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
        count++;
        printf("do you want to continue(0 or 1) :");
        scanf("%d", &choice);
    }
    printf("count of node :%d\n", count);

    temp = head;
    insertAtpos(temp, count);
    temp = head;
    printlist(temp);
}