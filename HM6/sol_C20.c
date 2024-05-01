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
    int count = 0;
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
    }
    return count;
}