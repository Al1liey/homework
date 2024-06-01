#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char s[1000];
    fscanf(in, "%[^\n^EOF]s", s);
    fprintf(out,"%s, %s, %s %d", s, s, s, (int)strlen(s));
    fclose(in);
    fclose(out);
    return 0;
}

