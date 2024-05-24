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
// Enter the size of array :5
// Enter the Array data :1
// Enter the Array data :2
// Enter the Array data :3
// Enter the Array data :4
// Enter the Array data :5
// Your Array is :  1  2  3  4  5
// Your reverse Array is :  5  4  3  2  1