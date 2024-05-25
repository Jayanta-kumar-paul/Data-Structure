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
    printf("\nEnter the search element :");
    scanf("%d",&item);

    int found=0;

    for(int i=0;i<size;i++)
    {
        if(a[i]==item);
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("element not found .");
    }
    else
    {
          printf("element found .");
    }

    return 0;
}
// Enter the size of array :5
// Enter the data a[0] =1
// Enter the data a[1] =2
// Enter the data a[2] =3
// Enter the data a[3] =4
// Enter the data a[4] =6
// Your array is :  1  2  3  4  6
// Enter the search element :4
// element found .