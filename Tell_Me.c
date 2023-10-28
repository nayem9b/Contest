#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int value;
        int exist = 0;
        scanf("%d", &value);

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == value)
            {
                exist = 1;
            }
        }
        if (exist == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}