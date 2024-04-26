#include <stdio.h>

int main(void)
{   int a, i;
    scanf("%d", &a);
    for (i = 1; i<=3; i++)
    {
        a /=10;
        if (a == 0 && i == 3)
        {
            printf("YES");
        }
        else if (a == 0 && i < 3)
        {
            printf("NO");
            break;
        }
        else if (a>0 &&i == 3)
        {
            printf("NO");
        }
    }
    return 0;
}

