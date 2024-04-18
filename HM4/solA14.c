#include <stdio.h>

int main(void)
{   int a;
    scanf("%d", &a);
    int mx = a%10 > (a/10)%10 ? a%10 : (a/10)%10;
    mx = mx > (a/100)%10 ? mx : (a/100)%10;
    printf("%d", mx);
    return 0;
}
