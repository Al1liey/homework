#include <stdio.h>

int main(void)
{   int a, b, c;
    scanf("%d", &a);
    b = 0;
    c = 0;
    while(a>0)
    {
        if ((a%10)%2==0)
        {
            b++;
        }
        a/=10;
        c++;
    }
    if (b==c)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

