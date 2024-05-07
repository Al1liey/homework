#include <stdio.h>
int trush(void);
int main(void)
{

    if (trush())
    {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    return 0;
}
int trush()
{
    signed int count = 0;
    char c;
    while(c!='.')
    {
        scanf("%c", &c);
        if(c=='(')
        {
            count++;
        }
        else if (c==')')
        {
            count--;
        }
        else if(count == -1)
        {
            return 0;
        }
    }
    printf("%d", count);
    return count;
}
