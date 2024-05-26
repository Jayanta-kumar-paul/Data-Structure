#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
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

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        start = new_node;
    }
}

void insert_end()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
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
        struct Node *temp = start;
        struct Node *prev = start;
        while (temp != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = new_node;
    }
}

void insert_any_location()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int item, pos;
    printf("Enter the value: ");
    scanf("%d", &item);
    printf("Enter the position the data should be inserted: ");
    scanf("%d", &pos);
    new_node->info = item;
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        struct Node *temp = start;
        // struct Node *prev = start;
        pos--;
        while (pos != 1)
        {
            temp = temp->next;
            pos--;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void insert_before()
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    int item, num, p = 0;
    printf("Enter the value of new_node: ");
    scanf("%d", &item);
    printf("Enter the value before which the data should be inserted: ");
    scanf("%d", &num);
    new_node->info = item;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        struct Node *temp = start;
        struct Node *prev = NULL; // Initialize prev pointer

        while (temp != NULL)
        {
            if (temp->info == num)
            {
                p = 1;
                break;
            }
            else
            {
                prev = temp; // Update prev pointer
                temp = temp->next;
            }
        }

        if (p == 0)
        {
            printf("Value %d not found.\n", num);
        }
        else
        {
            new_node->next = temp;
            // Update the previous node's next pointer
            if (prev == NULL)
            {
                // If temp is the first node, update start
                start = new_node;
            }
            else
            {
                prev->next = new_node;
            }
        }
    }
}

void insert_after()
{
    int item, num, p = 0;
    printf("Enter the value of new_node: ");
    scanf("%d", &item);
    printf("Enter the value after which the data should be inserted: ");
    scanf("%d", &num);

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->info = item;
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        struct Node *temp = start;
        struct Node *prev = NULL; // Initialize prev pointer

        while (temp != NULL)
        {
            if (temp->info == num)
            {
                p = 1;
                break;
            }
            prev = temp; // Update prev pointer
            temp = temp->next;
        }

        if (p == 0)
        {
            printf("Value %d not found.\n", num);
        }
        else
        {
            new_node->next = temp->next;
            temp->next = new_node; // Update the current node's next pointer
        }
    }
}

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
        printf("NULL\n");
    }
}

int main()
{
    int choice = 0;
    while (choice != 7)
    {
        printf("\n*****Enter your choice*****\n");
        printf("press 1. Create & insert a list\n");
        printf("press 2. Display the list\n");
        printf("press 3. Add a node at the begginning\n");
        printf("press 4. Add a node at the end\n");
        printf("press 5. Add a node at any location\n");
        printf("press 6. Add a node before a given node\n");
        printf("press 7. Add a node after a given node\n");
        printf("press 8. Exit\n");
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
            insert_any_location();
            break;
        case 6:
            insert_before();
            break;
        case 7:
            insert_after();
            break;
        case 8:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
