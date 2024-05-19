#include <stdio.h>
void change_max_min(int size, int a[]);
int main(int argc, char **argv)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    change_max_min(10, arr);
    for(int i = 0;i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


void change_max_min(int size, int a[])
{
    int mn = 62000;
    int mx = -10000;
    int mx_ind = 0;
    int mn_ind = 0;
    for(int i = 0; i< size; i++)
    {
        mn = mn < a[i] ? mn : a[i];
        mn_ind = mn<a[i] ? mn_ind : i;
        mx = mx > a[i] ? mx : a[i];
        mx_ind = mx > a[i] ? mx_ind: i;
    }
    int temp = a[mn_ind];
    a[mn_ind] = a[mx_ind];
    a[mx_ind] = temp;
}

