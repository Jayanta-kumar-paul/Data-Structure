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

void search()
{
    int num, p = 0;
    printf("Enter the search value: ");
    scanf("%d", &num);

    if (start == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        struct Node *temp = start;
        while (temp != NULL)
        {
            if (num == temp->info)
            {
                p = 1;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        if (p == 0)
        {
            printf("\nValue %d Not found.\n\n", num);
        }
        else
        {
            printf("\nValue %d is Found.\n\n", num);
        }
    }
}

void delete_first()
{
    if (start == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        struct Node *temp = start;
        start = temp->next;
        temp->next = NULL;
    }
}

void delete_end()
{
    if (start == NULL)
    {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    else if (start->next == NULL)
    {
        // Only one node in the list
        // free(start);
        start = NULL;
    }
    else
    {
        struct Node *temp = start;
        struct Node *prev = NULL;

        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        free(temp);
    }
}

void delete_before()
{
    int item;
    printf("Enter the perticular value the data should be deleted: ");
    scanf("%d", &item);
    struct Node *temp = start;
    if (start == NULL)
    {
        printf("List is empty or has only one node.\n");
    }

    else if (temp->info == item)
    {
        printf("Delete before list node not possible\n");
    }

    else
    {
        struct Node *temp = start;
        struct Node *prev = start; // Initialize prev pointer

        while (temp->next != NULL)
        {
            if (temp->next->info != item)
            {

                prev = temp; // Update prev pointer
                temp = temp->next;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                temp->next = NULL;
            }
        }
    }
}

void delete_after()
{
    int num;
    printf("Enter the value after the data should be deleted: ");
    scanf("%d", &num);

    if (start == NULL)
    {
        printf("List is empty or has only one node.\n");
    }
    else
    {
        struct Node *temp = start;
        struct Node *prev = start; // Initialize prev pointer

        while (prev->info != num)
        {
            prev = temp; // Update prev pointer
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
}

void delete_any_location()
{
    int pos;
    printf("Enter the position the data should be inserted: ");
    scanf("%d", &pos);
    struct Node *temp = start;
    struct Node *prev = start;

    if (start == NULL)
    {
        printf("List is empty or has only one node.\n");
    }
    else if(pos==1)
    {
        start=temp->next;
        free(temp);
        temp=NULL;
    }
    else
    {
        while (pos != 1)
        {
            prev = temp;
            temp = temp->next;
            pos--;
        }
        prev->next = temp->next;
        free(temp);
        temp = NULL;
    }
}

void delete_perticular()
{
    int num;
    printf("Enter the perticular value the data should be deleted: ");
    scanf("%d", &num);

    if (start == NULL)
    {
        printf("List is empty or has only one node.\n");
    }
    else
    {
        struct Node *temp = start;
        struct Node *prev = start; // Initialize prev pointer

        while (temp->info != num)
        {

            prev = temp; // Update prev pointer
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
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
            printf("%d -> ", temp->info);
            temp = temp->next;
        }
        printf("NULL\n\n");
    }
}

int main()
{
    int choice = 0;
    while (choice != 14)
    {
        printf("*****Enter your choice*****\n");
        printf("press 1. Create & insert a list\n");
        printf("press 2. Display the list\n");
        printf("press 3. Add a node at the begginning\n");
        printf("press 4. Add a node at the end\n");
        printf("press 5. Add a node before a given node\n");
        printf("press 6. Add a node after a given node\n");
        printf("press 7. search any node\n");
        printf("press 8. Delete a first node\n");
        printf("press 9. Delete a last node\n");
        printf("press 10. Delete a node before a given node\n");
        printf("press 11. Delete a node after a given node\n");
        printf("press 12. delete a any location node\n");
        printf("press 13. Delete a perticular node\n");
        printf("press 14. Exit\n");
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
            insert_before();
            break;
        case 6:
            insert_after();
            break;
        case 7:
            search();
            break;
        case 8:
            delete_first();
        case 9:
            delete_end();
            break;
        case 10:
            delete_before();
            break;
        case 11:
            delete_after();
            break;
            case 12:
            delete_any_location();
            break;
        case 13:
            delete_perticular();
            break;
        case 14:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}