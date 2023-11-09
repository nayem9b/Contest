// #include <stdio.h>
// int main()
// {
//     char a[100];
//     scanf("%d", a);
//     int count = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("%d\n", count);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int st = strlen(a);
    printf("%d\n", st);
    return 0;
}
