#include <stdio.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int n;
    fscanf(in, "%d", &n);
    int j = 2;
    int k = 1;
    for(int i = 0; i < n/2; i++)
    {
        fprintf(out, "%c%c", 0x40 + k, 0x30 + j);
        j += 2;
        k++;
        if (j > 8)
        {
            j = 2;
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}

