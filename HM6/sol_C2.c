#include <stdio.h>
#include <math.h>
int power(short int n, unsigned short p);
int main(void)
{   short int n;
    unsigned short p;
    scanf("%hd%hd", &n, &p);
    printf("%d", power(n, p));
    return 0;
}

int power(short int n, unsigned short p)
{
    unsigned short i;
    int res=1;
    for (i=1;i<=p; i++)
    {
        res *= n;
    }
    return res;
}
