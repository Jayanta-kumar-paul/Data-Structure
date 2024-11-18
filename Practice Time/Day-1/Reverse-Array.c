#include<stdio.h>
int main()
{
    int a[' '],size;

    printf("Enter the size of array :");
    scanf("%d",&size);
    // Data Insert
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array data :");
        scanf("%d",&a[i]);
    }
    // Forward display(traversing)
    printf("Your Array is :");
    for(int i=0;i<=size-1;i++)
    {
        printf("%3d",a[i]);
    }
    // reverse display(backword Traversing)
    printf("\nYour reverse Array is :");
    for(int i=size-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }

    return 0;
}