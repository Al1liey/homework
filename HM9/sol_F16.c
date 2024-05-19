#include <stdio.h>
int white_black(char* s);
int main(void)
{
    char s[3];
    scanf("%s", s);
    white_black(s) ? printf("WHITE"):printf("BLACK");
    return 0;
}

int white_black(char* s)
{
    if(s[0]=='A' || s[0]=='C' || s[0]=='E' || s[0] == 'G')
    {
        return (s[1]-'0') % 2 == 0;
    }
    else
    {
        return (s[1]-'0') % 2 != 0;
    }
}
