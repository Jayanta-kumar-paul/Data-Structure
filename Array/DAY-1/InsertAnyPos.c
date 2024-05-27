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

    // 5.  Cell/data inserted at any position in Array
    int data,pos;

    printf("\nEnter the position (1 to %d)where you want to insert data :");
    scanf("%d",&pos);
    printf("Enter the inserted data :");
    scanf("%d", &data);

    for(int i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=data;

    printf("Your at any position inserted data is :");
    for (int i = 0; i <= size; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}
// Enter the size of array :4
// Enter the Array data :2
// Enter the Array data :3
// Enter the Array data :4
// Enter the Array data :6
// Your Array is :  2  3  4  6
// Enter the position (1 to 6)where you want to insert data :4
// Enter the inserted data :5
// Your at any position inserted data is :  2  3  4  5  6