#include <stdio.h>

int main(void)
{   int a, i ;
    scanf("%d", &a);
    for(i=10; i<=a; i++)
    {
        int p = 1, s = 0, n = i;
        while(n>0)
        {
            p*=(n%10);
            s += n%10;
            n/=10;
        }
        if(s==p)
        {
            printf("%d ", i);
        }

    }
    return 0;
}

