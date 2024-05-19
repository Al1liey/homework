#include <stdio.h>

int main(int argc, char **argv)
{

    return 0;
}

int count_bigger_abs(int n, int a[])
{
    int count = 0;
    int mx = -10000;
    for (int i = 0; i < n; i++)
    {
        mx = mx > a[i] ? mx : a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]*a[i]> mx*mx && a[i]<0)
        {
            count++;
        }
    }
    return count;
}
