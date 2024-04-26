#include <stdio.h>

int main(void)
{   int a, ch=0, nch=0;
    scanf("%d", &a);
    do
    {
        if (a%10%2)
        {
            nch++;
        }
        else
        {
            ch++;
        }
    }
    while(a/=10);
    printf("%d %d", ch, nch);
    return 0;
}

