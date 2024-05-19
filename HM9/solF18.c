#include <stdio.h>
int sum_max_matrix(int a[10][10]);
int sum(int arr[]);
int main(int argc, char **argv)
{
    int a[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", sum_max_matrix(a));
    return 0;
}

int sum_max_matrix(int a[10][10])
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        int mx = -10000;
        for(int j = 0; j < 10; j++)
        {
            mx = mx > a[i][j] ? mx : a[i][j];
        }
        arr[i] = mx;
    }
    return sum(arr);
}

int sum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    return sum;
}
