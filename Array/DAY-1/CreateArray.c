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
    return 0;
}