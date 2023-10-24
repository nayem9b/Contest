#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    printf("Sum %d", sum);
    return 0;
}