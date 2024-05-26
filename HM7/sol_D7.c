#include <stdio.h>
void print(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}

void print(int n)
{
    if(n)
    {
        printf("%d ", n);
        return print(n-1);
    }
}
