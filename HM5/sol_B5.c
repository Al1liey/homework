#include <stdio.h>

int main(int argc, char **argv)
{   int a, b;
    scanf("%d", &a);
    while (a>0)
    {
        b += a%10;
        a/= 10;
    }
    printf("%d", b);
    return 0;
}

