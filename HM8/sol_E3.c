#include <stdio.h>
#define SIZE 10
int max(int arr[]);
int max_index(int arr[]);
int min(int arr[]);
int min_index(int arr[]);
int main(void)
{
    int arr[SIZE] = {0};
    for (int i = 0; i< SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d %d %d", max_index(arr), max(arr), min_index(arr), min(arr));
    return 0;
}


int max(int arr[])
{
    int mx = -10000;
    for(int i = 0; i < SIZE; i++)
    {
        mx = arr[i] > mx ? arr[i] : mx;
    }
    return mx;
}
int min(int arr[])
{
    int mn = 62000;
    for(int i = 0; i < SIZE; i++)
    {
        mn = arr[i] < mn ? arr[i] : mn;
    }
    return mn;
}

int min_index(int arr[])
{
    int mn = 62000;
    int mn_i = 0;
    for(int i = 0; i < SIZE; i++)
    {
        mn_i = arr[i] < mn ? i : mn_i;
        mn = arr[i] < mn ? arr[i] : mn;
    }
    return mn_i+1;
}

int max_index(int arr[])
{
    int mx = -10000;
    int mx_i = 0;
    for(int i = 0; i < SIZE; i++)
    {
        mx_i = arr[i] > mx ? i : mx_i;
        mx = arr[i] > mx ? arr[i] : mx;
    }
    return mx_i+1;
}
