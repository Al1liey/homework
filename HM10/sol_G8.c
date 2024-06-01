#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main(void)
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char string[SIZE];
    int arr[SIZE];
    fgets(string, SIZE, in);
    for(int i = 0; i < strlen(string); i++)
    {
        if (isdigit(string[i]))
        {
            printf("%d ", string[i]);
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}