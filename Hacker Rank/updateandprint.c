#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    if (value >= 1 && value <= 100 && index >= 0 && index <= n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == index)
            {
                ar[i] = value;
            }
            printf("%d ", ar[i]);
        }
    }

    return 0;
}