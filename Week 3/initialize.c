#include <stdio.h>
int main()
{
    char a[] = "Rahat\0";
    printf("%s", a);
    return 0;
}