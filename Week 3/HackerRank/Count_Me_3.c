#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", s);
        int cnt[26] = {0};
        int smallLetter = 0, capitalLetter = 0, numbers = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                numbers++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallLetter++;
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitalLetter++;
            }
        }
        printf("%d %d %d \n", capitalLetter, smallLetter, numbers);
    }

    return 0;
}