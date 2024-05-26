#include <stdio.h>
#include <inttypes.h>
int16_t sum(int16_t n);
int main(void)
{
    int16_t n = 0;
    scanf("%" SCNu16, &n);
    printf("%" PRIu16, sum(n));
    return 0;
}

int16_t sum(int16_t n)
{
    if(n==0)
    return 0;
    return n + sum(n-1);
}
