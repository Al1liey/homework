#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char symbol;
    while (symbol != EOF)
    {
        symbol = fgetc(in);
        if (symbol != EOF)
        {
            if (symbol == 'A')
                fprintf(out,"%c",'B');
            else if (symbol == 'B')
                fprintf(out, "%c", 'A');
            else if (symbol == 'a')
                fprintf(out, "%c", 'b');
            else if (symbol == 'b')
                fprintf(out, "%c", 'a');
            else
                fprintf(out, "%c", symbol);
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}