#include <stdio.h>
#include <inttypes.h>
void print(int16_t n,int16_t i);
int main(int argc, char **argv)
{   int16_t n = 0;
    scanf("%" SCNu16, &n);
    print(n, 1);
    return 0;
}

void print(int16_t n, int16_t i)
{
    if(i==n)
    {
        printf("%" PRIu16 " ", n);
    }
    else
    {
        printf("%" PRIu16 " ", i);
        return print(n, i+1);
    }
}
