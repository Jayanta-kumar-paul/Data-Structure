#include <stdio.h>
int main()
{
    // 1. Creation file
    int a[' '], size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    // 2. Data insert
    for (int i = 0; i <= size - 1; i++)
    {
        printf("Enter the Array data :");
        scanf("%d", &a[i]);
    }
    // 3. Forward display (traversing)
    printf("Your Array is :");
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%3d", a[i]);
    }

    
    // Insertion at the beginning
    int data;
    printf("\nEnter the data to insert at the beginning: ");
    scanf("%d", &data);

    // Shift existing elements to the right
    for (int i = size; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new data at the beginning
    a[0] = data;
    size++; // Increase the array size

    printf("Your at beginning inserted data is :");
    for (int i = 0; i < size; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}
// Enter the size of array :4
// Enter the Array data :2
// Enter the Array data :4
// Enter the Array data :6
// Enter the Array data :8
// Your Array is :  2  4  6  8
// Enter the data to insert at the beginning: 1
// Your at beginning inserted data is :  1  2  4  6  8