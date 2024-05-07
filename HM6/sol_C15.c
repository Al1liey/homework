#include <stdio.h>
#include <inttypes.h>
int8_t more(int16_t n);
int main(void)
{
    int16_t n;
    scanf("%" SCNd16, &n);
    printf(more(n)? "YES\n":"NO\n");
}

int8_t more(int16_t n)
{
    int8_t d=0, d2;
    d = n % 10;
    while(n/=10)
    {
        d2 = n%10;
        if (d <= d2)
        {
            return 0;
        }
        d = d2;
    }
    return 1;
}
