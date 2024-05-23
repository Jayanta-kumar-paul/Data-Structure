#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
    struct Node *prev;
};

struct Node *start = NULL;

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

void insert_beg()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    new_node->info = item;
    new_node->next = start;
    new_node->prev = NULL;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        start->prev = new_node;
        start = new_node;
    }
}

void insert_end()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        struct Node *temp = start;
        new_node->info = item;
        new_node->next = NULL;
        new_node->prev = NULL;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        new_node->prev = temp;
        temp->next = new_node;
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
    while (choice != 5)
    {
        printf("\n*******Enter your choice*******\n");
        printf("press 1. Create & insert a node\n");
        printf("press 2. Display list\n");
        printf("press 3. Add a node at the begginning\n");
        printf("press 4. Add a node at the end\n");
        printf("press 5. Exit\n");
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
            insert_beg();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
