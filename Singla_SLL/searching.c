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
        struct node *temp = start;
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
             printf("Value %d Not found.\n", num);
        }
        else
        {
            printf("Value %d is Found.\n",num);
        }
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
    while (choice != 4)
    {
        printf("\nEnter your choice:\n");
        printf("1. Create & insert a list\n");
        printf("2. Display the list\n");
        printf("3. Search\n");
        printf("4. Exit\n");
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
            search();
            break;
        case 4:
            exit(0);
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}
