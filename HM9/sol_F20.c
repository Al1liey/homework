#include <stdio.h>
void zam_nechet(int a[]);
void zam_chet(int a[]);
int zamena_ch(int n);
int zamena_nch(int n);
int main(void)
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int bol = 0;
    for(int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            bol++;
        }
        else
        {
            bol = bol-1;
        }
    }
    bol > 0 ? zam_nechet(a):zam_chet(a);
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

int zamena_ch(int n)
{
    int p = 1;
    while(n != 0)
    {
        if((n % 10) % 2 == 0)
        {
            p *= (n % 10);
        }
        n /= 10;
    }
    return p;
}
int zamena_nch(int n)
{
    int p = 1;
    while (n != 0)
    {
        if((n % 10) % 2 != 0)
        {
            p *= (n % 10);
        }
        n/=10;
    }
    return p;
}
void zam_chet(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            a[i] = zamena_ch(a[i]);
        }
    }
}
void zam_nechet(int a[])
{
    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 != 0)
        {
            a[i] = zamena_nch(a[i]);
        }
    }
}

