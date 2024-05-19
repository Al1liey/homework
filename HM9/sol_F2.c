#include <stdio.h>
int sizing_nch(int a[], int n)
{
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
int sizing_ch(int a[], int n)
{
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort_even_odd(int n, int a[])
{
    int j = 0;
    int k = 0;
    int size_nch = sizing_nch(a, n);
    int size_ch = sizing_ch(a, n);
    int nch[size_nch];
    int ch[size_ch];
    for (int i = 0; i<n; i++ )
    {
        if (a[i] % 2 ==0)
        {
            ch[j]=a[i];
            j++;
        }
        else
        {
            nch[k] = a[i];
            k++;
        }
    }
    for(int i=0;i<size_ch;i++)
    {
        swap( &a[i], &ch[i]);
    }
    j = 0;
    for (int i = size_ch;i<n;i++)
    {
        swap(&a[i], &nch[j]);
        j++;
    }

}

