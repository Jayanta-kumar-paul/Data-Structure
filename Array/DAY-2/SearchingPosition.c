#include <stdio.h>

int main()
{
    int a[100]; // Assuming a maximum array size of 100
    int size, i, item;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Data insert
    for (i = 0; i < size; i++)
    {
        printf("Enter the data a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Display the normal array
    printf("Your array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%3d", a[i]);
    }

    // Search element
    printf("\nEnter the search element: ");
    scanf("%d", &item);

    int found = 0;

    for (i = 0; i < size; i++)
    {
        if (a[i] == item)
        {
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("The search is successful, and the element is found at position %d\n", i + 1);
    }

    return 0;
}
