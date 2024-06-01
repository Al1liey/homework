#include <stdio.h>
#include <string.h>
int check_for_same(char* string, char symbol);
void string_formation(FILE* in, FILE *out);
void print_out(FILE* out, char* string);
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    string_formation(in, out);
    fclose(in);
    fclose(out);
    return 0;
}
int check_for_same(char* string, char symbol)
{
    for(int i = 0; i < strlen(string); i++)
    {
        if (symbol == string[i])
        {
            return 0;
        }
    }
    return 1;
}
void string_formation(FILE *in, FILE *out)
{
    char symbol;
    char string[1000] = {'0'};
    int i = 0;
    while((symbol = fgetc(in)) != EOF)
    {
        if (symbol != ' ' && symbol != EOF && check_for_same(string,symbol))
        {
            string[i] = symbol;
            i++;
        }
    }
    print_out(out, string);
}

void print_out(FILE* out, char* string)
{
    for(int i = 0; i < strlen(string); i++)
    {
        fprintf(out, "%c", string[i]);
    }
}