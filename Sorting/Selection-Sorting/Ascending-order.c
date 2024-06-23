
#include <stdio.h>

void selection_sort(int a[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            temp = a[min_idx];
            a[min_idx] = a[i];
            a[i] = temp;
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}

int main()
{
    int a[' '], n, i;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the data : ");
        scanf("%d", &a[i]);
    }
    printf("\nYour array before sorting :");
    print(a, n);
    selection_sort(a, n);
    printf("\nYour array after sorting :");
    print(a, n);
    return 0;
}
// Enter the size of your array: 5
// Enter the data : 23
// Enter the data : 15
// Enter the data : 14
// Enter the data : 26
// Enter the data : 84

// Your array before sorting : 23 15 14 26 84
// Your array after sorting : 14 15 23 26 84