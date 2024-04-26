#include <stdio.h>
#include <math.h>
int main(void)
{   int numb, i;
    scanf("%d", &numb);
    for (i=2; i<=sqrt(numb); i++)
    {
        if (numb%i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    numb > 1 ? printf("YES\n"): printf("NO\n");
    return 0;
}

