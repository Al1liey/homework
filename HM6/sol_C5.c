#include <stdio.h>
int sum(int N);
int main()
{
    unsigned short int N;
    scanf("%hu", &N);
    printf("%d\n", sum(N));
    return 0;
}

int sum(int N)
{   
    int sum = 0, i = 0;
    for(i; i<=N;i++)
    {
        sum += i;
    }
    return sum;
}