#include <stdio.h>
int sum_digits(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sum_digits(n));
    return 0;
}

int sum_digits(int n)
{
    if(n)
    {
        return n%10+sum_digits(n/10);
    }
    return 0;
}
