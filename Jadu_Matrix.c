#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int primaryDiagonal = 0, secondaryDiagonal = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != 1)
            {
                primaryDiagonal = 0;
                break;
            }
            else if (a[i][j] == 1)
            {
                primaryDiagonal = 1;
            }
        }
    }
    if (primaryDiagonal == 1)
    {
        printf("Primary matrix");
    }
    else if (secondaryDiagonal == 1)
    {
        printf("secondary matrix");
    }
    else
    {
        printf("Jadu");
    }
    return 0;
}