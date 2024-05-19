#include <stdio.h>
void popit(char s[], int size);
int main(void)
{
    char s[1000];
    int i=0;
    char c;
    while( (c=getchar())!='.')
    s[i++]=c;
    s[i]='\0';
    popit(s, i-1);
    return 0;
}
void popit(char s[], int size)
{
    char result[2000] = {'0'};
    int res[2000]={0};
    int j = 0;
    int count = 1;
    for(int i = 0; i<=size; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            result[j] = s[i];
            res[j] = count;
            j++;
            count = 1;
        }
    }
    for(int i = 0; i < j; i++)
    {
        printf("%c%d",result[i],res[i]);
    }
}
