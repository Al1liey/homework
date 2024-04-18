#include <stdio.h>

int main(void)
{   int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int mx = a > b ? a : b;
    mx = mx > c ? mx : c;
    mx = mx > d  ? mx : d;
    mx = mx > e ? mx : e;
   int mn = a < b ? a : b;
    mn = mn < c ? mn : c;
    mn = mn < d ? mn : d;
    mn = mn < e ? mn : e;
    printf("%d", mx+mn);
    return 0;
}
