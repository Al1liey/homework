#include <stdio.h>

int main(void)
{   int x1,y1,x2,y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    float k = (y1-y2)*1./(x1-x2);
    float b = y2 - k*x2;
    printf("%.2f %.2f", k, b);
    return 0;
}
