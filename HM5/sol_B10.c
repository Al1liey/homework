#include <stdio.h>

int main(int argc, char **argv)
{   int a;
    scanf("%d", &a);
    while (a>0)
    {
        if (a%10<=(a/10)%10)
        {
            printf("NO\n");
            return 0;
        }
        a /=10;
    }
    printf("YES\n");
    return 0;
}

