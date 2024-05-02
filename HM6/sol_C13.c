#include <stdio.h>
float cosinus(float x);
double step(float x, int n);
int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f\n", cosinus(x));
}

float cosinus(float x)
{
    float r = x * 3.141592/180;
    float result = 1 - step(r,2)/factorial(2) + step(r,4)/factorial(4) - step(r,6)/factorial(6);
    return result;
}

double step(float rad, int n)
{
    int i;
    float pow=1.;
    for(i=1;i<=n;i++)
    {
        pow*=rad;
    }
    return pow;
}
int factorial(int n)
{
    int res=n;
    if (n>1)
    {
    res *= factorial(n-1);
    }
    return res;
}
