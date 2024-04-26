#include <stdio.h>

int main(void)
{   char letter;
    while((letter=getchar())!= '.')
    {
        if (letter>='A'&&letter<='Z')
        {
            putchar('a'+(letter-'A'));
        }
        else
        {
            putchar(letter);
        }
    }
    return 0;
}

