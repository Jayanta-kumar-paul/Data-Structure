#include <stdio.h>
int main()

{
    // create file
    int a[' '], size;
    printf("Enter the size of array :");
    scanf("%d", &size);

    // data insert
    for (int i = 0; i <= size - 1; i++)
    {
        printf("Enter the data a[%d] =", i);
        scanf("%d", &a[i]);
    }

    // display the normal array
    printf("Your array is :");
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%3d", a[i]);
    }

    int temp = a[size - 1];
    size--;

    // display after deleting array
    printf("\nAfter deleting array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}
// Enter the size of array :5
// Enter the data a[0] =2
// Enter the data a[1] =3
// Enter the data a[2] =5
// Enter the data a[3] =7
// Enter the data a[4] =8
// Your array is :  2  3  5  7  8
// After deleting array is :  2  3  5  7