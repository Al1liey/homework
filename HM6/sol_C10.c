#include <stdio.h>
void print_simple(int n);
int main(void)
{   
    int n;
    scanf("%d", &n);
    print_simple(n);
}

void print_simple(int n)
{   int i = 2;
    while(i <= n)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        else
        {
            i++;      
        }
    }
}
