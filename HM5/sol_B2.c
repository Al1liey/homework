#include <stdio.h>

int main(void)
{   int a, b;
    scanf("%d%d", &a, &b);
    for (a=a; a<=b; a++)
    {
        printf("%d ", a*a);
    }
    return 0;
}

