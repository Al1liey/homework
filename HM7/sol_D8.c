#include <stdio.h>
void print_ab(int a, int b);
void print_ba(int a, int b);
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    a < b ? print_ab(a,b): print_ba(a, b);
    return 0;
}

void print_ab(int a, int b)
{
    if(b>=a)
    {
        printf("%d ", a);
        print_ab(++a, b);
    }
}
void print_ba(int a, int b)
{
    if(a>=b)
    {
        printf("%d ", a);
        print_ba(--a, b);
    }
}
