#include <stdio.h>

int main(void)
{   int a,b, count;
    scanf("%d", &a);
    while (a>0)
    {
        b = a%10;
        a /= 10;
        if (b==9)
        {
            count ++;
        }
    }
    if (count==1)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

