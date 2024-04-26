#include <stdio.h>

int main(void)
{   int a, b, c;
    scanf("%d", &a);
    b = a%10;
    c = a%10;
    while (a/=10)
    {
        if (b > a%10)
        {
            b = a%10;
        }
        if (c < a%10)
        {
            c = a%10;
        }
    }
    printf("%d %d", b, c);

    return 0;
}

