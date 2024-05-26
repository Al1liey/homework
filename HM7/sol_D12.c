#include <stdio.h>
void print(int n, int k);
void printing(int i);
int main(void)
{
    int n;
    scanf("%d", &n);
    print(n, 1);
    return 0;
}

void print(int n, int k)
{
    for(int i = 1; i<=k; i++)
    {
        printf("%d ", k);
        n--;
        if (n == 0)
        return;
    }
    print(n, k+1);
}
