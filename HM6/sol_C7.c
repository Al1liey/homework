#include <stdio.h>
#include <inttypes.h>
int32_t Npsh4ka(int16_t N, int16_t P);
int main(void)
{   int16_t n;
    int16_t p;
    scanf("%" SCNd16 "%"SCNd16, &n, &p);
    printf("%"PRId32, Npsh4ka(n,p));

}

int32_t Npsh4ka(int16_t N, int16_t P)
{   int R = 0, k = 1;
    while (N>0)
    {
        R += (N % P)*k;
        k *= 10;
        N/= P;
    }
    return R;
}
