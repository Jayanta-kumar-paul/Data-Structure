
#include <stdio.h>

void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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
    insertion_sort(a, n);
    printf("\nYour array after sorting :");
    print(a, n);
    return 0;
}
