#include <stdio.h>

int main(void)
{
    int arr[30];
    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &arr[i]);
    }
    long int min_sum = 1000000;
    for(int i = 0; i < 30; i++)
    {
        for(int j = i + 1; j < 30; j++)
        {
            min_sum = min_sum > arr[i]+arr[j] ? arr[i]+arr[j] : min_sum;
        }
    }
    for(int i = 0; i < 30; i++)
    {
        for(int j = i + 1; j < 30; j++)
        {
            if (min_sum ==arr[i]+arr[j])
                {
                    printf("%d %d", i, j);
                    break;
                }

        }
    }
    return 0;
}

