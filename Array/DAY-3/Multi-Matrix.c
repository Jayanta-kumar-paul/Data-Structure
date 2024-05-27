#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100];
    int r1, r2, c1, c2, sum;

    printf("Enter the number of rows for the 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for the 1st matrix: ");
    scanf("%d", &c1);

    printf("Enter the number of rows for the 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns for the 2nd matrix: ");
    scanf("%d", &c2);

    if (c1 == r2) {
        // Input for the first matrix
        printf("Enter elements for the 1st matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("Enter element of a[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

         printf("Your matrix is :\n");
        for (int i = 0; i <= r1 - 1; i++)
        {
            for (int j = 0; j <= c1 - 1; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }

        // Input for the second matrix
        printf("Enter elements for the 2nd matrix:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                printf("Enter element of b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("Your matrix is :\n");
        for (int i = 0; i <= r2 - 1; i++)
        {
            for (int j = 0; j <= c2 - 1; j++)
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");
        }
        
        // Matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                sum = 0;
                for (int k = 0; k < c1; k++) {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        // Display the result
        printf("Resultant matrix (a * b):\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%3d", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
    }

    return 0;
}
