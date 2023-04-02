// iterative way of reververs Linked list operations in C

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// Insert the the end
void insertAtEnd(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref; /* used in step 5*/

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void reverse(struct Node **head_ref)
{
    struct Node *prev = NULL;
    struct Node *curr = *head_ref;
    struct Node * nextptr;

    while (curr != NULL)
    {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }
     *head_ref =  prev;
     while (prev != NULL)
     {
        printf(" %d ", prev->data);
        prev = prev->next;
     }
}

// Print the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

// Driver program
int main()
{
    struct Node *head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);


    printf("Linked list: ");
    printList(head);

    printf("\nReverse Linked list: ");
    reverse(&head);
    
}