#include <stdio.h>
float sinus(float x);
double step(float x, int n);
int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f\n", sinus(x));
}

float sinus(float x)
{
    float r = x * 3.141592/180;
    float result = r - step(r,3)/factorial(3) + step(r,5)/factorial(5) - step(r,7)/factorial(7);
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
