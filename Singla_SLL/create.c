#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the SLL
struct Node 
{
    int info;
    struct Node* next;
};

struct Node* start = NULL;

// Function to insert a new node at the end of the list
void create_ll()
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    new_node->info = item;
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    } 
    else 
    {
        struct Node* temp = start;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Function to display the list elements
void display()
 {
    struct Node* temp = start;
    if (temp == NULL)
     {
        printf("Empty list\n");
    } 
    else 
    {
        printf("List elements: ");
        while (temp != NULL) 
        {
            printf("%d->", temp->info);
            temp = temp->next;
        }
        printf("NULL");
    }
}

int main() 
{
    int choice = 0;
    while (choice != 3)
     {
        printf("\nEnter your choice:\n");
        printf("1. Create & insert a node\n");
        printf("2. Display list\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
        case 1:
            create_ll();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
