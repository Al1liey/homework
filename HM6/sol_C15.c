#include <stdio.h>
#include <inttypes.h>
int8_t more(int16_t n);
int main(void)
{
    int16_t n;
    scanf("%d" SCNd16, &n);
    if (more(n))
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

int8_t more(int16_t n)
{
    int i = 1, d1, d2;
    d1 = n % 10;
    while(n/=10)
    {
        d2 = n%10;
        if (d1 <= d2)
        {
            return 0;
        }
        d1 = d2;
    }
    return 1;
}