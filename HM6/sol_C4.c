#include <stdio.h>
int func(int x);
int main(void)
{
    int n, mx = 0;
    do
    {
        scanf("%d", &n);
        mx = mx>func(n)? mx : func(n);
    } while (n != 0);
    printf("%d\n", mx);
}

int func(int x)
{
    if (-2<=x && x<=2)
    {
        return x*x;
    }
    else if (x>=2)
    {
        return x*x+4*x+5;
    }
    else
    {
        return 4;
    }
}