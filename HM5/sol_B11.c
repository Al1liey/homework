#include <stdio.h>

int main(void)
{
    int a, b;
    b = 0;
    scanf("%d", &a);
    while(a>0)
    {
        b = b*10 + a%10;
        a/=10;
    }
    printf("%d", b);
    return 0;

}

