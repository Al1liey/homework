#include <stdio.h>
int min(int arr[], int size);
int main(void)
{
    int arr[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", min(arr, 5));
    return 0;
}

int min(int arr[], int size)
{
    int mn = 62000;
    for(int i = 0; i < size; i++ )
    {
        mn = mn < arr[i] ? mn : arr[i];
    }
    return mn;
}
