#include <stdio.h>
int main()
{
    int n, testcase;
    scanf("%d", &testcase);
    if (testcase <= 1000 && testcase >= 1)
    {
        for (int i = 0; i < testcase; i++)
        {
            scanf("%d", &n);
            if (n <= 10000 && n >= 1)
            {
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
        }
    }

    return 0;
}