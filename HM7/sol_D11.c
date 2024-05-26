#include <stdio.h>
int cc_2(int n);
int main(void)
{   int n;
    scanf("%d", &n);
    printf("%d", cc_2(n));
    return 0;
}
int cc_2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 != 0)
    {
        return cc_2(n-1)+1;
    }
    else
    {
        return cc_2(n/2);
    }
}
