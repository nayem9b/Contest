#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    if (n <= 100 && n >= 1 && k <= 100 && k >= 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("%d ", j);
                        }
            printf("\n");
        }
    }

    return 0;
}