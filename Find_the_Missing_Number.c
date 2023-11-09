#include <stdio.h>
#include <string.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int n = 4, product = 1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            product = a[i] * product;
        }
        int remaining = a[0] / product;
        int remainder = a[0] % product;
        if (remainder > 0)
        {
            printf("-1\n");
        }
        else if (remainder == 0)
        {
            printf("%d\n", remaining);
        }
    }
    return 0;
}
