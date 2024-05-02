#include <stdio.h>
unsigned short int middle(unsigned short int a, unsigned short int b);
int main(void)
{   unsigned short int a,b;
    scanf("%hu%hu", &a, &b);
    printf("%hu", middle(a,b));

    return 0;
}
unsigned short int middle(unsigned short int a,unsigned short int b)
{
    return (a+b)/2;
}
