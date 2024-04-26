#include <stdio.h>
int main(void)
{   int a, b, c;
    scanf("%d", &a);
    b = a%10;
    while (a/10)
    {
        a /=10;
        c = a%10;
        if (b==c)
        {
            printf("YES");
            return 0;
        }
        b = c;
    }
    printf("NO");
    return 0;

}

