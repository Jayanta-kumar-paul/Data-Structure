#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *start = NULL;

void create_ll()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
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
        struct node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
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
        struct node *temp = start;
        start = temp->next;
        temp->next = NULL;
    }
}

void delete_end()
{
    if (start == NULL)
    {
        printf("List is empty.\n");
    }
    // else if (start->next == NULL)
    // {
    //     // Only one node in the list
    // free(start);
    //     start = NULL;
    // }
    else
    {
        struct node *temp = start;
        struct node *prev = NULL;

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
    struct node *temp = start;
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
        struct node *temp = start;
        struct node *prev = start; // Initialize prev pointer

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
    printf("Enter the perticular value the data should be deleted: ");
    scanf("%d", &num);

    if (start == NULL)
    {
        printf("List is empty or has only one node.\n");
    }
    else
    {
        struct node *temp = start;
        struct node *prev = start; // Initialize prev pointer

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
    struct node *temp = start;
    struct node *prev = start;

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
        struct node *temp = start;
        struct node *prev = start; // Initialize prev pointer

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
    struct node *temp = start;
    if (temp == NULL)
    {
        printf("Empty list.\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d -> ", temp->info);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\nEnter your choice:\n");
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
        case 4:
            delete_end();
            break;
        case 5:
            delete_before();
            break;
        case 6:
            delete_after();
            break;
        case 7:
            delete_any_location();
            break;
        case 8:
            delete_perticular();
            break;
        case 9:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
