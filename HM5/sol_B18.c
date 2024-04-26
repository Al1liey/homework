#include <stdio.h>

int main(void)
{   unsigned int a, i, f1 = 0, f2 = 1, fib = 0;
    scanf("%d", &a);
    printf("%d ", f2);
    for (i = 1; i < a; i++)
    {
        fib = f1+f2;
        printf("%d ", fib);
        f1 = f2;
        f2 = fib;
    }

    return 0;
}

