#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char string[100] = "";
    int count = 0;
    while(fscanf(in, "%s", string) == 1)
    {
        if (string[strlen(string)-1] == 'a')
        {
            count++;
        }
    }
    fprintf(out, "%d", count);
    fclose(in);
    fclose(out);
    return 0;
}