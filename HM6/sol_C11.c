#include <stdio.h>
#include <inttypes.h>
int8_t nod(int16_t a, int16_t b);
int main(void)
{
    int16_t a,b;
    scanf("%d%d" SCNd16 SCNd16, &a, &b);
    printf("%d" PRId8, nod(a,b));

}

int8_t nod(int16_t a, int16_t b)
{
    int16_t t;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    while (a % b != 0) {
        a = a % b;
        t = a;
        a = b;
        b = t;
    }
    return b;
}