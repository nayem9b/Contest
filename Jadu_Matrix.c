#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    if (row != col)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if ((i == j || i + j == row - 1) && matrix[i][j] != 1)
            {
                printf("NO\n");
                return 0;
            }

            if (i != j && i + j != row - 1 && matrix[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");
    return 0;
}