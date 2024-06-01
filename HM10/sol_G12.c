#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char string[1000] = "";
    while(fscanf(in, "%s", string) == 1)
    {
        fprintf(out, "%s\n", string);
    }
    fclose(in);
    fclose(out);
    return 0;
}