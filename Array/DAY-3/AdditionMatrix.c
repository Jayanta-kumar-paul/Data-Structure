#include <stdio.h>

int main()

{

    int a[' '][' '], b[' '][' '], c[' '][' '];
    int r1, r2, c1, c2;

    printf("Enter elements  of row 1st matrix : ");
    scanf("%d", &r1);
    printf("Enter elements  of column 1st matrix : ");
    scanf("%d", &c1);

    printf("Enter elements  of row 2nd matrix : ");
    scanf("%d", &r2);
    printf("Enter elements  of column 2nd matrix : ");
    scanf("%d", &c2);

    if (r1==r2&&c1==c2)
    {
        for (int i = 0; i <= r1 - 1; i++)
        {
            for (int j = 0; j <= c1 - 1; j++)
            {
                printf("Enter element of a[%d][%d]:", i, j);
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

        for (int i = 0; i <= r2 - 1; i++)
        {
            for (int j = 0; j <= c2 - 1; j++)
            {
                printf("Enter element of b[%d][%d]:", i, j);
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

        for (int i = 0; i <= r1 - 1; i++)
        {
            for (int j = 0; j <= r2 - 1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("Your addition matrix is :\n");
        for (int i = 0; i <= r2 - 1; i++)
        {
            for (int j = 0; j <= c2 - 1; j++)
            {
                printf("%3d", c[i][j]);
            }
            printf("\n");
        }
    }

    else
   
    {
        printf("Wrong order entered");
    }

    return 0;
}