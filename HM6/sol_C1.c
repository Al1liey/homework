#include <stdio.h>
int module(int a);
int main(void)
{   int a;
    scanf("%d", &a);
    a = module(a);
    printf("%d", a);
    return 0;
}
int module(int a)
{
    return a<0 ? -a:a;
}
