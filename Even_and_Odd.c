#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int ar[n], evens = 0, odds = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            evens++;
        }
        else
        {
            odds++;
        }
    }
    printf("%d %d", evens, odds);
}
int main()
{
    odd_even();
    return 0;
}