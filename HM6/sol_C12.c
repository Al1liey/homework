#include <stdio.h>
float sinus(float x);
int main(void)
{   
    float x;
    scanf("%f", &x);
    printf("%.3f\n", sinus(x));
}

float sinus(float x)
{   
    x = x * 3.141592/180;
    float r = x - x*x*x/6 + x*x*x*x*x/120 - x*x*x*x*x*x*x/(720*7);
    return r;
}
