#include <stdio.h>
int main()

{
    // create file
    int a[' '], size ,i,item;
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

    // search element 
    printf("\n Enter the search element :");
    scanf("%d",&item);

    int p=0,pos;

    for(int i=0;i<size;i++)
    {
        if(item==a[i]);
        {
            p=1;
            pos=i+1;
            break;
        }
    }

    if(p==0)
    {
        printf("element not found .");
    }
    else
    {
        printf("The search is successful and the element found in %d position",pos);
    }

    return 0;
}