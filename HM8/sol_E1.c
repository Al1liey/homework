#include <stdio.h>

int main(void)
{
    int arr[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    float sr = 0;
    for (int i = 0; i<5; i++)
    {
        sr += arr[i];
    }
    sr = sr*1./5;
    printf("%.3f", sr);
    return 0;
}

