#include <stdio.h>
#include <inttypes.h>
void print(int32_t n);
int main(void)
{
    int32_t n;
    scanf("%" SCNu32, &n);
    print(n);
    return 0;
}

void print(int32_t n)
{
    if(n /10 !=0)
    {
        printf("%" PRIu32 " ", n % 10);
        return print(n/10);
    }
    else
    printf("%" PRIu8, n);
}
