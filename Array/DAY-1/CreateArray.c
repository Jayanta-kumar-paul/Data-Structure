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
// Enter the size of array :4
// Enter the Array data :2
// Enter the Array data :3
// Enter the Array data :4
// Enter the Array data :5
// Your Array is :  2  3  4  5