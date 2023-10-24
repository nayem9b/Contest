#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int multi = 0;
    for (int i = 1; i <= 12; i++)
    {
        multi = n * i;
        printf("%d * %d = %d\n",n,i, multi);
    }
    return 0;
}