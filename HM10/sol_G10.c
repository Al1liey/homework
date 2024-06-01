#include <stdio.h>
#include <string.h>
void swap(char* a, char* b);
void max_string(FILE* in, FILE* out);
void swap_to_max(char* string_1, char* string_2);
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    max_string(in, out);
    fclose(in);
    fclose(out);
}
void max_string(FILE* in, FILE* out)
{
    char* string;
    char max_str[1000] = {'0'};
    while(fscanf(in, "%s", string) == 1)
    {
            swap_to_max(max_str, string); 
    }
    max_str[strlen(max_str)] = '\0';
    fprintf(out, "%s", max_str);
}
void swap_to_max(char* string_1, char* string_2)
{
    if (strlen(string_1) < strlen(string_2))
    {
        int max_len = strlen(string_2);
        for(int i = 0; i < max_len; i++)
        {
            swap(&string_1[i], &string_2[i]);
        }
    }
}
void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}