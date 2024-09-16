#include <stdio.h>

void insertion_sort_descending(int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void print(int a[], int n) {
    int i; 
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}

int main() {
    int a[100], n, i;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the data : ");
        scanf("%d", &a[i]);
    }
    printf("\nYour array before sorting :");
    print(a, n);
    insertion_sort_descending(a, n);
    printf("\nYour array after sorting in descending order:");
    print(a, n);
    return 0;
}
// Enter the size of your array: 5
// Enter the data : 52
// Enter the data : 61
// Enter the data : 84
// Enter the data : 02
// Enter the data : 03

// Your array before sorting : 52 61 84  2  3
// Your array after sorting in descending order: 84 61 52  3  2