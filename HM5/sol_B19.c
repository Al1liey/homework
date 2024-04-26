#include <stdio.h>

int main(void)
{   int numb, sum=0;
    scanf("%d", &numb);
    do
    {
        sum+= numb%10;
    }
    while(numb/=10);
    if (sum==10)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

