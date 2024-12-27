#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL")
}
void deletevlue(struct node **head, int input)
{
    struct Node *temp = *head, *prev;
    temp = prev = head;

    while (temp != NULL)
    {
        if (head->data==input&&temp->data==input)
        {
           head=head->next
           free(temp);
           break;
        }
        
        if (temp->data == input)
        {
            prev->next = temp->next;
            break;
        }
        //free(temp);
        prev = temp;
        temp = temp->next;
    }
   // free(temp);
}
int main()
{
    struct Node *newNode, *head, *temp;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue (0 or 1): ");
        scanf("%d", &choice);
    }
    int input;
    printf("enter the data which you want to delete :");
    scanf("%d", &input);
    deletevlue(head, input);
    print(head);
}
