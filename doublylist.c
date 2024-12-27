// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };

// int main()
// {
//     struct node *head, *newNode, *temp;
//     head = NULL;
//     int choice = 1;
//     int data;

//     while (choice)
//     {
//         newNode = (struct node *)malloc(sizeof(struct node));
//         printf("enter the data :");
//         scanf("%d", &data);

//         newNode->data = data;
//         newNode->next = NULL;
//         newNode->prev = NULL;

//         if (head == NULL)
//         {
//             temp = head = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->prev = temp;
//             temp = newNode;
//         }
//         printf("do you want to continue (1 or 0) :");
//         scanf("%d", &choice);
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
// }

//--------------------------------------------------



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *head, *newNode, *temp;
    head = NULL;
    int choice = 1;
    int data;

    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        printf("do you want to continue (1 or 0) :");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp->next!= NULL)
    {
        
        temp = temp->next;
    }
    while (temp!= NULL)
    {
        printf("%d->",temp->data);
        temp = temp->prev;
    }
}