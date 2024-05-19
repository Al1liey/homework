#include <stdio.h>
void swap_negmax_last(int size, int a[]);
int main(void)
{
    int arr[10] = {1,-2,-3,-4,5,6,7,8,9,10};
    swap_negmax_last(10,arr);
    for(int  i = 0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void swap_negmax_last(int size, int a[])
{
    int mn = -20000;
    for(int i = 0; i<size; i++)
    {
        mn = a[i] < 0 ? mn > a[i] ? mn : a[i] : mn ;
    }
    for(int i = 0; i <size; i++)
    {
        if (a[i] == mn)
        {
            int temp = a[size-1];
            a[size-1] = a[i];
            a[i] = temp;
        }
    }
}

