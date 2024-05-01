#include <stdio.h>
#include <math.h>
#include <inttypes.h>
int8_t logic(void);
int main(void)
{
    if (logic())
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

int8_t logic(void)
{
    int16_t n;
    scanf("%d" SCNd16, &n);
    int16_t i = 2;
    for(i; i <= sqrt(n);i++)
    {
        if (n % i == 0)
        return 0;
    }
    return 1;
}