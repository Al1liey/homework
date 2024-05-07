#include <stdio.h>
int is_happy_number(int n);
int sum(int n);
int proizv(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf(is_happy_number(n)? "YES\n":"NO\n");
}
int is_happy_number(int n)
{
    if (sum(n)==proizv(n))
    {
        return 1;
    }
    return 0;
}

int sum(int n)
{
    int sum = 0;
    do
    {
        sum+=n%10;
    }
    while (n/=10);
    return sum;
}
int proizv(int n)
{
    int p = 1;
    do
    {
        p *=n%10;
    }
    while (n/=10);
    return p;
}
