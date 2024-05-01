#include <stdio.h>
#include <math.h>
int rec(short N);
int main(void)
{   short N;
    scanf("%d", &N);
    printf("%d\n%f", rec(N),45-pow(45,3)/6+pow(45,5)/120-pow(45,7)/720/7);
}

int rec(short N)
{
    if (N==1)
    {
        return 1;
    }
    return rec(N-1)*2;
}