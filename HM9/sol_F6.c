#include <stdio.h>
//~ int is_two_size(int size, int a[]);
//~ int main(void)
//~ {
    //~ int size;
    //~ scanf("%d", &size);
    //~ int arr[size];
    //~ for(int i = 0; i<size; i++)
    //~ {
        //~ scanf("%d", &arr[i]);
    //~ }
    //~ is_two_size(size, arr) == 1 ? printf("YES"): printf("NO");
    //~ return 0;
//~ }

int is_two_same(int size, int a[])
{
    for(int i=0; i<size; i++)
    {
        for (int j = i+1; j<size;j++)
        {
            if (a[i]==a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
