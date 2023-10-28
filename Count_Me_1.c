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
    int divByTwo = 0, divByThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0 || (ar[i] % 2 == 0 && ar[i] % 3 == 0))
        {
            divByTwo++;
        }
        if (ar[i] % 3 == 0 && (ar[i] % 2 != 0 && ar[i] % 3 == 0))
        {
            divByThree++;
        }
    }
    printf("%d %d ", divByTwo, divByThree);
    return 0;
}