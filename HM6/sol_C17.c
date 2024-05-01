#include <stdio.h>
#include <math.h>
int is_happy_number(int n);
int main(void)
{   
    int n;
    scanf("%d", &n);
    if (is_happy_number(n))
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
int is_happy_number(int n)
{
    int sum = 0 , p = 1;
    do
    {
        sum+= n % 10;
        p *= n % 10;
    }
    while (n/=10);
    return sum==p;
}