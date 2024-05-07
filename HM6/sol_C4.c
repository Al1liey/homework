#include <stdio.h>
int func(int x);
int main(void)
{
    int n, mx = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        mx = mx>func(n)? mx : func(n);
        scanf("%d", &n);
    } ;
    printf("%d\n", mx);
}

int func(int x)
{
    if (x<-1)
    {
        return 4;
    }
    else if (x<2)
    {
        return x*x;
    }
    else
    {
        return x*x+4*x+5;
    }
}
