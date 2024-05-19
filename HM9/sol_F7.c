#include <stdio.h>
//~ int sizing(int a[], int N);
//~ int compression(int a[],int b[], int N);
//~ int main(int argc, char **argv)
//~ {   long long int N;
    //~ scanf("%lld", &N);
    //~ int a[N];
    //~ for(int i = 0; i<N; i++)
    //~ {
        //~ scanf("%d", &a[i]);
    //~ }
    //~ int siz = sizing(a,N);
    //~ int b[siz];
    //~ int* c = compression(a, b, N);
    //~ for(int i=0;i<siz; i++)
    //~ {
        //~ printf("%d", c[i]);
    //~ }
    //~ return 0;
//~ }

//~ int sizing(int a[], int N)
//~ {
    //~ int j = 0;
    //~ for(int i = 0; i < N; i++)
    //~ {
        //~ if (a[i]!=a[i+1])
        //~ {
            //~ j++;
        //~ }
    //~ }
    //~ return j;
//~ }
int compression(int a[],int b[], int N)
{
    int j = 0;
    int count = 1;
    if(a[0]==1)
    {
        b[j++]=0;
    }
    for(int i=1;i<=N;i++)
    {
        if(a[i]==a[i-1])
        {
            count++;
        }
        else
        {
            b[j++]=count;
            count = 1;
        }
    }
    return j;
}
