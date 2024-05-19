#include <stdio.h>
int Min(int array[], int size);
int Nax(int array[], int size);
void swap_array(int array[], int size);
void swap(int* x, int *y);
int main(void)
{
    int arr[1100] = {0};
    int siz = 0;
    for (siz=0; siz<1000; siz++)
    {
        scanf("%d", &arr[siz]);
        if (arr[siz] == 0)
        {
            break;
        }
    }
    int array[siz];
    for( int i = 0; i<siz; i++)
    {
        array[i] = arr[i];
    }
    int M = Min(array, siz);
    swap_array(array,siz);
    for(int i = 0; i<siz; i++)
    {
        if(array[i] != M)
        {
            printf("%d", M);
            break;
        }
        M++;
    }
    return 0;
}

int Min(int array[], int size)
{
    int M = 62000;
    for(int i = 0; i<size; i++)
    {
        M = M<array[i] ? M : array[i];
    }
    return M;
}
int Nax(int array[], int size)
{
    int N=-10000;
    for(int i=0;i<size;i++)
    {
        N = N > array[i] ? N : array[i];
    }
    return N;
}
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap_array(int array[], int size)
{
    int i,j,min_idx;
    for(i = 0; i<size-1; i++)
    {
        min_idx = i;
        for(j = i+1; j<size; j++)
        {
            if(array[j]<array[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&array[min_idx],&array[i]);
    }
}
