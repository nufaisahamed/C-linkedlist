#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteValue(struct node **head, int input) {
    struct node *temp = *head, *prev = NULL;

    // Check if the list is empty
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // If the node to delete is the head
    if ((*head)->data == input) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Node with value %d deleted.\n", input);
        return;
    }

    // Traverse the list to find the node to delete
    while (temp != NULL && temp->data != input) {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", input);
        return;
    }

    // Unlink and free the node
    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", input);
}

int main() {
    struct node *newNode, *head = NULL, *temp = NULL;
    int choice = 1, input;

    // Create the linked list
    while (choice) {
        newNode = (struct node *)malloc(sizeof(struct node));
        if (!newNode) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp->next = newNode;
        }
        temp = newNode;

        printf("Do you want to continue (0 or 1): ");
        scanf("%d", &choice);
    }

    // Delete a node by value
    printf("Enter the data you want to delete: ");
    scanf("%d", &input);
    deleteValue(&head, input);

    // Print the updated list
    print(head);

    return 0;
}
