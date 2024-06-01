#include <stdio.h>
#define SIZE 10
int max(int arr[],int length);
int* del_max(int arr[], int mx);
int main(void)
{
    int arr[SIZE] = {0};
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mx = max(arr,SIZE);
    int *arr2 = del_max(arr, mx);
    int mx_2 = max(arr2, SIZE - 1);
    printf("%d", mx+mx_2);
    return 0;
}

int max(int arr[], int length)
{
    int mx = 0;
    for(int i = 0; i < length;i++)
    {
        mx = mx > arr[i] ? mx : arr[i];
    }
    return mx;
}

int* del_max(int arr[], int mx)
{
    static int arr2[SIZE-1] = {0};
    int j = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != mx)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    return arr2;
}

