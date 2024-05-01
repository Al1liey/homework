#include <stdio.h>
float cosinus(float x);
int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f", cosinus(x));
}
float cosinus(float x)
{
    x = x * 3.141592/180;
    return 1 - x*x/2 + x*x*x*x/24 - x*x*x*x*x*x/720;
}
