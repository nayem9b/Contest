#include <stdio.h>

int count_before_one(int ar[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (ar[i] == 1)
        {
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int exists = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            exists = 1;
        }
    }

    int result = count_before_one(ar, n);
    if (exists == 1)
    {
        printf("%d ", result - 1);
    }
    else
    {
        printf("%d ", result);
    }

    return 0;
}