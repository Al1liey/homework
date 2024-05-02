#include <stdio.h>
int chet(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    if (chet(n))
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
int chet(int n)
{
    int sum = 0;
    do
    {
        sum += n % 10;
    }
    while(n/=10);
    return sum % 2 == 0 ? 1 : 0;
}