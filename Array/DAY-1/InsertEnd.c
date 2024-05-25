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

    // 5.  Cell/data inserted at last in Array
    int data;

    printf("\nEnter the inserted data :");
    scanf("%d", &data);
    a[size] = data;

    printf("Your at last inserted data is :");
    for (int i = 0; i <= size; i++)
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
// Enter the inserted data :10
// Your at last inserted data is :  2  4  6  8 10