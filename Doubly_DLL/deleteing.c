#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the DLL
struct Node
{
    int info;
    struct Node *next;
    struct Node *prev;
};

struct Node *start = NULL;

// Function to insert a new node at the end of the list
void create_ll()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    new_node->info = item;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        struct Node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}

void delete_first()
{
    if (start == NULL)
    {
        printf("List is empty. Cannot delete.\n");
    }
    else
    {
        struct Node *temp = start;
        start = temp->next;
        if (start != NULL)
        {
            start->prev = NULL;
        }
        free(temp); // Free memory for the removed node
    }
}

// Function to display the list elements
void display()
{
    struct Node *temp = start;
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
    while (choice != 9)
    {
        printf("\n*****Enter your choice*****\n");
        printf("1. Create & insert a list\n");
        printf("2. Display the list\n");
        printf("3. delete a first node\n");
        printf("4. delete a last node\n");
        printf("5. delete a before given node\n");
        printf("6. delete a after given node\n");
        printf("7. delete a any location node\n");
        printf("8. Delete a perticular node\n");
        printf("9. Exit\n");
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
            delete_first();
            break;
        // case 4:
        //     delete_end();
        //     break;
        // case 5:
        //     delete_before();
        //     break;
        // case 6:
        //     delete_after();
        //     break;
        // case 7:
        //     delete_any_location();
        //     break;
        // case 8:
        //     delete_perticular();
        //     break;
        case 9:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
