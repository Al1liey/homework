#include <stdio.h>

unsigned long rec(short N);
int main(void)
{   short N;
    scanf("%hu", &N);
    printf("%lu\n", rec(N));
}

unsigned long rec(short N)
{
    if (N==1)
    {
        return 1;
    }
    return rec(N-1)*2;
}
