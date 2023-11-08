#include <stdio.h>
#include <string.h>
int main()
{
    int test, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int countT = 0, countP = 0;
        for (int i = 0; i < test; i++)
        {

            for (int i = 0; i < strlen(s); i++)
            {
                if (s[i] == 'T')
                {
                    countT++;
                }
                else if (s[i] == 'P')
                {
                    countP++;
                }
            }
        }
        if (countT > countP)
        {
            printf("Tiger\n");
        }
        else if (countT < countP)
        {
            printf("Pathaan\n");
        }
        else if (countT == countP)
        {
            printf("Draw\n");
        }
    }
    return 0;
}