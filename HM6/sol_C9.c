#include <stdio.h>
#include <inttypes.h>
int factorial(int8_t N);
int main(void)
{
    int8_t N;
    scanf("%" SCNd8, &N);
    printf("%d", factorial(N));
    return 0;
}

int factorial(int8_t N)
{
    if(N==1)
    {
        return 1;
    }
    return factorial(N-1)*N;
}
