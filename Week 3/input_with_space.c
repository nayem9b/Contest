// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[12];
//     gets(a);
//     printf("%s", a);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char a[12];
    fgets(a, 10, stdin);
    a[5] = '\0';
    printf("%s", a);
    return 0;
}