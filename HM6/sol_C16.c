#include <stdio.h>
#include <math.h>
#include <inttypes.h>
int8_t logic(void);
int main(void)
{
    if (logic())
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}

int8_t logic(void)
{
    int16_t n;
    scanf("%" SCNd16, &n);
    int16_t i;
    if(n!=1&&n!=0){
    for(i = 2 ; i <= n/2;i++)
    {
        if (n % i == 0)
        return 0;
    }
    return 1;
}
return 0;
}
