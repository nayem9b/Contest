#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = ((n + 1) / 2) + 4;
    k = 1;
    for (int i = 1; i <= ((n + 1) / 2) + 5; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k = k + 2;
        printf("\n");
    }
    int space = ((k - 3)) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}