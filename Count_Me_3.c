#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ar[] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        // {
        //     vowelCount++;
        // }
        printf("%s", ar[i]);
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[100];
//     scanf("%s", s);
//     int cnt[26] = {0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int value = s[i] - 'a';
//         cnt[value]++;
//     }
//     for (int i = 0; i < strlen(s); i++)
//     {
//         int value = s[i] - 97;
//         if (cnt[value] != 0)
//         {
//             printf("%c - %d\n", value + 'a', cnt[value]);
//         }
//         cnt[value] = 0;
//     }
//     return 0;
// }