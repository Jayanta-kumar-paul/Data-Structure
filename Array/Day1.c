#include<stdio.h>
int main ()
{
    //1. Creation file
    int a[' '],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    //2. Data insert
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array data :");
        scanf("%d",&a[i]);
    }
    //3. Forward display (traversing)
    printf("Your Array is :");
    for(int i=0;i<=size-1;i++)
    {
        printf("%3d",a[i]);
    }
    //4. reverse display(backword Traversing)
    printf("\nYour reverse Array is :");
    for(int i=size-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }

    return 0;
}
// Enter the size of array :4
// Enter the Array data :2
// Enter the Array data :4
// Enter the Array data :6
// Enter the Array data :8
// Your Array is :  2  4  6  8
// Your reverse Array is :  8  6  4  2