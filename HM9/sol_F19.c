#include <stdio.h>
int kolvo(int a[5][5]);
int srednee(int a[5][5]);
int main(void)
{
    int a[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", kolvo(a));
    return 0;
}

int srednee(int a[5][5])
{
    int i;
    int srd = 0;
    for(i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i==j)
            srd += a[i][j];
        }
    }
    return srd/i;
}

int kolvo(int a[5][5])
{
    int sred = srednee(a);
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i][j]>sred)
            {
                count++;
            }
        }
    }
    return count;
}
