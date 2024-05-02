#include <stdio.h>
void letter();
int main(void)
{ 
    letter();
    return 0;
}

void letter()
{   
    char c;
    while (c != '.')
    {   
        scanf("%c", &c);
        if ('a'<=c&&c<='z')
        {
            putchar((c - 'a')+'A');
        }
        else if(c != '.')
        {
            putchar(c);
        }
    }
}