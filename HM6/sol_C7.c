#include <stdio.h>
#include <inttypes.h>
int32_t Npsh4ka(int16_t N, int8_t P);
int main(void)
{   int16_t N;
    int8_t P;
    scanf("%d %d" SCNu16 SCNu8, &N, &P);
    printf("%d\n" PRId32, Npsh4ka(N,P));

}

int32_t Npsh4ka(int16_t N, int8_t P)
{   int R = 0, k = 1;
    while (N>0)
    {
        R += (N % P)*k;
        k *= 10;
        N/= P;
    }
    return R;
}