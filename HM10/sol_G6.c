#include <stdio.h>
#include <string.h>
int is_palindrome(char string[]);
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char string[1000];
    fscanf(in, "%s", string);
    is_palindrome(string) ? fprintf(out, "YES\n") : fprintf(out, "NO\n");
    fclose(in);
    fclose(out);
    return 0;
}

int is_palindrome(char string[])
{
    int j = strlen(string) - 1;
    for(int i = 0; i<=strlen(string)/2; i++)
    {
        if(string[i] != string[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
}