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

    // first element deleting
    int temp = a[0];
    for (int i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
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
// Enter the data a[0] =0
// Enter the data a[1] =1
// Enter the data a[2] =2
// Enter the data a[3] =3
// Enter the data a[4] =4
// Your array is :  0  1  2  3  4
// After deleting array is :  1  2  3  4