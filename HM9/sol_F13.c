#include <stdio.h>
int count_between(int from, int to, int size, int a[]);
int main(int argc, char **argv)
{
    int arr[12]={80,89,77,81,2,88,57,64,49,33, 28,58};
    for(int i = 0; i<12; i++)
    {
        for (int j = i+1; j<12; j++)
        {
            printf("from = %d to =  %d res = %d\n",arr[i],arr[j], count_between(arr[i],arr[j],12,arr));
        }
    }
    return 0;
}
int count_between(int from, int to, int size, int arr[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= from && arr[i] <= to) {
            count++;
        }
    }
    return count;
}
