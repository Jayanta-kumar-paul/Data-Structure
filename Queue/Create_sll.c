#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;

// Function to add an element to the queue
void enqueue()
{
    int item;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d", &item);
    new->info = item;
    new->next = NULL;

    if (rear == NULL)
    {
        // If the queue is empty, both front and rear point to the new node
        front = rear = new;
    }
    else
    {
        // Add the new node at the end of the queue and update rear
        rear->next = new;
        rear = new;
    }
}

// Function to remove an element from the queue
void dequeue()
{
    if (front == NULL)
    {
        printf("Underflow: Queue is empty.\n");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            // If the queue becomes empty, reset rear to NULL
            rear = NULL;
        }
        printf("Dequeued value: %d\n", temp->info);
        free(temp);
    }
}

// Function to display the queue
void display()
{
    struct node *temp = front;
    if (temp == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        while (temp != NULL)
        {
            printf("%d ", temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice = 0;
    while (choice != 4)
    {
        printf("\n*Enter your choice*\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
