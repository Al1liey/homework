#include <stdio.h>
int is_number(char c);
int main(void)
{
    int count = 0;
    char c;
    while(c!='.')
    {
        scanf("%c", &c);
        if (is_number(c))
        {
            count++;
        }
    }
    printf("%d\n", count);
}
int is_number(char c)
{
    if ('0'<=c&&c<='9')
    {
        return 1;
    }
    return 0;
}