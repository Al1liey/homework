#include <stdio.h>
#include <string.h>
#define NUMBERS 10
//~ void print_digit(char s[]);
//~ int main(void)
//~ {
    //~ char s[1000];
    //~ int i=0;
    //~ char c;
    //~ while( (c=getchar())!='\n' )
    //~ s[i++]=c;
    //~ s[i]='\0';
    //~ print_digit(s);
    //~ return 0;
    //~ }
void print_digit(char s[])
{
    int arr[NUMBERS]={0};
    int k = 0;
    int i = 0;
    do
    {
        if('0'<=s[i] && s[i]<='9')
        {
        k = s[i]-'0';
        arr[k]+=1;
        }
        i++;

    }
    while(i<strlen(s));
    for(int i=0;i<NUMBERS;i++)
    {
        if (arr[i])
        {
            printf("%d %d\n", i, arr[i]);
        }
    }
}
