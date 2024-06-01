#include <stdio.h>
#include <string.h>
#define STR_SIZE 101
void letter_flags(char* word, char* one_letter_index);
void swap(char *a, char *b);
void swap_char(char* s);
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char word_1[STR_SIZE] = {'\0'};
    char word_2[STR_SIZE] = {'\0'};
    fscanf(in, "%s", word_1);
    fscanf(in, "%s", word_2);
    char letter_flag_1[strlen(word_1)];
    char letter_flag_2[strlen(word_2)];
    swap_char(word_1);
    swap_char(word_2);
    letter_flags(word_1, letter_flag_1);
    letter_flags(word_2, letter_flag_2);
    for(int i = 0; i <= strlen(word_1); i++)
    {
        for(int j = 0; j <= strlen(word_2); j++)
        {
            if(word_1[i] == word_2[j] && letter_flag_1[i]&&letter_flag_2[j])
            {
                fprintf(out, "%c ", word_1[i]);
            }
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}
void swap(char *a, char *b)
{
    char temp = *b;
    *b = *a;
    *a  = temp;
}
void swap_char(char* word)
{
    int m_i;
    for (int i = 0; i < strlen(word)-1; i++)
    {
        m_i = i;
        for(int j = i+1; j < strlen(word); j++)
        {
            if(word[j] < word[m_i])
            {
                m_i = j;
            }
        }
        swap(&word[m_i], &word[i]);
    }
}
void letter_flags(char* word, char* letter_flag)
{
    for (int i = 0; i <= strlen(word); i++)
        letter_flag[i] = word[i-1] != word[i] && word[i] != word[i+1] ? 1 : 0;
}
