#include <stdio.h>
#include <math.h>
int is_prime(int n, int delitel);
int main(void)
{   int n;
    scanf("%d", &n);
    n==1 ? printf("NO"): is_prime(n, 2) ? printf("YES"):printf("NO");
    return 0;
}

int is_prime(int n, int delitel)
{
    if (n % delitel == 0 && n != delitel)
    {
        return 0;
    }
    else if (delitel >= (int)sqrt(n)+1)
    {
        return 1;
    }
    return is_prime(n, ++delitel);
}
