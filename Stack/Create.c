#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;

void push()
{
    int item;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d", &item);
    new->info = item;
    new->next = NULL;
    if (start == NULL)
    {
        start = new;
    }
    else
    {
        struct node *temp = start;
        new->next = start;
        start = new;
    }
}
void pop()
{
    struct node *temp = start;
    if (start == NULL)
    {
        printf("underflow");
    }
    else
    {
        start = temp->next;
        temp->next = NULL;
    }
}
void display()
{
    struct node *temp = start;
    if (temp == NULL)
    {
        printf("stack empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->info);
            temp = temp->next;
        }
    }
}
int main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("\n*Enter your choice*\n");
        printf("press 1. push\n");
        printf("press 2.pop\n");
        printf("press 3. display\n");
        printf("press 4. exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}