#include <stdio.h>
#include <string.h>

int is_palindrome(char a[])
{
    char initital[1001];
    strcpy(initital, a);
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
    int v = strcmp(a, initital);
    if (v == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char a[1001];
    scanf("%s", a);
    int result = is_palindrome(a);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}