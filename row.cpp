#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, c1;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c1);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Result of matrix subtraction:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}