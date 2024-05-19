#include <stdio.h>

//~ int main(int argc, char **argv)
//~ {
    //~ long long int size;
    //~ scanf("%lld", &size);
    //~ int arr[size];
    //~ for(int i = 0; i<size; i++)
    //~ {
        //~ scanf("%d", &arr[i]);
    //~ }
    //~ printf("%d", find_max_array(size, arr));
    //~ return 0;
//~ }

int find_max_array(int size, int a[])
{
    long long signed int mx = -10000000000;
    for(int i=0;i<size;i++)
    {
        mx = mx>a[i] ? mx : a[i];
    }
    return mx;
}
