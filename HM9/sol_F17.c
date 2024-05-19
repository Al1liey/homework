#include <stdio.h>
int sled(int a[5][5]);
int main(void)
{
    int a[5][5];
    for(int i = 0; i<5;i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", sled(a));
    return 0;
}

int sled(int a[5][5])
{
    int sld = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++ )
        {
            if(i == j)
            {
                sld += a[i][j];
            }
        }
    }
    return sld;
}
