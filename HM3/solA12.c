#include <stdio.h>

int main(void)
{   int b ;
    int a;
    scanf("%d", &a);
    b += a%10;
    b += (a/10)%10;
    b += (a/100)%10;
    printf("%d", b);
    return 0;
}

