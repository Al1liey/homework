#include <stdio.h>

int main(void)
{   int a, b, c;
    scanf("%d%d", &a, &b);
    for(a=a;a<=b;a++)
    {
        c += a*a;
    }
    printf("%d", c);
    return 0;
}

