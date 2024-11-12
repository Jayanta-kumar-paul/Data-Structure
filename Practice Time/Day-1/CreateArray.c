#include<stdio.h>
int main()

{
    int arr[' '],size;
    
    printf("Enter the size of Array :");
    scanf("%d",&size);

    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the Array date:");
        scanf("%d",&arr[i]);
    }
    //Display the Array
    printf("Your Array is :");
    for(int i=0;i<=size-1;i++)
    {
        printf("%3d",arr[i]);
    }

    return 0;
}
