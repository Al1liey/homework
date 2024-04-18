#include <stdio.h>

int main(void)
{   int a, b, c, mx_1, mx;
    scanf("%d%d%d", &a, &b, &c);
    mx_1 = a>b ? a:b;
    mx = mx_1>c ? mx_1:c;
    printf("%d", mx);
    return 0;
}

