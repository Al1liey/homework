#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char s[1000] = {'\0'};
    fscanf(in, "%[^EOF^\n]s", s);
    for(int i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[strlen(s)-1] && i != strlen(s)-1)
        {
            fprintf(out, "%d ", i);
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}

