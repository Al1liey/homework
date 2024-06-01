#include <stdio.h>
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char letter;
    int count_uppercase = 0;
    int count_lowercase = 0;
    while(letter != EOF)
    {
        letter = fgetc(in);
        if ('A' <= letter && letter <= 'Z')
            count_uppercase++;
        else if ('a' <= letter && letter <= 'z')
            count_lowercase++;
    }
    fclose(in);
    fprintf(out, "%d %d", count_lowercase, count_uppercase);
    fclose(out);
    return 0;
}